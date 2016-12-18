// Filename: items.c

#include "cheats.h"
#include "hid.h"

/********************************
*				*
*	      Items		*
*				*
********************************/

// Gives all items and sets them to quantity 950 (credit to Nanquitas for method)
void    allItems(void) {
    u32    data;
    u32    offset;
    u32    address;

    offset = 0x0330D5934;
    static const u8    buffer1[] =
    {
        0x01, 0xD8, 0x0E, 0x00, 0x02, 0xD8, 0x0E, 0x00,
        0x03, 0xD8, 0x0E, 0x00, 0x04, 0xD8, 0x0E, 0x00,
        0x05, 0xD8, 0x0E, 0x00, 0x06, 0xD8, 0x0E, 0x00,
        0x07, 0xD8, 0x0E, 0x00, 0x08, 0xD8, 0x0E, 0x00,
        0x09, 0xD8, 0x0E, 0x00, 0x0A, 0xD8, 0x0E, 0x00,
        0x0B, 0xD8, 0x0E, 0x00, 0x0C, 0xD8, 0x0E, 0x00,
        0x0D, 0xD8, 0x0E, 0x00, 0x0E, 0xD8, 0x0E, 0x00,
        0x0F, 0xD8, 0x0E, 0x00, 0x10, 0xD8, 0x0E, 0x00,
        0x37, 0xD8, 0x0E, 0x00, 0x38, 0xD8, 0x0E, 0x00,
        0x39, 0xD8, 0x0E, 0x00, 0x3A, 0xD8, 0x0E, 0x00,
        0x3B, 0xD8, 0x0E, 0x00, 0x3C, 0xD8, 0x0E, 0x00,
        0x3D, 0xD8, 0x0E, 0x00, 0x3E, 0xD8, 0x0E, 0x00,
        0x3F, 0xD8, 0x0E, 0x00, 0x40, 0xD8, 0x0E, 0x00
    };

    address = 0x00;
    memcpy((void *)(address + offset), buffer1, 0x68);

    data = 0x000ED844;
   for (int i = 0; i < 0x2D; i++) {
       WRITEU32(0x00000068 + offset, data);
       offset += 0x04;
       data += 0x01;
   }

    offset = 0x330D5934;
    WRITEU32(0x0000011C + offset, 0x000ED874);

    static const u8    buffer2[] =
    {
        0x75, 0xD8, 0x0E, 0x00, 0x76, 0xD8, 0x0E, 0x00,
        0x77, 0xD8, 0x0E, 0x00, 0x87, 0xD8, 0x0E, 0x00,
        0x88, 0xD8, 0x0E, 0x00, 0x89, 0xD8, 0x0E, 0x00,
        0x8A, 0xD8, 0x0E, 0x00, 0x8B, 0xD8, 0x0E, 0x00,
        0x8C, 0xD8, 0x0E, 0x00, 0x8D, 0xD8, 0x0E, 0x00,
        0x8E, 0xD8, 0x0E, 0x00, 0x8F, 0xD8, 0x0E, 0x00,
        0x90, 0xD8, 0x0E, 0x00, 0x91, 0xD8, 0x0E, 0x00,
        0x92, 0xD8, 0x0E, 0x00, 0x93, 0xD8, 0x0E, 0x00,
        0x94, 0xD8, 0x0E, 0x00, 0xD5, 0xD8, 0x0E, 0x00,
        0xD6, 0xD8, 0x0E, 0x00, 0xD7, 0xD8, 0x0E, 0x00
    };

    address = 0x00000120;
    memcpy((void *)(address + offset), buffer2, 0x50);

    data = 0x000ED8D9;
   for (int i = 0; i < 0x6F; i++) {
       WRITEU32(0x00000170 + offset, data);
       offset += 0x04;
       data += 0x01;
    }

    offset = 0x330D5934;

    static const u8    buffer3[] =
    {
        0xE5, 0xD9, 0x0E, 0x00, 0xE6, 0xD9, 0x0E, 0x00,
        0xE7, 0xD9, 0x0E, 0x00, 0xE8, 0xD9, 0x0E, 0x00,
        0xE9, 0xD9, 0x0E, 0x00, 0xEA, 0xD9, 0x0E, 0x00,
        0xEB, 0xD9, 0x0E, 0x00, 0xEC, 0xD9, 0x0E, 0x00,
        0xED, 0xD9, 0x0E, 0x00, 0xEE, 0xD9, 0x0E, 0x00,
        0xEF, 0xD9, 0x0E, 0x00, 0xF0, 0xD9, 0x0E, 0x00,
        0xF1, 0xD9, 0x0E, 0x00, 0xF2, 0xD9, 0x0E, 0x00,
        0xF3, 0xD9, 0x0E, 0x00, 0xF4, 0xD9, 0x0E, 0x00,
        0xF9, 0xD9, 0x0E, 0x00, 0xFA, 0xD9, 0x0E, 0x00,
        0xFB, 0xD9, 0x0E, 0x00, 0xFC, 0xD9, 0x0E, 0x00,
        0xFD, 0xD9, 0x0E, 0x00, 0xFE, 0xD9, 0x0E, 0x00,
        0xFF, 0xD9, 0x0E, 0x00, 0x00, 0xDA, 0x0E, 0x00,
        0x01, 0xDA, 0x0E, 0x00, 0x02, 0xDA, 0x0E, 0x00,
        0x03, 0xDA, 0x0E, 0x00, 0x04, 0xDA, 0x0E, 0x00,
        0x05, 0xDA, 0x0E, 0x00, 0x06, 0xDA, 0x0E, 0x00,
        0x07, 0xDA, 0x0E, 0x00, 0x08, 0xDA, 0x0E, 0x00,
        0x09, 0xDA, 0x0E, 0x00, 0x0A, 0xDA, 0x0E, 0x00,
        0x0B, 0xDA, 0x0E, 0x00, 0x0C, 0xDA, 0x0E, 0x00,
        0x0D, 0xDA, 0x0E, 0x00, 0x0E, 0xDA, 0x0E, 0x00,
        0x0F, 0xDA, 0x0E, 0x00, 0x10, 0xDA, 0x0E, 0x00,
        0x11, 0xDA, 0x0E, 0x00, 0x12, 0xDA, 0x0E, 0x00,
        0x13, 0xDA, 0x0E, 0x00, 0x16, 0xDA, 0x0E, 0x00,
        0x17, 0xDA, 0x0E, 0x00, 0x19, 0xDA, 0x0E, 0x00,
        0x1A, 0xDA, 0x0E, 0x00, 0x1B, 0xDA, 0x0E, 0x00,
        0x1C, 0xDA, 0x0E, 0x00, 0x1D, 0xDA, 0x0E, 0x00,
        0x1E, 0xDA, 0x0E, 0x00, 0x1F, 0xDA, 0x0E, 0x00,
        0x20, 0xDA, 0x0E, 0x00, 0x21, 0xDA, 0x0E, 0x00,
        0x22, 0xDA, 0x0E, 0x00, 0x23, 0xDA, 0x0E, 0x00,
        0x24, 0xDA, 0x0E, 0x00, 0x25, 0xDA, 0x0E, 0x00,
        0x26, 0xDA, 0x0E, 0x00, 0x27, 0xDA, 0x0E, 0x00,
        0x28, 0xDA, 0x0E, 0x00, 0x29, 0xDA, 0x0E, 0x00,
        0x2A, 0xDA, 0x0E, 0x00, 0x2B, 0xDA, 0x0E, 0x00,
        0x2C, 0xDA, 0x0E, 0x00, 0x2D, 0xDA, 0x0E, 0x00,
        0x2E, 0xDA, 0x0E, 0x00, 0x2F, 0xDA, 0x0E, 0x00,
        0x30, 0xDA, 0x0E, 0x00, 0x31, 0xDA, 0x0E, 0x00,
        0x32, 0xDA, 0x0E, 0x00, 0x33, 0xDA, 0x0E, 0x00,
        0x34, 0xDA, 0x0E, 0x00, 0x3B, 0xDA, 0x0E, 0x00,
        0x3C, 0xDA, 0x0E, 0x00, 0x3D, 0xDA, 0x0E, 0x00,
        0x3F, 0xDA, 0x0E, 0x00, 0x40, 0xDA, 0x0E, 0x00,
        0x41, 0xDA, 0x0E, 0x00, 0x44, 0xDA, 0x0E, 0x00,
        0x45, 0xDA, 0x0E, 0x00, 0x46, 0xDA, 0x0E, 0x00,
        0x47, 0xDA, 0x0E, 0x00, 0x48, 0xDA, 0x0E, 0x00,
        0x49, 0xDA, 0x0E, 0x00, 0x4A, 0xDA, 0x0E, 0x00,
        0x4B, 0xDA, 0x0E, 0x00, 0x4C, 0xDA, 0x0E, 0x00,
        0x4D, 0xDA, 0x0E, 0x00, 0x4E, 0xDA, 0x0E, 0x00,
        0x50, 0xDA, 0x0E, 0x00, 0x51, 0xDA, 0x0E, 0x00,
        0x52, 0xDA, 0x0E, 0x00, 0x53, 0xDA, 0x0E, 0x00,
        0x54, 0xDA, 0x0E, 0x00, 0x55, 0xDA, 0x0E, 0x00,
        0x56, 0xDA, 0x0E, 0x00, 0x57, 0xDA, 0x0E, 0x00,
        0x58, 0xDA, 0x0E, 0x00, 0x59, 0xDA, 0x0E, 0x00,
        0x5A, 0xDA, 0x0E, 0x00, 0x5B, 0xDA, 0x0E, 0x00,
        0x5C, 0xDA, 0x0E, 0x00, 0x5D, 0xDA, 0x0E, 0x00,
        0x5E, 0xDA, 0x0E, 0x00, 0x5F, 0xDA, 0x0E, 0x00,
        0x60, 0xDA, 0x0E, 0x00, 0x61, 0xDA, 0x0E, 0x00,
        0x62, 0xDA, 0x0E, 0x00, 0x63, 0xDA, 0x0E, 0x00,
        0x64, 0xDA, 0x0E, 0x00, 0x65, 0xDA, 0x0E, 0x00,
        0x66, 0xDA, 0x0E, 0x00, 0x67, 0xDA, 0x0E, 0x00,
        0x7F, 0xDA, 0x0E, 0x00, 0x80, 0xDA, 0x0E, 0x00,
        0x84, 0xDA, 0x0E, 0x00, 0x86, 0xDA, 0x0E, 0x00,
        0x87, 0xDA, 0x0E, 0x00, 0x88, 0xDA, 0x0E, 0x00,
        0x89, 0xDA, 0x0E, 0x00, 0x8A, 0xDA, 0x0E, 0x00
    };

    address = 0x0000032C;
    memcpy((void *)(address + offset), buffer3, 0x01E8);

    data = 0x000EDA8C;
    for (int i = 0; i < 0x22; i++) {
        WRITEU32(0x00000514 + offset, data);
        offset += 0x04;
        data += 0x01;
    }

    offset = 0x330D5934;
    WRITEU32(0x0000059C + offset, 0x000EDABB);

    static const u8    buffer4[] =
    {
        0xC0, 0xDA, 0x0E, 0x00, 0xC6, 0xDA, 0x0E, 0x00,
        0xC7, 0xDA, 0x0E, 0x00, 0xCB, 0xDA, 0x0E, 0x00,
        0xF0, 0xDA, 0x0E, 0x00, 0xF1, 0xDA, 0x0E, 0x00,
        0xF2, 0xDA, 0x0E, 0x00, 0xF3, 0xDA, 0x0E, 0x00,
        0xF4, 0xDA, 0x0E, 0x00, 0xF5, 0xDA, 0x0E, 0x00,
        0xF6, 0xDA, 0x0E, 0x00, 0xF7, 0xDA, 0x0E, 0x00,
        0xF8, 0xDA, 0x0E, 0x00, 0xF9, 0xDA, 0x0E, 0x00,
        0xFA, 0xDA, 0x0E, 0x00, 0xFB, 0xDA, 0x0E, 0x00,
        0xFC, 0xDA, 0x0E, 0x00, 0xFF, 0xDA, 0x0E, 0x00,
        0x00, 0xDB, 0x0E, 0x00, 0x01, 0xDB, 0x0E, 0x00,
        0x02, 0xDB, 0x0E, 0x00, 0x1B, 0xDB, 0x0E, 0x00,
        0x1C, 0xDB, 0x0E, 0x00, 0x4C, 0xDB, 0x0E, 0x00,
        0x4E, 0xDB, 0x0E, 0x00, 0x51, 0xDB, 0x0E, 0x00,
        0x53, 0xDB, 0x0E, 0x00, 0x55, 0xDB, 0x0E, 0x00,
        0x56, 0xDB, 0x0E, 0x00, 0x57, 0xDB, 0x0E, 0x00,
        0x58, 0xDB, 0x0E, 0x00, 0x6F, 0xDB, 0x0E, 0x00,
        0x70, 0xDB, 0x0E, 0x00, 0x71, 0xDB, 0x0E, 0x00,
        0x72, 0xDB, 0x0E, 0x00, 0x73, 0xDB, 0x0E, 0x00,
        0x74, 0xDB, 0x0E, 0x00, 0x88, 0xDB, 0x0E, 0x00,
        0x89, 0xDB, 0x0E, 0x00, 0x8A, 0xDB, 0x0E, 0x00,
        0x8B, 0xDB, 0x0E, 0x00, 0x8C, 0xDB, 0x0E, 0x00,
        0x8D, 0xDB, 0x0E, 0x00, 0x8E, 0xDB, 0x0E, 0x00,
        0x8F, 0xDB, 0x0E, 0x00, 0x90, 0xDB, 0x0E, 0x00,
        0x91, 0xDB, 0x0E, 0x00, 0x92, 0xDB, 0x0E, 0x00,
        0x93, 0xDB, 0x0E, 0x00, 0x94, 0xDB, 0x0E, 0x00,
        0x95, 0xDB, 0x0E, 0x00, 0x96, 0xDB, 0x0E, 0x00,
        0x97, 0xDB, 0x0E, 0x00, 0x98, 0xDB, 0x0E, 0x00
    };

    address = 0x000005A0;
    memcpy((void *)(address + offset), buffer4, 0xD8);

    if (any_is_pressed(0x0000CFFE)) // Any button but A
        disableCheat(i_allItems);
}


