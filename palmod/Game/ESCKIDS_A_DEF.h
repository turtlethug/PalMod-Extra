#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to ESCKIDS_A_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const sGame_PaletteDataset ESCKIDS_A_SYD[] =
{
    { L"Syd Jones", 0x3000, 0x3020 }, 
    { L"Syd Jones Intro", 0x295a, 0x297a }, 
    { L"Syd Jones Upgrade Portraits", 0x2c5a, 0x2c7a }, 
    { L"Syd Jones Upgrade Panel", 0x2b3a, 0x2b5a }, 
};
const sGame_PaletteDataset ESCKIDS_A_DIO[] =
{
    { L"Dio Vitale", 0x3020, 0x3040 }, 
    { L"Dio Vitale Intro", 0x297a, 0x299a }, 
    { L"Dio Vitale Upgrade Portraits", 0x2c7a, 0x2c9a }, 
    { L"Dio Vitale Upgrade Panel", 0x2b5a, 0x2b7a }, 
};
const sGame_PaletteDataset ESCKIDS_A_JYA[] =
{
    { L"Jya Aziz", 0x3040, 0x3060 }, 
    { L"Jya Aziz Intro", 0x299a, 0x29ba }, 
    { L"Jya Aziz Upgrade Portraits", 0x2c9a, 0x2cba }, 
    { L"Jya Aziz Upgrade Panel", 0x2b7a, 0x2b9a },
};
const sGame_PaletteDataset ESCKIDS_A_KEN[] =
{
    { L"Ken Kosugi", 0x3060, 0x3080 }, 
    { L"Ken Kosugi Intro", 0x29ba, 0x29da }, 
    { L"Ken Kosugi Upgrade Portraits", 0x2cba, 0x2cda }, 
    { L"Ken Kosugi Upgrade Panel", 0x2b9a, 0x2bba }, 
};
const sGame_PaletteDataset ESCKIDS_A_CHAMP[] =
{
    { L"Champion", 0x3080, 0x30a0 }, 
    { L"Champion Intro", 0x29da, 0x29fa }, 
};
const sGame_PaletteDataset ESCKIDS_A_BONUS[] =
{
    { L"Vyon (flagman)", 0x30a0, 0x30c0 }, 
    { L"Title Screen Background", 0x28da, 0x295a }, 
    { L"Upgrade Screen Women", 0x2d1a, 0x2d3a },
};

const sDescTreeNode ESCKIDS_A_SYD_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)ESCKIDS_A_SYD, ARRAYSIZE(ESCKIDS_A_SYD) },
};

const sDescTreeNode ESCKIDS_A_DIO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)ESCKIDS_A_DIO, ARRAYSIZE(ESCKIDS_A_DIO) },
};

const sDescTreeNode ESCKIDS_A_JYA_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)ESCKIDS_A_JYA, ARRAYSIZE(ESCKIDS_A_JYA) },
};

const sDescTreeNode ESCKIDS_A_KEN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)ESCKIDS_A_KEN, ARRAYSIZE(ESCKIDS_A_KEN) },
};

const sDescTreeNode ESCKIDS_A_CHAMP_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)ESCKIDS_A_CHAMP, ARRAYSIZE(ESCKIDS_A_CHAMP) },
};

const sDescTreeNode ESCKIDS_A_BONUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)ESCKIDS_A_BONUS, ARRAYSIZE(ESCKIDS_A_BONUS) },
};

const sDescTreeNode ESCKIDS_A_UNITS[] =
{
    { L"Syd Jones", DESC_NODETYPE_TREE, (void*)ESCKIDS_A_SYD_COLLECTION, ARRAYSIZE(ESCKIDS_A_SYD_COLLECTION) },
	{ L"Dio Vitale", DESC_NODETYPE_TREE, (void*)ESCKIDS_A_DIO_COLLECTION, ARRAYSIZE(ESCKIDS_A_DIO_COLLECTION) },
	{ L"Jya Aziz", DESC_NODETYPE_TREE, (void*)ESCKIDS_A_JYA_COLLECTION, ARRAYSIZE(ESCKIDS_A_JYA_COLLECTION) },
	{ L"Ken Kosugi", DESC_NODETYPE_TREE, (void*)ESCKIDS_A_KEN_COLLECTION, ARRAYSIZE(ESCKIDS_A_KEN_COLLECTION) },
	{ L"Champion", DESC_NODETYPE_TREE, (void*)ESCKIDS_A_CHAMP_COLLECTION, ARRAYSIZE(ESCKIDS_A_CHAMP_COLLECTION) },
	{ L"Bonus", DESC_NODETYPE_TREE, (void*)ESCKIDS_A_BONUS_COLLECTION, ARRAYSIZE(ESCKIDS_A_BONUS_COLLECTION) },
};

constexpr auto ESCKIDS_A_NUMUNIT = ARRAYSIZE(ESCKIDS_A_UNITS);

#define ESCKIDS_A_EXTRALOC ESCKIDS_A_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef ESCKIDS_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
