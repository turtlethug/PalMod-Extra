#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to VENTURE_A_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const sGame_PaletteDataset VENTURE_A_JOTARO_P1[] =
{
    { L"Jotaro & Star Platinum P1", 0x3b0000, 0x3b0080 }, 
    { L"Star Breaker P1", 0x3b0980, 0x3b09c0 }, 
    { L"Star Platinum Charging Flash P1", 0x3b0480, 0x3b0500 }, 
    { L"Jotaro Burning P1 1/2 ", 0x3b0080, 0x3b0100 }, 
    { L"Jotaro Burning P1 2/2 ", 0x3b0100, 0x3b0180 }, 
    { L"Jotaro Tech/Zap P1 1/2 ", 0x3b0380, 0x3b0400 }, 
    { L"Jotaro Tech/Zap P1 2/2 ", 0x3b0400, 0x3b0480 }, 
    //{ L"Jotaro Child Mode P1", 0x3b0680, 0x3b0700 }, //not sure why these are here, child modes are linked to the main palette, but i'll keep it just in case.
    { L"Jotaro Select/Win P1", 0x3f2d80, 0x3f2e00 }, 
    { L"Star Platinum Select/Win P1", 0x3f2e00, 0x3f2e80 }, 
    { L"Jotaro Vs/Super P1", 0x3c9800, 0x3c9880 }, 
    { L"Jotaro Challenger P1", 0x3c8800, 0x3c8880 }, 
};
const sGame_PaletteDataset VENTURE_A_JOTARO_P2[] =
{
    { L"Jotaro & Star Platinum P2", 0x3b0c80, 0x3b0d00 }, 
    { L"Star Breaker P2", 0x3b1600, 0x3b1640 }, 
    { L"Star Platinum Charging Flash P2", 0x3b1100, 0x3b1180 }, 
    { L"Jotaro Select/Win P2", 0x3f3b80, 0x3f3c00 }, 
    { L"Jotaro Burning P2 1/2 ", 0x3b0d00, 0x3b0d80 }, 
    { L"Jotaro Burning P2 2/2", 0x3b0d80, 0x3b0e00 }, 
    { L"Jotaro Tech/Zap P2 1/2", 0x3b1000, 0x3b1080 }, 
    { L"Jotaro Tech/Zap P2 2/2", 0x3b1080, 0x3b1100 }, 
    //{ L"Jotaro Child Mode P2", 0x3b1300, 0x3b1380 }, 
    { L"Star Platinum Select/Win P2", 0x3f3c00, 0x3f3c80 }, 
    { L"Jotaro Vs/Super P2", 0x3c9e80, 0x3c9f00 }, 
    { L"Jotaro Challenger P2", 0x3c8e00, 0x3c8e80 }, 
};
const sDescTreeNode VENTURE_A_COL_JOTARO[] =
{
	{ L"Jotaro P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_JOTARO_P1, ARRAYSIZE(VENTURE_A_JOTARO_P1) },
    { L"Jotaro P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_JOTARO_P2, ARRAYSIZE(VENTURE_A_JOTARO_P2) },
};
// const sGame_PaletteDataset VENTURE_A_KAKYOIN_P1[] =
// {
	// { L"Kakyoin & Hierophant Green P1", 0x3b1900, 0x3b1980 }, 
    // { L"Kakyoin Burning P1 1/2", 0x3b1980, 0x3b1a00 }, 
    // { L"Kakyoin Burning P1 2/2", 0x3b1a00, 0x3b1a80 }, 
    // { L"Kakyoin Tech/Zap P1 1/2", 0x3b1c80, 0x3b1d00 }, 
    // { L"Kakyoin Tech/Zap P1 2/2", 0x3b1d00, 0x3b1d80 }, 
    // { L"Hierophant Remote Mode/GC Flash", 0x3b1d80, 0x3b1e00 }, 
    // { L"Hierophant Raging Demon/GC Flas", 0x3b2080, 0x3b2100 }, 
    // { L"Kakyoin Select/Win P1", 0x3f2e80, 0x3f2f00 }, 
    // { L"Hierophant Green Select/Win P1", 0x3f2f00, 0x3f2f80 }, 
    // { L"Kakyoin Vs/Super P1", 0x3c9880, 0x3c9900 }, 
    // { L"Kakyoin Challenger P1", 0x3c8880, 0x3c8900 }, 
// };
// const sGame_PaletteDataset VENTURE_A_KAKYOIN_P2[] = //Tons of missing hexes. Should be a high priority if anybody ever goes hunting.
// {
	// { L"Kakyoin & Hierophant Green P2", 0x3b2580, 0x3b2600 }, 
    // { L"Kakyoin Select/Win P2", 0x3f3c80, 0x3f3d00 }, 
    // { L"Hierophant Green Select/Win P2", 0x3f3d00, 0x3f3d80 }, 
    // { L"Kakyoin Vs/Super P2", 0x3c9f00, 0x3c9f80 }, 
    // { L"Kakyoin Challenger P2", 0x3c8e80, 0x3c8f00 }, 
// };
// const sGame_PaletteDataset VENTURE_A_AVDOL_P1[] = //High priority hunt target.
// {
	// { L"Avdol & Magician's Red P1", 0x3b3200, 0x3b3280 }, 
    // { L"Avdol Select/Win P1", 0x3f2f80, 0x3f3000 }, 
    // { L"Magician's Red Select/Win P1", 0x3f3000, 0x3f3080 }, 
    // { L"Avdol Vs/Super P1", 0x3c9900, 0x3c9980 }, 
    // { L"Avdol Challenger P1", 0x3c8900, 0x3c8980 }, 
// };
// const sGame_PaletteDataset VENTURE_A_AVDOL_P2[] = //High priority hunt target.
// {
	// { L"Avdol & Magician's Red P2", 0x3b3e80, 0x3b3f00 }, 
    // { L"Avdol Select/Win P2", 0x3f3d80, 0x3f3e00 }, 
    // { L"Magician's Red Select/Win P2", 0x3f3e00, 0x3f3e80 }, 
    // { L"Avdol Vs/Super P2", 0x3c9f80, 0x3ca000 }, 
    // { L"Avdol Challenger P2", 0x3c8f00, 0x3c8f80 }, 
// };
// const sGame_PaletteDataset VENTURE_A_POL_P1[] =
// {
	// { L"Polnareff & Silver Chariot P1", 0x3b4b00, 0x3b4b80 }, 
    // { L"Polnareff Select/Win P1", 0x3f3080, 0x3f3100 }, 
    // { L"Silver Chariot Select/Win P1", 0x3f3100, 0x3f3180 }, 
    // { L"Polnareff Vs/Super P1", 0x3c9980, 0x3c9a00 }, 
    // { L"Polnareff Challenger P1", 0x3c8980, 0x3c8a00 }, 
// };
// const sGame_PaletteDataset VENTURE_A_POL_P1[] =
// {
	// { L"Polnareff & Silver Chariot P2", 0x3b5780, 0x3b5800 }, 
    // { L"Polnareff Select/Win P2", 0x3f3e80, 0x3f3f00 }, 
    // { L"Silver Chariot Select/Win P2", 0x3f3f00, 0x3f3f80 }, 
    // { L"Polnareff Vs/Super P2", 0x3ca000, 0x3ca080 }, 
    // { L"Polnareff Challenger P2", 0x3c8f80, 0x3c9000 }, 
// };
const sDescTreeNode VENTURE_A_UNITS[] =
{
    { L"Jotaro", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_JOTARO, ARRAYSIZE(VENTURE_A_COL_JOTARO) },
   // { L"Kakyoin & Hierophant", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_HIEROPHANT, ARRAYSIZE(VENTURE_A_COLL_HIEROPHANT) },
   // { L"Avdol", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_AVDOL, ARRAYSIZE(VENTURE_A_COLL_AVDOL) },
   // { L"Polnareff", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_POL, ARRAYSIZE(VENTURE_A_COLL_POL) },
    //{ L"Joseph", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_JOSEPH, ARRAYSIZE(VENTURE_A_COLL_JOSEPH) },
    //{ L"Iggy", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_IGGY, ARRAYSIZE(VENTURE_A_COLL_IGGY) },
   // { L"Alessi", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_ALESSI, ARRAYSIZE(VENTURE_A_COLL_ALESSI) },
    //{ L"Chaka", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_CHAKA, ARRAYSIZE(VENTURE_A_COLL_CHAKA) },
    //{ L"Devo and Ebony", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_DEVOEBONY, ARRAYSIZE(VENTURE_A_COLL_DEVOEBONY) },
    //{ L"Midler", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_MIDLER, ARRAYSIZE(VENTURE_A_COLL_MIDLER) },
    //{ L"Dio", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_DIO, ARRAYSIZE(VENTURE_A_COLL_DIO) },
    //{ L"Shadow Dio", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_SDIO, ARRAYSIZE(VENTURE_A_COLL_SDIO) },
    //{ L"Young Joseph", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_YJOSEPH, ARRAYSIZE(VENTURE_A_COLL_YJOSEPH) },
   // { L"N'Doul and Geb", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_NDOUL, ARRAYSIZE(VENTURE_A_COLL_NDOUL) },
   // { L"Boss Ice", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_BICE, ARRAYSIZE(VENTURE_A_COLL_BICE) },
    //{ L"Death 13", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_DEATH13, ARRAYSIZE(VENTURE_A_COLL_DEATH13) },
   // { L"Unimplemented: Gray Fly", DESC_NODETYPE_TREE, (void*)VENTURE_A_COLL_GRAYFLY, ARRAYSIZE(VENTURE_A_COLL_GRAYFLY) },
   // { L"Bonus", DESC_NODETYPE_TREE,    (void*)VENTURE_A_BONUS_COLLECTION, ARRAYSIZE(VENTURE_A_BONUS_COLLECTION) },
};

constexpr auto VENTURE_A_NUMUNIT = ARRAYSIZE(VENTURE_A_UNITS);

#define VENTURE_A_EXTRALOC VENTURE_A_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef VENTURE_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