// Gives all medicine items and sets them to quantity 950 (credit to Nanquitas for method)
void    allMedicine(void) {
    u32    data;
    u32    offset;
    u32    address;

    static const u8    buffer[] =
    {
        0x41, 0xD8, 0x0E, 0x00, 0x42, 0xD8, 0x0E, 0x00,
        0x43, 0xD8, 0x0E, 0x00, 0x86, 0xD8, 0x0E, 0x00,
        0xF8, 0xD9, 0x0E, 0x00, 0x35, 0xDA, 0x0E, 0x00,
        0x36, 0xDA, 0x0E, 0x00, 0x37, 0xDA, 0x0E, 0x00,
        0x38, 0xDA, 0x0E, 0x00, 0x39, 0xDA, 0x0E, 0x00,
        0x3A, 0xDA, 0x0E, 0x00, 0x4F, 0xDA, 0x0E, 0x00,
        0x85, 0xDA, 0x0E, 0x00, 0xC4, 0xDA, 0x0E, 0x00,
        0xC5, 0xDA, 0x0E, 0x00, 0x54, 0xDB, 0x0E, 0x00
    };

	offset = 0x330D647C;
    data = 0x000ED811;
    for (int i = 0; i < 0x26; i++) {
        WRITEU32(0x00000000 + offset, data);
        offset += 0x04;
        data += 0x01;
    }
    offset = 0x330D647C;
    address = 0x00000098;
    memcpy((void *)(address + offset), buffer, 0x40);

    if (any_is_pressed(0x0000CFFE)) // Any button but A
		disableCheat(i_allMedicine);
}

