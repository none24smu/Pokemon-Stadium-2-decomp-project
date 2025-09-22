/*
 * Pokemon Stadium 2 - Pokemon Stat Calculation System
 * Decompiled from MIPS assembly
 */

#include "types.h"
#include "battle.h"
#include "pokemon_stats.h"

// Pokemon stat calculation function - Based on analysis of stat calculation candidates
u16 calculate_pokemon_stat(u8 base_stat, u8 iv, u8 ev, u8 level, u8 stat_type) {
    u32 stat_value;
    
    if (stat_type == STAT_TYPE_HP) {
        // HP formula: ((2 * Base + IV + EV/4) * Level / 100) + Level + 10
        stat_value = (2 * base_stat + iv + (ev / 4)) * level / 100 + level + 10;
    } else {
        // Other stats: ((2 * Base + IV + EV/4) * Level / 100) + 5
        stat_value = (2 * base_stat + iv + (ev / 4)) * level / 100 + 5;
    }
    
    // Apply nature modifier (if applicable)
    // Nature modifiers: 1.1x for boosted stat, 0.9x for hindered stat
    
    // Cap at maximum stat value
    if (stat_value > 999) {
        stat_value = 999;
    }
    
    return (u16)stat_value;
}

// Initialize Pokemon stats from base data
void initialize_pokemon_stats(PokemonData* pokemon, u8 level) {
    // Get base stats for this Pokemon species
    PokemonBaseStats* base_stats = get_pokemon_base_stats(pokemon->species_id);
    
    // Calculate each stat
    pokemon->max_hp = calculate_pokemon_stat(
        base_stats->hp, pokemon->hp_iv, pokemon->hp_ev, level, STAT_TYPE_HP
    );
    
    pokemon->attack = calculate_pokemon_stat(
        base_stats->attack, pokemon->attack_iv, pokemon->attack_ev, level, STAT_TYPE_OTHER
    );
    
    pokemon->defense = calculate_pokemon_stat(
        base_stats->defense, pokemon->defense_iv, pokemon->defense_ev, level, STAT_TYPE_OTHER
    );
    
    pokemon->speed = calculate_pokemon_stat(
        base_stats->speed, pokemon->speed_iv, pokemon->speed_ev, level, STAT_TYPE_OTHER
    );
    
    pokemon->special_attack = calculate_pokemon_stat(
        base_stats->special_attack, pokemon->special_attack_iv, pokemon->special_attack_ev, level, STAT_TYPE_OTHER
    );
    
    pokemon->special_defense = calculate_pokemon_stat(
        base_stats->special_defense, pokemon->special_defense_iv, pokemon->special_defense_ev, level, STAT_TYPE_OTHER
    );
    
    // Set current HP to max HP
    pokemon->current_hp = pokemon->max_hp;
    
    // Initialize stat stages to 0 (no modifications)
    for (int i = 0; i < 6; i++) {
        pokemon->stat_stages[i] = 0;
    }
}

// Apply stat stage modifiers during battle
u16 get_modified_stat(PokemonData* pokemon, u8 stat_type) {
    u16 base_stat;
    s8 stage;
    
    switch (stat_type) {
        case STAT_TYPE_ATTACK:
            base_stat = pokemon->attack;
            stage = pokemon->stat_stages[STAT_STAGE_ATTACK];
            break;
        case STAT_TYPE_DEFENSE:
            base_stat = pokemon->defense;
            stage = pokemon->stat_stages[STAT_STAGE_DEFENSE];
            break;
        case STAT_TYPE_SPEED:
            base_stat = pokemon->speed;
            stage = pokemon->stat_stages[STAT_STAGE_SPEED];
            break;
        case STAT_TYPE_SPECIAL_ATTACK:
            base_stat = pokemon->special_attack;
            stage = pokemon->stat_stages[STAT_STAGE_SPECIAL_ATTACK];
            break;
        case STAT_TYPE_SPECIAL_DEFENSE:
            base_stat = pokemon->special_defense;
            stage = pokemon->stat_stages[STAT_STAGE_SPECIAL_DEFENSE];
            break;
        default:
            return 0;
    }
    
    // Apply stat stage modifier
    return apply_stat_stage_modifier(base_stat, stage);
}

// Apply stat stage modifier (from -6 to +6)
u16 apply_stat_stage_modifier(u16 base_stat, s8 stage) {
    // Stat stage multipliers
    static const u16 stage_numerators[13] = {
        25, 28, 33, 40, 50, 66, 100, 150, 200, 250, 300, 350, 400
    };
    static const u16 stage_denominators[13] = {
        100, 100, 100, 100, 100, 100, 100, 100, 100, 200, 200, 200, 200
    };
    
    // Convert stage (-6 to +6) to array index (0 to 12)
    u8 index = stage + 6;
    if (index > 12) index = 12;
    
    // Apply multiplier
    u32 modified_stat = (base_stat * stage_numerators[index]) / stage_denominators[index];
    
    // Cap at maximum
    if (modified_stat > 999) {
        modified_stat = 999;
    }
    
    return (u16)modified_stat;
}

// Generate random IVs for a Pokemon
void generate_random_ivs(PokemonData* pokemon) {
    pokemon->hp_iv = get_random_byte() & 0x1F;              // 0-31
    pokemon->attack_iv = get_random_byte() & 0x1F;          // 0-31
    pokemon->defense_iv = get_random_byte() & 0x1F;         // 0-31
    pokemon->speed_iv = get_random_byte() & 0x1F;           // 0-31
    pokemon->special_attack_iv = get_random_byte() & 0x1F;  // 0-31
    pokemon->special_defense_iv = get_random_byte() & 0x1F; // 0-31
}

