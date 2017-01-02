// Filename: battle_modifiers.c

#include "cheats.h"
#include "hid.h"

/********************************
 *                              *
 *      Battle Modifiers        *
 *                              *
 ********************************/

// Battle menu entry
void    battleMenu(void) {

    new_spoiler("Battle");
        //new_entry("Alola Rattata", alolaRat);
        new_entry("100% Capture Rate", catch100);
        new_entry_arg("Wild Pokemon Shiny", shinyPokemon, 0, SHINYPOKEMON, TOGGLE);
        new_entry_arg("Stat Stages +6", maxBattleStats, 0, MAXBATTLESTATS, TOGGLE);
        new_entry_arg("Use Z-Moves w/o Z-Crystal", zMoves, 0, ZMOVES, TOGGLE);
        new_line();
    exit_spoiler();
}

// Alola Ratatta
void    alolaRat(void) {
    u32 offset = 0x341C87B8;
    WRITEU16(0x0000 + offset, 0x0013);
    WRITEU8(0x0004 + offset, 0x0005);
    WRITEU8(0x0005 + offset, 0x0001);
}


//Sets all in-battle stats to +6 ranks
void    maxBattleStats(u32 state) {
    u32    offset;
    u32    address;
    static u32  original;
    if (state) {
        original = READU32(0x0029A048);

        offset = 0x00595A00;
        static const u8    buffer[] =
        {
            0x80, 0x20, 0x9F, 0xE5, 0x0E, 0x00, 0x52, 0xE1,
            0x1D, 0x00, 0x00, 0x1A, 0x1F, 0x00, 0x2D, 0xE9,
            0x74, 0x20, 0x9F, 0xE5, 0xD0, 0x00, 0x94, 0xE5,
            0x04, 0x30, 0x80, 0xE2, 0x1C, 0x40, 0x80, 0xE2,
            0x04, 0x10, 0x93, 0xE4, 0x00, 0x00, 0x51, 0xE3,
            0xEA, 0x21, 0xC1, 0x15, 0xEB, 0x21, 0xC1, 0x15,
            0xEC, 0x21, 0x81, 0x15, 0xF0, 0x21, 0xC1, 0x15,
            0x04, 0x00, 0x53, 0xE1, 0xF7, 0xFF, 0xFF, 0x1A,
            0x2C, 0x00, 0x9D, 0xE5, 0x88, 0x0A, 0x90, 0xE5,
            0x01, 0x0A, 0x80, 0xE2, 0x08, 0x08, 0x90, 0xE5,
            0x0C, 0x00, 0x90, 0xE5, 0x08, 0x00, 0x90, 0xE5,
            0x04, 0x30, 0x80, 0xE2, 0x1C, 0x40, 0x80, 0xE2,
            0x04, 0x10, 0x93, 0xE4, 0x00, 0x00, 0x51, 0xE3,
            0xEA, 0x21, 0xC1, 0x15, 0xEB, 0x21, 0xC1, 0x15,
            0xEC, 0x21, 0x81, 0x15, 0xF0, 0x21, 0xC1, 0x15,
            0x04, 0x00, 0x53, 0xE1, 0xF7, 0xFF, 0xFF, 0x1A,
            0x1F, 0x00, 0xBD, 0xE8, 0x70, 0x11, 0xF4, 0xEA,
            0xA4, 0x77, 0x6E, 0x00, 0x0C, 0x0C, 0x0C, 0x0C
        };

        address = 0x00;
        memcpy((void *)(address + offset), buffer, 0x90);

        WRITEU32(0x0029A048, 0xEA0BEE6C);
    } else {
        WRITEU32(0x0029A048, original);
    }
}

// 100% Catch rate for Pokemon
void	catch100(void) {
	WRITEU32(0x0059585C, 0xE5D00008);
	WRITEU32(0x00595860, 0xE92D4003);
	WRITEU32(0x00595864, 0xE59D0010);
	WRITEU32(0x00595868, 0xE59F100C);
	WRITEU32(0x0059586C, 0xE1510000);
	WRITEU32(0x00595870, 0x024000F8);
	WRITEU32(0x00595874, 0x058D0010);
	WRITEU32(0x00595878, 0xE8BD8003);
	WRITEU32(0x0059587C, 0x006D839C);
	WRITEU32(0x0048F1E0, 0xEB04199D);
}


// Make wild Pokemon shiny. Activate with START+L and deactivate with START+R
void	shinyPokemon(u32 state) {
    WRITEU32(0x003183EC, (state) ? 0xEA00001C : 0x0A00001C);
}


// Use Z-Moves without the need of a Z-Crystal
void    zMoves(u32 state) {
    u32 offset = 0x00595900;
    u32 address = 0x00;
    if (state) {
        static const u8    buffer[] =
        {
            0x05, 0x40, 0x2D, 0xE9, 0x06, 0x00, 0xA0, 0xE1,
            0x00, 0x00, 0x00, 0xEA, 0x05, 0x40, 0x2D, 0xE9,
            0x50, 0x20, 0x9D, 0xE5, 0x0C, 0x10, 0x9F, 0xE5,
            0x02, 0x00, 0x51, 0xE1, 0xB4, 0x10, 0xD5, 0x01,
            0x00, 0x10, 0xA0, 0x11, 0x05, 0x80, 0xBD, 0xE8,
            0x28, 0xBA, 0x78, 0x00
        };

        memcpy((void *)(address + offset), buffer, 0x2C);

        WRITEU32(0x00313DC0, 0xEB0A06CE);
        WRITEU32(0x00313E30, 0xEB0A06B5);
        WRITEU32(0x0036D0EC, 0xE3A00001);
    } else {
        WRITEU32(0x00313DC0, 0xE1D510B4);
        WRITEU32(0x00313E30, 0xE1D510B4);
        WRITEU32(0x0036D0EC, 0xE3A00000);
    }
}