// Gives all TMs
void    allTMs(void) {
    static const u8 buffer[] =
    {
        0x6A, 0x06, 0x00, 0x00, 0x6B, 0x06, 0x00, 0x00,
        0x6C, 0x06, 0x00, 0x00, 0xB2, 0x06, 0x00, 0x00,
        0xB3, 0x06, 0x00, 0x00, 0xB4, 0x06, 0x00, 0x00,
        0xB5, 0x06, 0x00, 0x00, 0xB6, 0x06, 0x00, 0x00,
        0xA4, 0x05, 0x00, 0x00, 0xA5, 0x05, 0x00, 0x00,
        0xA6, 0x05, 0x00, 0x00, 0xA7, 0x05, 0x00, 0x00,
        0xA8, 0x05, 0x00, 0x00, 0xA9, 0x05, 0x00, 0x00,
    };

    u32 data;
    u32 offset;
    u32 address;

    offset = 0x330D62CC;
    data = 0x00000548;
    for (int i = 0; i < 0x5C; i++) {
        WRITEU32(offset, data);
        offset += 0x04;
        data += 0x01;
    }
    address = 0x330D62CC;
    offset = 0x00000170;
    memcpy((void *)(address + offset), buffer, 0x38);
    WRITEU32(address + 0x000001A8, 0x000006E1);

    if (any_is_pressed(0x0000CFFE)) // Any button but A
        disableCheat(i_allTMs);
}