// Set maximum EVs for a Pokemon (competitive setup)
void set_max_evs(PokemonData* pokemon, u8 stat1, u8 stat2) {
    // Clear all EVs first
    pokemon->hp_ev = 0;
    pokemon->attack_ev = 0;
    pokemon->defense_ev = 0;
    pokemon->speed_ev = 0;
    pokemon->special_attack_ev = 0;
    pokemon->special_defense_ev = 0;
    
    // Set 252 EVs in two stats, 4 in another (total 508, max 510)
    switch (stat1) {
        case STAT_TYPE_HP: pokemon->hp_ev = 252; break;
        case STAT_TYPE_ATTACK: pokemon->attack_ev = 252; break;
        case STAT_TYPE_DEFENSE: pokemon->defense_ev = 252; break;
        case STAT_TYPE_SPEED: pokemon->speed_ev = 252; break;
        case STAT_TYPE_SPECIAL_ATTACK: pokemon->special_attack_ev = 252; break;
        case STAT_TYPE_SPECIAL_DEFENSE: pokemon->special_defense_ev = 252; break;
    }
    
    switch (stat2) {
        case STAT_TYPE_HP: pokemon->hp_ev = 252; break;
        case STAT_TYPE_ATTACK: pokemon->attack_ev = 252; break;
        case STAT_TYPE_DEFENSE: pokemon->defense_ev = 252; break;
        case STAT_TYPE_SPEED: pokemon->speed_ev = 252; break;
        case STAT_TYPE_SPECIAL_ATTACK: pokemon->special_attack_ev = 252; break;
        case STAT_TYPE_SPECIAL_DEFENSE: pokemon->special_defense_ev = 252; break;
    }
    
    // Put remaining 4 EVs in HP if not already maxed
    if (pokemon->hp_ev == 0) {
        pokemon->hp_ev = 4;
    }
}

// Calculate experience needed for next level
u32 calculate_exp_to_next_level(u16 species_id, u8 current_level) {
    u8 growth_rate = get_pokemon_growth_rate(species_id);
    
    u32 current_exp = calculate_exp_for_level(growth_rate, current_level);
    u32 next_exp = calculate_exp_for_level(growth_rate, current_level + 1);
    
    return next_exp - current_exp;
}

// Calculate total experience for a given level
u32 calculate_exp_for_level(u8 growth_rate, u8 level) {
    u32 exp = 0;
    
    switch (growth_rate) {
        case GROWTH_FAST:
            // Fast: 4n³/5
            exp = (4 * level * level * level) / 5;
            break;
            
        case GROWTH_MEDIUM_FAST:
            // Medium Fast: n³
            exp = level * level * level;
            break;
            
        case GROWTH_MEDIUM_SLOW:
            // Medium Slow: 6n³/5 - 15n² + 100n - 140
            exp = (6 * level * level * level) / 5 - 15 * level * level + 100 * level - 140;
            break;
            
        case GROWTH_SLOW:
            // Slow: 5n³/4
            exp = (5 * level * level * level) / 4;
            break;
    }
    
    return exp;
}

// Level up a Pokemon and recalculate stats
bool level_up_pokemon(PokemonData* pokemon) {
    if (pokemon->level >= 100) {
        return false;  // Already at max level
    }
    
    pokemon->level++;
    
    // Recalculate stats with new level
    initialize_pokemon_stats(pokemon, pokemon->level);
    
    return true;
}

// Get Pokemon's nature modifier for a stat
f32 get_nature_modifier(u8 nature, u8 stat_type) {
    // Nature chart: which stat is boosted/hindered by each nature
    static const s8 nature_modifiers[25][5] = {
        // ATK, DEF, SPD, SPA, SPD modifiers for each nature
        { 0,  0,  0,  0,  0}, // Hardy
        { 1, -1,  0,  0,  0}, // Lonely  
        { 1,  0, -1,  0,  0}, // Brave
        { 1,  0,  0, -1,  0}, // Adamant
        { 1,  0,  0,  0, -1}, // Naughty
        {-1,  1,  0,  0,  0}, // Bold
        { 0,  0,  0,  0,  0}, // Docile
        { 0,  1, -1,  0,  0}, // Relaxed
        { 0,  1,  0, -1,  0}, // Impish
        { 0,  1,  0,  0, -1}, // Lax
        {-1,  0,  1,  0,  0}, // Timid
        { 0, -1,  1,  0,  0}, // Hasty
        { 0,  0,  0,  0,  0}, // Serious
        { 0,  0,  1, -1,  0}, // Jolly
        { 0,  0,  1,  0, -1}, // Naive
        {-1,  0,  0,  1,  0}, // Modest
        { 0, -1,  0,  1,  0}, // Mild
        { 0,  0, -1,  1,  0}, // Quiet
        { 0,  0,  0,  0,  0}, // Bashful
        { 0,  0,  0,  1, -1}, // Rash
        {-1,  0,  0,  0,  1}, // Calm
        { 0, -1,  0,  0,  1}, // Gentle
        { 0,  0, -1,  0,  1}, // Sassy
        { 0,  0,  0, -1,  1}, // Careful
        { 0,  0,  0,  0,  0}, // Quirky
    };
    
    if (nature >= 25 || stat_type >= 5) {
        return 1.0f;  // No modifier
    }
    
    s8 modifier = nature_modifiers[nature][stat_type - 1];  // stat_type 1-5
    
    if (modifier == 1) return 1.1f;      // +10%
    else if (modifier == -1) return 0.9f; // -10%
    else return 1.0f;                     // No change
}

// External function declarations
extern PokemonBaseStats* get_pokemon_base_stats(u16 species_id);
extern u8 get_pokemon_growth_rate(u16 species_id);
extern u8 get_random_byte(void);
