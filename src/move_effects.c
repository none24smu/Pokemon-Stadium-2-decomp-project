/*
 * Pokemon Stadium 2 - Move Effects System
 * Decompiled from MIPS assembly
 */

#include "types.h"
#include "battle.h"
#include "damage_calc.h"
#include "move_effects.h"

// Move effect dispatcher - 0x8042ad90
s32 execute_move_effect(PokemonBattleData* attacker, PokemonBattleData* defender, 
                       u16 move_id, u32 effect_type) {
    if (effect_type == 0) {
        // Standard damage move with no special effect
        u32 damage_params = *(u32*)(0x8042b070);  // Get damage parameters
        u32 power_modifier = (damage_params >> 4) & 0xF;
        
        if (power_modifier == 0) {
            power_modifier = 1;  // Default power
        }
        
        // Calculate damage multiplier
        u32 damage_multiplier = power_modifier;
        u32 accuracy_check = (damage_params >> 1) + 7;
        accuracy_check = (accuracy_check >> 3) & 0xFF;
        
        return apply_standard_damage(attacker, defender, move_id, damage_multiplier);
    }
    else if (effect_type == 1) {
        // Status effect move (type 1)
        u32 status_params = *(u32*)(0x8042b070);
        u32 status_chance = (status_params >> 3) & 0x1F;
        
        return apply_status_effect(attacker, defender, move_id, status_chance);
    }
    else if (effect_type == 2) {
        // Stat modification move (type 2)
        return apply_stat_modification(attacker, defender, move_id);
    }
    else if (effect_type == 3) {
        // Healing move (type 3)
        return apply_healing_effect(attacker, move_id);
    }
    
    return 0;  // No effect
}

// Standard damage application
s32 apply_standard_damage(PokemonBattleData* attacker, PokemonBattleData* defender, 
                         u16 move_id, u32 damage_multiplier) {
    u8 move_power = get_move_power(move_id);
    u16 damage = calculate_battle_damage(attacker, defender, move_id, move_power);
    
    // Apply damage multiplier
    damage = (damage * damage_multiplier) / 100;
    
    // Apply damage to defender
    if (defender->current_hp > damage) {
        defender->current_hp -= damage;
    } else {
        defender->current_hp = 0;
        defender->status_flags |= BATTLE_FLAG_FAINTED;
    }
    
    return damage;
}

// Status effect application
s32 apply_status_effect(PokemonBattleData* attacker, PokemonBattleData* defender, 
                       u16 move_id, u32 status_chance) {
    // Check if target is already statused
    if (defender->status_condition != STATUS_NONE) {
        return 0;  // Status moves fail if target already has status
    }
    
    // Accuracy check
    u8 move_accuracy = get_move_accuracy(move_id);
    u8 accuracy_roll = get_random_byte();
    if (accuracy_roll >= move_accuracy) {
        return 0;  // Move missed
    }
    
    // Status chance check
    u8 status_roll = get_random_byte();
    if (status_roll >= status_chance) {
        return 0;  // Status effect failed
    }
    
    // Apply status based on move
    switch (move_id) {
        case MOVE_THUNDER_WAVE:
            if (defender->type1 != TYPE_GROUND && defender->type2 != TYPE_GROUND) {
                defender->status_condition = STATUS_PARALYSIS;
                defender->status_turns = 0;  // Permanent until cured
                return 1;
            }
            break;
            
        case MOVE_SLEEP_POWDER:
            defender->status_condition = STATUS_SLEEP;
            defender->status_turns = 1 + (get_random_byte() % 4);  // 1-4 turns
            return 1;
            
        case MOVE_TOXIC:
            defender->status_condition = STATUS_POISON;
            defender->status_turns = 1;  // Badly poisoned (increases each turn)
            return 1;
            
        case MOVE_WILL_O_WISP:
            if (defender->type1 != TYPE_FIRE && defender->type2 != TYPE_FIRE) {
                defender->status_condition = STATUS_BURN;
                defender->status_turns = 0;  // Permanent until cured
                return 1;
            }
            break;
    }
    
    return 0;
}