// Gives all berries and sets them to quantity 950 (credit to Nanquitas for method)
void    allBerries(void) {
    u32    data;
    u32    offset;

	offset = 0x330D657C;
    data = 0x000ED895;
    for (int i = 0; i < 0x40; i++) {
        WRITEU32(0x00000000 + offset, data);
        offset += 0x04;
        data += 0x01;
    }
    offset = 0x330D657C;

	WRITEU32(0x00000100 + offset, 0x000EDAAE);
	WRITEU32(0x00000104 + offset, 0x000EDAAF);
	WRITEU32(0x00000108 + offset, 0x000EDAB0);

    if (any_is_pressed(0x0000CFFE)) // Any button but A
		disableCheat(i_allBerries);
}


// Gives all PokeBeans and sets them to quantity of 255
void    allBeans(void) {
    u32 offset;
    offset = 0x30000000;

    for (int i = 0; i < 0x0F; i++) {
    WRITEU8(0x03115490 + offset, 0xFF);
    offset += 0x01;
    }
    if (any_is_pressed(0x0000CFFE)) // Any button but A
		disableCheat(i_allBeans);
}


// Function to add clothes to inventory
u32		clothesFunction(u32 offset, u8 data, u16 loop_num) {
	for (int i = 0; i < loop_num; i++) {
		WRITEU8(0x00000000 + offset, data);
		offset += 0x01;
	}
	return(offset);
}

