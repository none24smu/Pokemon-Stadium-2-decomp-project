/*
 * Pokemon Stadium 2 - Damage Calculation System Definitions
 */

#ifndef DAMAGE_CALC_H
#define DAMAGE_CALC_H

#include "types.h"
#include "battle.h"

// Pokemon types
enum PokemonType {
    TYPE_NORMAL = 0,
    TYPE_FIRE = 1,
    TYPE_WATER = 2,
    TYPE_ELECTRIC = 3,
    TYPE_GRASS = 4,
    TYPE_ICE = 5,
    TYPE_FIGHTING = 6,
    TYPE_POISON = 7,
    TYPE_GROUND = 8,
    TYPE_FLYING = 9,
    TYPE_PSYCHIC = 10,
    TYPE_BUG = 11,
    TYPE_ROCK = 12,
    TYPE_GHOST = 13,
    TYPE_DRAGON = 14,
    TYPE_DARK = 15,
    TYPE_STEEL = 16,
    TYPE_NONE = 255
};

// Move IDs for critical hit calculations
enum MoveID {
    MOVE_SLASH = 163,
    MOVE_RAZOR_LEAF = 75,
    MOVE_CRABHAMMER = 152,
    MOVE_KARATE_CHOP = 2,
    MOVE_RAZOR_WIND = 13
};

// Battle flags for damage calculation
#define BATTLE_FLAG_FOCUS_ENERGY  0x0004
#define BATTLE_FLAG_CRITICAL_HIT  0x0008
#define BATTLE_FLAG_STAB          0x0010

// Type effectiveness multipliers
#define TYPE_EFFECTIVENESS_SUPER    200  // 2.0x (stored as integer * 100)
#define TYPE_EFFECTIVENESS_NORMAL   100  // 1.0x
#define TYPE_EFFECTIVENESS_WEAK     50   // 0.5x
#define TYPE_EFFECTIVENESS_NONE     0    // 0.0x

// Damage calculation constants
#define MAX_DAMAGE                  999
#define MIN_DAMAGE                  1
#define CRITICAL_HIT_MULTIPLIER     2
#define STAB_MULTIPLIER_NUM         15
#define STAB_MULTIPLIER_DEN         10
#define BURN_DAMAGE_REDUCTION       2

// Pokemon battle data structure (extended)
typedef struct PokemonBattleData {
    u16 species_id;         // +0x00: Pokemon species ID
    u16 status_flags;       // +0x02: Status condition flags
    u16 current_hp;         // +0x04: Current HP
    u16 max_hp;             // +0x06: Maximum HP
    u16 attack;             // +0x08: Attack stat
    u16 defense;            // +0x0A: Defense stat
    u16 speed;              // +0x0C: Speed stat
    u16 special_attack;     // +0x0E: Special Attack stat
    u16 special_defense;    // +0x10: Special Defense stat
    u16 level;              // +0x12: Pokemon level
    u16 moves[4];           // +0x14: Move IDs
    u8  move_pp[4];         // +0x1C: PP for each move
    u8  status_condition;   // +0x20: Status condition type
    u8  status_turns;       // +0x21: Turns remaining for status
    u8  type1;              // +0x22: Primary type
    u8  type2;              // +0x23: Secondary type
    u8  data[32];           // +0x24: Additional battle data
} PokemonBattleData;

// Type effectiveness chart structure
typedef struct TypeChart {
    u8 effectiveness[18][18];  // 18x18 type effectiveness matrix
} TypeChart;

// Damage calculation functions
u16 calculate_damage_primary(PokemonBattleData* pokemon);
u16 calculate_status_damage(void);
u16 calculate_battle_damage(PokemonBattleData* attacker, PokemonBattleData* defender, 
                           u16 move_id, u8 move_power);

// Type effectiveness functions
f32 get_type_effectiveness(u8 attack_type, u8 defend_type);
u8 get_type_effectiveness_multiplier(u8 attack_type, u8 defend_type);

// Critical hit calculation
bool calculate_critical_hit(PokemonBattleData* attacker, u16 move_id);
u8 get_critical_hit_ratio(u16 move_id);

// Move classification functions
bool is_special_move(u16 move_id);
bool is_physical_move(u16 move_id);
u8 get_move_type(u16 move_id);
u8 get_move_power(u16 move_id);
u8 get_move_accuracy(u16 move_id);

// Status effect damage calculations
u16 calculate_poison_damage(PokemonBattleData* pokemon);
u16 calculate_burn_damage(PokemonBattleData* pokemon);
u16 calculate_leech_seed_damage(PokemonBattleData* pokemon);

// Stat modification functions
u16 apply_stat_modifiers(u16 base_stat, s8 modifier_stage);
s8 get_stat_modifier_stage(PokemonBattleData* pokemon, u8 stat_type);

// Weather and field effect modifiers
f32 get_weather_modifier(u8 weather_type, u8 move_type);
f32 get_field_modifier(u8 field_type, u8 move_type);

// Random number generation for damage
u8 get_random_byte(void);
u16 get_random_word(void);
u32 apply_random_factor(u32 damage);

// Damage cap and validation
u16 validate_damage(u32 calculated_damage);
bool is_damage_valid(u16 damage);

// External data references
extern const TypeChart g_type_effectiveness_chart;
extern const u8 g_move_types[256];
extern const u8 g_move_powers[256];
extern const u8 g_move_accuracies[256];

#endif // DAMAGE_CALC_H