// Stat modification application
s32 apply_stat_modification(PokemonBattleData* attacker, PokemonBattleData* defender, 
                           u16 move_id) {
    s8 attack_mod = 0, defense_mod = 0, speed_mod = 0, special_mod = 0;
    PokemonBattleData* target = attacker;  // Default to self-targeting
    
    switch (move_id) {
        case MOVE_SWORDS_DANCE:
            attack_mod = 2;  // +2 Attack stages
            break;
            
        case MOVE_GROWL:
            target = defender;
            attack_mod = -1;  // -1 Attack stage to opponent
            break;
            
        case MOVE_LEER:
            target = defender;
            defense_mod = -1;  // -1 Defense stage to opponent
            break;
            
        case MOVE_TAIL_WHIP:
            target = defender;
            defense_mod = -1;  // -1 Defense stage to opponent
            break;
            
        case MOVE_AGILITY:
            speed_mod = 2;  // +2 Speed stages
            break;
            
        case MOVE_AMNESIA:
            special_mod = 2;  // +2 Special Defense stages
            break;
    }
    
    // Apply stat modifications
    if (attack_mod != 0) {
        target->stat_stages[STAT_ATTACK] += attack_mod;
        if (target->stat_stages[STAT_ATTACK] > 6) target->stat_stages[STAT_ATTACK] = 6;
        if (target->stat_stages[STAT_ATTACK] < -6) target->stat_stages[STAT_ATTACK] = -6;
    }
    
    if (defense_mod != 0) {
        target->stat_stages[STAT_DEFENSE] += defense_mod;
        if (target->stat_stages[STAT_DEFENSE] > 6) target->stat_stages[STAT_DEFENSE] = 6;
        if (target->stat_stages[STAT_DEFENSE] < -6) target->stat_stages[STAT_DEFENSE] = -6;
    }
    
    if (speed_mod != 0) {
        target->stat_stages[STAT_SPEED] += speed_mod;
        if (target->stat_stages[STAT_SPEED] > 6) target->stat_stages[STAT_SPEED] = 6;
        if (target->stat_stages[STAT_SPEED] < -6) target->stat_stages[STAT_SPEED] = -6;
    }
    
    if (special_mod != 0) {
        target->stat_stages[STAT_SPECIAL] += special_mod;
        if (target->stat_stages[STAT_SPECIAL] > 6) target->stat_stages[STAT_SPECIAL] = 6;
        if (target->stat_stages[STAT_SPECIAL] < -6) target->stat_stages[STAT_SPECIAL] = -6;
    }
    
    return 1;  // Stat modification successful
}

// Healing effect application
s32 apply_healing_effect(PokemonBattleData* pokemon, u16 move_id) {
    u16 heal_amount = 0;
    
    switch (move_id) {
        case MOVE_RECOVER:
        case MOVE_ROOST:
            // Heal 50% of max HP
            heal_amount = pokemon->max_hp / 2;
            break;
            
        case MOVE_REST:
            // Heal to full HP and fall asleep
            heal_amount = pokemon->max_hp - pokemon->current_hp;
            pokemon->status_condition = STATUS_SLEEP;
            pokemon->status_turns = 2;  // Sleep for 2 turns
            break;
            
        case MOVE_SYNTHESIS:
        case MOVE_MORNING_SUN:
        case MOVE_MOONLIGHT:
            // Weather-dependent healing
            u8 weather = get_current_weather();
            if (weather == WEATHER_SUNNY) {
                heal_amount = (pokemon->max_hp * 2) / 3;  // 2/3 in sun
            } else if (weather == WEATHER_RAIN || weather == WEATHER_SANDSTORM || weather == WEATHER_HAIL) {
                heal_amount = pokemon->max_hp / 4;  // 1/4 in bad weather
            } else {
                heal_amount = pokemon->max_hp / 2;  // 1/2 normally
            }
            break;
    }
    
    // Apply healing
    pokemon->current_hp += heal_amount;
    if (pokemon->current_hp > pokemon->max_hp) {
        pokemon->current_hp = pokemon->max_hp;
    }
    
    return heal_amount;
}

