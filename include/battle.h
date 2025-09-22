/*
 * Pokemon Stadium 2 - Battle System Definitions
 */

#ifndef BATTLE_H
#define BATTLE_H

#include "types.h"

// Battle system constants
#define MAX_POKEMON_PARTY     6
#define MAX_MOVES_PER_POKEMON 4
#define MAX_BATTLE_PARTICIPANTS 4

// Battle data base address
#define BATTLE_DATA_BASE      0x8ab10000

// Battle state flags
#define BATTLE_FLAG_ACTIVE    0x0002
#define BATTLE_FLAG_STATUS    0x0001

// Pokemon battle data structure (inferred from assembly)
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
    // ... additional fields
} PokemonBattleData;

// Battle state structure (inferred from memory layout)
typedef struct BattleState {
    u16 battle_flags;                    // +0x6cde: Battle state flags
    u32 battle_parameter;                // +0x6ce0: Battle parameter
    u32 battle_condition;                // +0x6cc0: Battle condition flag
    PokemonBattleData* pokemon_slots[6]; // +0x6b8c+: Pokemon data pointers
    PokemonBattleData* active_pokemon;   // +0x6a58: Currently active Pokemon
    PokemonBattleData* target_pokemon;   // +0x1d00: Target Pokemon
    // Move-related data
    u16 move_flags;                      // +0x6f96: Move state flags  
    u32 move_parameter;                  // +0x6f98: Move parameter
    PokemonBattleData* attacker;         // +0x6d08: Attacking Pokemon
    PokemonBattleData* move_slots[4];    // +0x6e3c+: Move execution slots
} BattleState;

// Battle state management functions
void battle_state_manager(s32 state_id);
void move_state_manager(s32 move_id);

// External battle functions
extern void battle_initialize(void);
extern void battle_process_turn(void);
extern void move_execute(void);

// Battle state constants
enum BattleStateID {
    BATTLE_STATE_INIT = 0,
    BATTLE_STATE_TURN = 1,
    BATTLE_STATE_END = 2
};

enum MoveStateID {
    MOVE_STATE_INIT = 0,
    MOVE_STATE_EXECUTE = 1,
    MOVE_STATE_COMPLETE = 2
};

// Status condition flags
enum StatusCondition {
    STATUS_NONE = 0,
    STATUS_POISON = 1,
    STATUS_BURN = 2,
    STATUS_FREEZE = 3,
    STATUS_PARALYSIS = 4,
    STATUS_SLEEP = 5
};

#endif // BATTLE_H
