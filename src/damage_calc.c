/*
 * Pokemon Stadium 2 - Damage Calculation System
 * Decompiled from MIPS assembly
 */

#include "types.h"
#include "battle.h"
#include "damage_calc.h"

// Damage calculation function 1 - 0x804b7df8
u16 calculate_damage_primary(PokemonBattleData* pokemon) {
    // Check Pokemon status condition at offset 3
    u8 status_condition = pokemon->data[3];
    if (status_condition == 0) {
        return 0;  // No damage if no status
    }
    
    // Check Pokemon type at offset 2
    u8 pokemon_type = pokemon->data[2];
    if (pokemon_type == 7) {
        // Special case for type 7 - halve current HP
        u16 current_hp = *(u16*)&pokemon->data[10];
        u16 damage = current_hp >> 1;  // Divide by 2
        *(u16*)&pokemon->data[10] = damage;
        
        if (damage == 0) {
            damage = 1;  // Minimum 1 damage
        }
        return damage;
    }
    
    // Get Pokemon stats for damage calculation
    u8 attack_stat = pokemon->data[5];
    u8 level = pokemon->data[4];
    u16 base_power = *(u16*)&pokemon->data[8];
    u32 move_data = *(u32*)&pokemon->data[16];
    
    // Damage formula: ((Level * 2 / 5 + 2) * Attack * BasePower / Defense) / 50 + 2
    u32 level_factor = (level * 2) / 5 + 2;
    u32 attack_component = level_factor * attack_stat;
    u32 power_component = attack_component * base_power;
    
    // Get defender's defense (would be passed in real implementation)
    u32 defense = 100;  // Placeholder
    u32 damage_before_modifier = power_component / defense;
    u32 final_damage = damage_before_modifier / 50 + 2;
    
    // Check for overflow
    if (final_damage > 0xFFFF) {
        final_damage = 0xFFFF;
    }
    
    // Apply additional modifiers based on status
    if (status_condition == 5) {  // Burn condition
        final_damage = final_damage / 2;
    }
    
    return (u16)final_damage;
}

// Damage calculation function 2 - 0x8049d6f4
u16 calculate_status_damage(void) {
    // Global battle data pointer
    u16* battle_hp_ptr = (u16*)0x841951ce;
    u8* battle_status = (u8*)0x841951c2;
    
    // Check for specific status condition (7 = severe status)
    u8 status = *battle_status;
    if (status == 7) {
        // Halve current HP for severe status
        u16 current_hp = *battle_hp_ptr;
        u16 new_hp = current_hp >> 1;
        *battle_hp_ptr = new_hp;
    }
    
    u16 hp_value = *battle_hp_ptr;
    if (hp_value == 0) {
        hp_value = 1;  // Minimum HP
        *battle_hp_ptr = hp_value;
    }
    
    // Get Pokemon battle stats
    u8 pokemon_level = *(u8*)0x841951d0;
    u8 attack_stat = *(u8*)0x841951c1;
    u8 defense_stat = *(u8*)0x841951c5;
    u16 move_power = *(u16*)0x841951cc;
    
    if (pokemon_level == 5) {  // Special case for level 5
        // Enhanced damage calculation for low level
        u32 level_bonus = (pokemon_level * 2) / 5 + 2;
        u32 attack_component = level_bonus * attack_stat;
        u32 damage = (attack_component * move_power) / defense_stat;
        
        // Apply final damage modifier
        damage = damage / 50 + 2;
        
        if (damage > 0xFFFF) {
            damage = 0xFFFF;
        }
        
        return (u16)damage;
    }
    
    return hp_value;
}

