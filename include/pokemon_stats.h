/*
 * Pokemon Stadium 2 - Pokemon Stat System Definitions
 */

#ifndef POKEMON_STATS_H
#define POKEMON_STATS_H

#include "types.h"

// Stat types
enum StatType {
    STAT_TYPE_HP = 0,
    STAT_TYPE_ATTACK = 1,
    STAT_TYPE_DEFENSE = 2,
    STAT_TYPE_SPEED = 3,
    STAT_TYPE_SPECIAL_ATTACK = 4,
    STAT_TYPE_SPECIAL_DEFENSE = 5,
    STAT_TYPE_OTHER = 6  // For non-HP stats in calculation
};

// Stat stage indices (for battle modifications)
enum StatStageType {
    STAT_STAGE_ATTACK = 0,
    STAT_STAGE_DEFENSE = 1,
    STAT_STAGE_SPEED = 2,
    STAT_STAGE_SPECIAL_ATTACK = 3,
    STAT_STAGE_SPECIAL_DEFENSE = 4,
    STAT_STAGE_ACCURACY = 5,
    STAT_STAGE_EVASION = 6
};

// Experience growth rates
enum GrowthRate {
    GROWTH_FAST = 0,
    GROWTH_MEDIUM_FAST = 1,
    GROWTH_MEDIUM_SLOW = 2,
    GROWTH_SLOW = 3
};

// Pokemon nature IDs
enum Nature {
    NATURE_HARDY = 0,    NATURE_LONELY = 1,   NATURE_BRAVE = 2,    NATURE_ADAMANT = 3,  NATURE_NAUGHTY = 4,
    NATURE_BOLD = 5,     NATURE_DOCILE = 6,   NATURE_RELAXED = 7,  NATURE_IMPISH = 8,   NATURE_LAX = 9,
    NATURE_TIMID = 10,   NATURE_HASTY = 11,   NATURE_SERIOUS = 12, NATURE_JOLLY = 13,   NATURE_NAIVE = 14,
    NATURE_MODEST = 15,  NATURE_MILD = 16,    NATURE_QUIET = 17,   NATURE_BASHFUL = 18, NATURE_RASH = 19,
    NATURE_CALM = 20,    NATURE_GENTLE = 21,  NATURE_SASSY = 22,   NATURE_CAREFUL = 23, NATURE_QUIRKY = 24
};

// Pokemon base stats structure
typedef struct PokemonBaseStats {
    u8 hp;
    u8 attack;
    u8 defense;
    u8 speed;
    u8 special_attack;
    u8 special_defense;
    u8 type1;
    u8 type2;
    u8 catch_rate;
    u8 base_exp_yield;
    u16 base_exp;
    u8 growth_rate;
} PokemonBaseStats;

// Complete Pokemon data structure
typedef struct PokemonData {
    u16 species_id;         // Pokemon species
    u8  level;              // Current level
    u32 experience;         // Current experience points
    
    // Current stats
    u16 max_hp;
    u16 current_hp;
    u16 attack;
    u16 defense;
    u16 speed;
    u16 special_attack;
    u16 special_defense;
    
    // Individual Values (0-31)
    u8 hp_iv;
    u8 attack_iv;
    u8 defense_iv;
    u8 speed_iv;
    u8 special_attack_iv;
    u8 special_defense_iv;
    
    // Effort Values (0-255, max 510 total)
    u8 hp_ev;
    u8 attack_ev;
    u8 defense_ev;
    u8 speed_ev;
    u8 special_attack_ev;
    u8 special_defense_ev;
    
    // Battle modifications
    s8 stat_stages[7];      // -6 to +6 for each stat + accuracy/evasion
    u8 status_condition;    // Current status condition
    u8 status_turns;        // Turns remaining for status
    
    // Pokemon characteristics
    u8 nature;              // Nature ID (affects stat growth)
    u8 ability;             // Pokemon ability
    u8 gender;              // Pokemon gender
    bool is_shiny;          // Shiny Pokemon flag
    
    // Moveset
    u16 moves[4];           // Move IDs
    u8  move_pp[4];         // Current PP for each move
    u8  max_pp[4];          // Maximum PP for each move
    
    // Items and other data
    u16 held_item;          // Held item ID
    u8  friendship;         // Friendship value
    u8  pokeball;           // Ball caught in
    u16 original_trainer;   // Original trainer ID
} PokemonData;

// Stat calculation constants
#define MAX_STAT_VALUE      999
#define MAX_IV_VALUE        31
#define MAX_EV_VALUE        255
#define MAX_TOTAL_EVS       510
#define MAX_SINGLE_STAT_EVS 252
#define MAX_LEVEL           100
#define MIN_LEVEL           1

// Stat stage modifier constants
#define MAX_STAT_STAGE      6
#define MIN_STAT_STAGE      -6
#define NEUTRAL_STAT_STAGE  0

// Function prototypes

// Core stat calculations
u16 calculate_pokemon_stat(u8 base_stat, u8 iv, u8 ev, u8 level, u8 stat_type);
void initialize_pokemon_stats(PokemonData* pokemon, u8 level);
u16 get_modified_stat(PokemonData* pokemon, u8 stat_type);
u16 apply_stat_stage_modifier(u16 base_stat, s8 stage);

// IV and EV management
void generate_random_ivs(PokemonData* pokemon);
void set_max_ivs(PokemonData* pokemon);
void set_max_evs(PokemonData* pokemon, u8 stat1, u8 stat2);
bool validate_ev_spread(PokemonData* pokemon);

// Experience and leveling
u32 calculate_exp_to_next_level(u16 species_id, u8 current_level);
u32 calculate_exp_for_level(u8 growth_rate, u8 level);
bool level_up_pokemon(PokemonData* pokemon);
u8 calculate_level_from_exp(u8 growth_rate, u32 experience);

// Nature system
f32 get_nature_modifier(u8 nature, u8 stat_type);
u8 get_boosted_stat(u8 nature);
u8 get_hindered_stat(u8 nature);

// Stat stage management
void modify_stat_stage(PokemonData* pokemon, u8 stat_type, s8 change);
void reset_stat_stages(PokemonData* pokemon);
s8 get_stat_stage(PokemonData* pokemon, u8 stat_type);

// Pokemon creation and initialization
void create_pokemon(PokemonData* pokemon, u16 species_id, u8 level);
void create_competitive_pokemon(PokemonData* pokemon, u16 species_id, u8 level, 
                               u8 nature, u8 ev_stat1, u8 ev_stat2);

// Validation functions
bool is_valid_pokemon_data(PokemonData* pokemon);
bool is_valid_stat_value(u16 stat_value);
bool is_valid_iv_value(u8 iv);
bool is_valid_ev_value(u8 ev);

// External data access functions
extern PokemonBaseStats* get_pokemon_base_stats(u16 species_id);
extern u8 get_pokemon_growth_rate(u16 species_id);
extern const char* get_pokemon_name(u16 species_id);
extern u8 get_random_byte(void);

#endif // POKEMON_STATS_H