// All Clothes
void	allClothes(void) {
	u32 offset = 0x33116620;

    if (READU8(0x330D67D5) == 0x00) {
        offset = clothesFunction(offset, 0x01, 0x003A);
        offset = clothesFunction(offset, 0x00, 0x0087);
        offset = clothesFunction(offset, 0x01, 0x0014);
        offset = clothesFunction(offset, 0x00, 0x0020);
        offset = clothesFunction(offset, 0x01, 0x0100);
        offset = clothesFunction(offset, 0x00, 0x008F);
        offset = clothesFunction(offset, 0x01, 0x0069);
        offset = clothesFunction(offset, 0x00, 0x00C7);
        offset = clothesFunction(offset, 0x01, 0x0025);
        offset = clothesFunction(offset, 0x00, 0x0079);
        offset = clothesFunction(offset, 0x01, 0x005F);
        offset = clothesFunction(offset, 0x00, 0x0066);
        offset = clothesFunction(offset, 0x01, 0x006D);
        clothesFunction(offset, 0x00, 0x0044);
    } else {
        offset = clothesFunction(offset, 0x01, 0x005E);
        offset = clothesFunction(offset, 0x00, 0x0020);
        offset = clothesFunction(offset, 0x01, 0x0023);
        offset = clothesFunction(offset, 0x00, 0x0020);
        offset = clothesFunction(offset, 0x01, 0x0014);
        offset = clothesFunction(offset, 0x00, 0x0020);
        offset = clothesFunction(offset, 0x01, 0x018A);
        offset = clothesFunction(offset, 0x00, 0x0005);
        offset = clothesFunction(offset, 0x01, 0x00F9);
        offset = clothesFunction(offset, 0x00, 0x0037);
        offset = clothesFunction(offset, 0x01, 0x007E);
        offset = clothesFunction(offset, 0x00, 0x0020);
        offset = clothesFunction(offset, 0x01, 0x00A7);
        offset = clothesFunction(offset, 0x00, 0x001E);
        offset = clothesFunction(offset, 0x01, 0x0091);
        clothesFunction(offset, 0x00, 0x0020);
    }

    offset = 0x33116620;

	WRITEU32(0x000000F8 + offset, 0x03010101);
	WRITEU32(0x000002C8 + offset, 0x03010101);
	WRITEU32(0x000003B4 + offset, 0x01010103);
	WRITEU32(0x00000450 + offset, 0x01030000);
	WRITEU32(0x00000514 + offset, 0x03000000);

	if (any_is_pressed(0x0000CFFE))
		disableCheat(i_allClothes);
}