// Type effectiveness calculation helper
f32 get_type_effectiveness(u8 attack_type, u8 defend_type) {
    // Type effectiveness chart (simplified)
    // In the real game, this would be a lookup table
    
    // Super effective combinations
    if ((attack_type == TYPE_WATER && defend_type == TYPE_FIRE) ||
        (attack_type == TYPE_FIRE && defend_type == TYPE_GRASS) ||
        (attack_type == TYPE_GRASS && defend_type == TYPE_WATER) ||
        (attack_type == TYPE_ELECTRIC && defend_type == TYPE_WATER) ||
        (attack_type == TYPE_ELECTRIC && defend_type == TYPE_FLYING)) {
        return 2.0f;  // Super effective
    }
    
    // Not very effective combinations
    if ((attack_type == TYPE_WATER && defend_type == TYPE_GRASS) ||
        (attack_type == TYPE_FIRE && defend_type == TYPE_WATER) ||
        (attack_type == TYPE_GRASS && defend_type == TYPE_FIRE) ||
        (attack_type == TYPE_ELECTRIC && defend_type == TYPE_GRASS)) {
        return 0.5f;  // Not very effective
    }
    
    // No effect combinations
    if ((attack_type == TYPE_ELECTRIC && defend_type == TYPE_GROUND) ||
        (attack_type == TYPE_NORMAL && defend_type == TYPE_GHOST) ||
        (attack_type == TYPE_FIGHTING && defend_type == TYPE_GHOST)) {
        return 0.0f;  // No effect
    }
    
    return 1.0f;  // Normal effectiveness
}

// Critical hit calculation
bool calculate_critical_hit(PokemonBattleData* attacker, u16 move_id) {
    // Get Pokemon's base critical hit ratio
    u8 crit_ratio = 1;  // Base ratio
    
    // Some moves have higher critical hit ratios
    if (move_id == MOVE_SLASH || move_id == MOVE_RAZOR_LEAF || move_id == MOVE_CRABHAMMER) {
        crit_ratio = 8;  // High critical hit ratio moves
    }
    
    // Focus Energy doubles critical hit ratio
    if (attacker->status_flags & BATTLE_FLAG_FOCUS_ENERGY) {
        crit_ratio *= 2;
    }
    
    // Generate random number (0-255)
    u8 random = get_random_byte();
    
    // Critical hit threshold calculation
    u8 threshold = (attacker->speed >> 1) / crit_ratio;
    
    return random < threshold;
}

// Main damage calculation function
u16 calculate_battle_damage(PokemonBattleData* attacker, PokemonBattleData* defender, 
                           u16 move_id, u8 move_power) {
    // Base damage formula: ((Level * 2 / 5 + 2) * Attack * Power / Defense) / 50 + 2
    
    u8 level = attacker->level;
    u16 attack = attacker->attack;
    u16 defense = defender->defense;
    
    // Check if it's a special move
    if (is_special_move(move_id)) {
        attack = attacker->special_attack;
        defense = defender->special_defense;
    }
    
    // Level factor
    u32 level_factor = (level * 2) / 5 + 2;
    
    // Base damage calculation
    u32 damage = (level_factor * attack * move_power) / defense;
    damage = damage / 50 + 2;
    
    // Apply STAB (Same Type Attack Bonus)
    if (attacker->type1 == get_move_type(move_id) || 
        attacker->type2 == get_move_type(move_id)) {
        damage = (damage * 15) / 10;  // 1.5x multiplier
    }
    
    // Apply type effectiveness
    u8 move_type = get_move_type(move_id);
    f32 effectiveness = get_type_effectiveness(move_type, defender->type1);
    if (defender->type2 != TYPE_NONE) {
        effectiveness *= get_type_effectiveness(move_type, defender->type2);
    }
    
    damage = (u32)(damage * effectiveness);
    
    // Apply critical hit
    if (calculate_critical_hit(attacker, move_id)) {
        damage *= 2;  // Critical hits do double damage
    }
    
    // Apply random factor (85-100%)
    u8 random_factor = 85 + (get_random_byte() % 16);
    damage = (damage * random_factor) / 100;
    
    // Apply burn status (halves physical attack damage)
    if (attacker->status_condition == STATUS_BURN && !is_special_move(move_id)) {
        damage /= 2;
    }
    
    // Ensure minimum damage
    if (damage == 0) {
        damage = 1;
    }
    
    // Cap maximum damage
    if (damage > 999) {
        damage = 999;
    }
    
    return (u16)damage;
}

// Helper functions (would be implemented elsewhere)
extern u8 get_random_byte(void);
extern bool is_special_move(u16 move_id);
extern u8 get_move_type(u16 move_id);
