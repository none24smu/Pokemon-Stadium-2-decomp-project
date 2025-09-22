/*
 * Pokemon Stadium 2 - Move Effects System Definitions
 */

#ifndef MOVE_EFFECTS_H
#define MOVE_EFFECTS_H

#include "types.h"
#include "battle.h"

// Move effect types
enum MoveEffectType {
    EFFECT_DAMAGE = 0,          // Standard damage move
    EFFECT_STATUS = 1,          // Inflicts status condition
    EFFECT_STAT_MOD = 2,        // Modifies stats
    EFFECT_HEALING = 3,         // Restores HP
    EFFECT_MULTI_HIT = 4,       // Multiple hits
    EFFECT_PRIORITY = 5,        // Priority move
    EFFECT_WEATHER = 6,         // Changes weather
    EFFECT_FIELD = 7,           // Field effects
    EFFECT_SWITCH = 8,          // Forces switching
    EFFECT_RECOIL = 9,          // Recoil damage
    EFFECT_DRAIN = 10,          // HP draining
    EFFECT_OHKO = 11,           // One-hit KO
    EFFECT_CHARGE = 12,         // Two-turn moves
    EFFECT_TRAP = 13,           // Trapping moves
    EFFECT_COUNTER = 14         // Counter moves
};

// Stat stage indices
enum StatStage {
    STAT_ATTACK = 0,
    STAT_DEFENSE = 1,
    STAT_SPEED = 2,
    STAT_SPECIAL = 3,
    STAT_ACCURACY = 4,
    STAT_EVASION = 5
};

// Weather types
enum WeatherType {
    WEATHER_NONE = 0,
    WEATHER_SUNNY = 1,
    WEATHER_RAIN = 2,
    WEATHER_SANDSTORM = 3,
    WEATHER_HAIL = 4
};

// Move IDs for special moves
enum SpecialMoves {
    MOVE_THUNDER_WAVE = 86,
    MOVE_SLEEP_POWDER = 79,
    MOVE_TOXIC = 92,
    MOVE_WILL_O_WISP = 261,
    MOVE_SWORDS_DANCE = 14,
    MOVE_GROWL = 45,
    MOVE_LEER = 43,
    MOVE_TAIL_WHIP = 39,
    MOVE_AGILITY = 97,
    MOVE_AMNESIA = 133,
    MOVE_RECOVER = 105,
    MOVE_REST = 156,
    MOVE_ROOST = 355,
    MOVE_SYNTHESIS = 235,
    MOVE_MORNING_SUN = 234,
    MOVE_MOONLIGHT = 236,
    MOVE_DOUBLE_SLAP = 3,
    MOVE_FURY_ATTACK = 31,
    MOVE_PIN_MISSILE = 42,
    MOVE_SPIKE_CANNON = 131,
    MOVE_BARRAGE = 140,
    MOVE_DOUBLE_KICK = 24,
    MOVE_BONEMERANG = 155,
    MOVE_TRIPLE_KICK = 167,
    MOVE_QUICK_ATTACK = 98,
    MOVE_MACH_PUNCH = 183,
    MOVE_EXTREME_SPEED = 245,
    MOVE_COUNTER = 68,
    MOVE_MIRROR_COAT = 243,
    MOVE_SUNNY_DAY = 241,
    MOVE_RAIN_DANCE = 240,
    MOVE_SANDSTORM = 201,
    MOVE_HAIL = 258
};

// Extended Pokemon battle data with stat stages
typedef struct PokemonBattleDataExtended {
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
    s8  stat_stages[6];     // +0x24: Stat modification stages (-6 to +6)
    u8  ability;            // +0x2A: Pokemon ability
    u8  item;               // +0x2B: Held item
    u32 data[8];            // +0x2C: Additional battle data
} PokemonBattleDataExtended;

// Battle flags for move effects
#define BATTLE_FLAG_FAINTED       0x0001
#define BATTLE_FLAG_FOCUS_ENERGY  0x0004
#define BATTLE_FLAG_CONFUSED      0x0008
#define BATTLE_FLAG_TRAPPED       0x0010
#define BATTLE_FLAG_CHARGING      0x0020
#define BATTLE_FLAG_PROTECT       0x0040
#define BATTLE_FLAG_ENDURE        0x0080

// Move effect function prototypes
s32 execute_move_effect(PokemonBattleData* attacker, PokemonBattleData* defender, 
                       u16 move_id, u32 effect_type);

// Damage and effect application
s32 apply_standard_damage(PokemonBattleData* attacker, PokemonBattleData* defender, 
                         u16 move_id, u32 damage_multiplier);
s32 apply_status_effect(PokemonBattleData* attacker, PokemonBattleData* defender, 
                       u16 move_id, u32 status_chance);
s32 apply_stat_modification(PokemonBattleData* attacker, PokemonBattleData* defender, 
                           u16 move_id);
s32 apply_healing_effect(PokemonBattleData* pokemon, u16 move_id);

// Special move implementations
s32 execute_multi_hit_move(PokemonBattleData* attacker, PokemonBattleData* defender, u16 move_id);
s32 execute_recoil_move(PokemonBattleData* attacker, PokemonBattleData* defender, u16 move_id);
s32 execute_drain_move(PokemonBattleData* attacker, PokemonBattleData* defender, u16 move_id);
s32 execute_ohko_move(PokemonBattleData* attacker, PokemonBattleData* defender, u16 move_id);
s32 execute_charge_move(PokemonBattleData* attacker, PokemonBattleData* defender, u16 move_id);

// Priority and turn order
s32 get_move_priority(u16 move_id);
s32 calculate_turn_order(PokemonBattleData* pokemon1, PokemonBattleData* pokemon2, 
                        u16 move1, u16 move2);

// Weather and field effects
void apply_weather_effect(u8 weather_type);
void process_weather_damage(PokemonBattleData* pokemon);
f32 get_weather_damage_modifier(u8 weather_type, u8 move_type);

// Stat stage calculations
u16 apply_stat_modifiers(u16 base_stat, s8 modifier_stage);
f32 get_stat_modifier(s8 stage);

// Status condition processing
void process_status_conditions(PokemonBattleData* pokemon);
u16 calculate_poison_damage(PokemonBattleData* pokemon);
u16 calculate_burn_damage(PokemonBattleData* pokemon);
bool check_paralysis_chance(PokemonBattleData* pokemon);
bool check_sleep_wake_up(PokemonBattleData* pokemon);

// Move validation and checks
bool can_use_move(PokemonBattleData* pokemon, u16 move_id);
bool is_move_disabled(PokemonBattleData* pokemon, u16 move_id);
bool check_move_accuracy(PokemonBattleData* attacker, PokemonBattleData* defender, u16 move_id);

// External helper functions
extern u8 get_move_power(u16 move_id);
extern u8 get_move_accuracy(u16 move_id);
extern u8 get_move_type(u16 move_id);
extern u8 get_random_byte(void);
extern u16 get_random_word(void);
extern u8 get_current_weather(void);
extern void set_current_weather(u8 weather);
extern void set_weather_turns(u8 turns);

#endif // MOVE_EFFECTS_H