// Multi-hit move implementation
s32 execute_multi_hit_move(PokemonBattleData* attacker, PokemonBattleData* defender, u16 move_id) {
    u8 hit_count = 0;
    u32 total_damage = 0;
    
    // Determine number of hits
    switch (move_id) {
        case MOVE_DOUBLE_SLAP:
        case MOVE_FURY_ATTACK:
        case MOVE_PIN_MISSILE:
        case MOVE_SPIKE_CANNON:
        case MOVE_BARRAGE:
            // 2-5 hits with specific distribution
            u8 random = get_random_byte();
            if (random < 38) hit_count = 2;        // 37.5% chance
            else if (random < 75) hit_count = 3;   // 37.5% chance  
            else if (random < 94) hit_count = 4;   // 18.75% chance
            else hit_count = 5;                    // 6.25% chance
            break;
            
        case MOVE_DOUBLE_KICK:
        case MOVE_BONEMERANG:
            hit_count = 2;  // Always 2 hits
            break;
            
        case MOVE_TRIPLE_KICK:
            hit_count = 3;  // Always 3 hits (with increasing power)
            break;
    }
    
    // Execute each hit
    for (u8 i = 0; i < hit_count; i++) {
        if (defender->current_hp == 0) break;  // Stop if target faints
        
        u8 move_power = get_move_power(move_id);
        
        // Triple Kick increases power each hit
        if (move_id == MOVE_TRIPLE_KICK) {
            move_power = 10 + (i * 10);  // 10, 20, 30 power
        }
        
        u16 damage = calculate_battle_damage(attacker, defender, move_id, move_power);
        
        if (defender->current_hp > damage) {
            defender->current_hp -= damage;
        } else {
            defender->current_hp = 0;
            defender->status_flags |= BATTLE_FLAG_FAINTED;
        }
        
        total_damage += damage;
    }
    
    return total_damage;
}

// Priority move implementation
s32 get_move_priority(u16 move_id) {
    switch (move_id) {
        case MOVE_QUICK_ATTACK:
        case MOVE_MACH_PUNCH:
            return 1;  // +1 priority
            
        case MOVE_EXTREME_SPEED:
            return 2;  // +2 priority
            
        case MOVE_COUNTER:
        case MOVE_MIRROR_COAT:
            return -5;  // -5 priority (goes last)
            
        default:
            return 0;  // Normal priority
    }
}

// Weather effect implementation
void apply_weather_effect(u8 weather_type) {
    // Set global weather state
    set_current_weather(weather_type);
    set_weather_turns(5);  // Weather lasts 5 turns
    
    // Apply immediate effects based on weather
    switch (weather_type) {
        case WEATHER_SUNNY:
            // Fire moves boosted, Water moves weakened
            // Solar Beam charges in 1 turn
            break;
            
        case WEATHER_RAIN:
            // Water moves boosted, Fire moves weakened
            // Thunder never misses
            break;
            
        case WEATHER_SANDSTORM:
            // Rock types get Special Defense boost
            // Non-Rock/Ground/Steel types take damage each turn
            break;
            
        case WEATHER_HAIL:
            // Non-Ice types take damage each turn
            // Blizzard never misses
            break;
    }
}

// External function declarations
extern u8 get_move_power(u16 move_id);
extern u8 get_move_accuracy(u16 move_id);
extern u8 get_random_byte(void);
extern u8 get_current_weather(void);
extern void set_current_weather(u8 weather);
extern void set_weather_turns(u8 turns);
