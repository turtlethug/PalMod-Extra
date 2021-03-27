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
    { L"Jotaro Child Mode Flash P1", 0x3b0680, 0x3b0700 }, 
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
    { L"Jotaro Child Mode Flash P2", 0x3b1300, 0x3b1380 }, 
    { L"Star Platinum Select/Win P2", 0x3f3c00, 0x3f3c80 }, 
    { L"Jotaro Vs/Super P2", 0x3c9e80, 0x3c9f00 }, 
    { L"Jotaro Challenger P2", 0x3c8e00, 0x3c8e80 }, 
};
const sDescTreeNode VENTURE_A_COL_JOTARO[] =
{
	{ L"Jotaro P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_JOTARO_P1, ARRAYSIZE(VENTURE_A_JOTARO_P1) },
    { L"Jotaro P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_JOTARO_P2, ARRAYSIZE(VENTURE_A_JOTARO_P2) },
};
const sGame_PaletteDataset VENTURE_A_KAKYOIN_P1[] =
{
	{ L"Kakyoin & Hierophant Green P1", 0x3b1900, 0x3b1980 }, 
    { L"Kakyoin Burning P1 1/2", 0x3b1980, 0x3b1a00 }, 
    { L"Kakyoin Burning P1 2/2", 0x3b1a00, 0x3b1a80 }, 
    { L"Kakyoin Tech/Zap P1 1/2", 0x3b1c80, 0x3b1d00 }, 
    { L"Kakyoin Tech/Zap P1 2/2", 0x3b1d00, 0x3b1d80 }, 
    { L"Hierophant Remote Mode/GC Flash", 0x3b1d80, 0x3b1e00 }, 
    { L"Hierophant Raging Demon/GC Flas", 0x3b2080, 0x3b2100 }, 
    { L"Kakyoin Select/Win P1", 0x3f2e80, 0x3f2f00 }, 
    { L"Hierophant Green Select/Win P1", 0x3f2f00, 0x3f2f80 }, 
    { L"Kakyoin Vs/Super P1", 0x3c9880, 0x3c9900 }, 
    { L"Kakyoin Challenger P1", 0x3c8880, 0x3c8900 }, 
};
const sGame_PaletteDataset VENTURE_A_KAKYOIN_P2[] = 
{
	{ L"Kakyoin & Hierophant Green P2", 0x3b2580, 0x3b2600 }, 
    { L"Kakyoin Select/Win P2", 0x3f3c80, 0x3f3d00 }, 
    { L"Hierophant Green Select/Win P2", 0x3f3d00, 0x3f3d80 }, 
    { L"Kakyoin Vs/Super P2", 0x3c9f00, 0x3c9f80 }, 
    { L"Kakyoin Challenger P2", 0x3c8e80, 0x3c8f00 }, 
};
const sDescTreeNode VENTURE_A_COL_KAKYOIN[] =
{
	{ L"Kakyoin P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_KAKYOIN_P1, ARRAYSIZE(VENTURE_A_KAKYOIN_P1) },
    { L"Kakyoin P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_KAKYOIN_P2, ARRAYSIZE(VENTURE_A_KAKYOIN_P2) },
};
const sGame_PaletteDataset VENTURE_A_AVDOL_P1[] = 
{
	{ L"Avdol & Magician's Red P1", 0x3b3200, 0x3b3280 }, 
    { L"Avdol Select/Win P1", 0x3f2f80, 0x3f3000 }, 
    { L"Magician's Red Select/Win P1", 0x3f3000, 0x3f3080 }, 
    { L"Avdol Vs/Super P1", 0x3c9900, 0x3c9980 }, 
    { L"Avdol Challenger P1", 0x3c8900, 0x3c8980 }, 
};
const sGame_PaletteDataset VENTURE_A_AVDOL_P2[] = 
{
	{ L"Avdol & Magician's Red P2", 0x3b3e80, 0x3b3f00 }, 
    { L"Avdol Select/Win P2", 0x3f3d80, 0x3f3e00 }, 
    { L"Magician's Red Select/Win P2", 0x3f3e00, 0x3f3e80 }, 
    { L"Avdol Vs/Super P2", 0x3c9f80, 0x3ca000 }, 
    { L"Avdol Challenger P2", 0x3c8f00, 0x3c8f80 }, 
	
};
const sDescTreeNode VENTURE_A_COL_AVDOL[] =
{
	{ L"Avdol P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_AVDOL_P1, ARRAYSIZE(VENTURE_A_AVDOL_P1) },
    { L"Avdol P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_AVDOL_P2, ARRAYSIZE(VENTURE_A_AVDOL_P2) },
};
const sGame_PaletteDataset VENTURE_A_POL_P1[] =
{
	{ L"Polnareff & Silver Chariot P1", 0x3b4b00, 0x3b4b80 }, 
    { L"Polnareff Select/Win P1", 0x3f3080, 0x3f3100 }, 
    { L"Silver Chariot Select/Win P1", 0x3f3100, 0x3f3180 }, 
    { L"Polnareff Vs/Super P1", 0x3c9980, 0x3c9a00 }, 
    { L"Polnareff Challenger P1", 0x3c8980, 0x3c8a00 }, 
};
const sGame_PaletteDataset VENTURE_A_POL_P2[] =
{
	{ L"Polnareff & Silver Chariot P2", 0x3b5780, 0x3b5800 }, 
    { L"Polnareff Select/Win P2", 0x3f3e80, 0x3f3f00 }, 
    { L"Silver Chariot Select/Win P2", 0x3f3f00, 0x3f3f80 }, 
    { L"Polnareff Vs/Super P2", 0x3ca000, 0x3ca080 }, 
    { L"Polnareff Challenger P2", 0x3c8f80, 0x3c9000 }, 
};
const sDescTreeNode VENTURE_A_COL_POL[] =
{
	{ L"Polnareff P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_POL_P1, ARRAYSIZE(VENTURE_A_POL_P1) },
    { L"Polnareff P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_POL_P2, ARRAYSIZE(VENTURE_A_POL_P2) },
};
const sGame_PaletteDataset VENTURE_A_JOSEPH_P1[] =
{
	{ L"Joseph & Hermit Purple P1", 0x3b6400, 0x3b6480 }, 
    { L"Joseph Select/Win P1", 0x3f3180, 0x3f3200 }, 
    { L"Hermit Purple Select/Win P1", 0x3f3200, 0x3f3280 }, 
    { L"Joseph Vs/Super P1", 0x3c9a00, 0x3c9a80 }, 
    { L"Joseph Challenger P1", 0x3c8a00, 0x3c8a80 }, 
};
const sGame_PaletteDataset VENTURE_A_JOSEPH_P2[] =
{
	{ L"Joseph & Hermit Purple P2", 0x3b7080, 0x3b7100 }, 
    { L"Joseph Select/Win P2", 0x3f3f80, 0x3f4000 }, 
    { L"Hermit Purple Select/Win P2", 0x3f4000, 0x3f4080 }, 
    { L"Joseph Vs/Super P2", 0x3ca080, 0x3ca100 }, 
    { L"Joseph Challenger P2", 0x3c9000, 0x3c9080 }, 
};
const sDescTreeNode VENTURE_A_COL_JOSEPH[] =
{
	{ L"Joseph P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_JOSEPH_P1, ARRAYSIZE(VENTURE_A_JOSEPH_P1) },
    { L"Joseph P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_JOSEPH_P2, ARRAYSIZE(VENTURE_A_JOSEPH_P2) },
};
const sGame_PaletteDataset VENTURE_A_IGGY_P1[] =
{
    { L"Iggy & The Fool P1", 0x3b7d00, 0x3b7d80 }, 
    { L"Iggy Raging Demon Trail P1 1/3", 0x3b8500, 0x3b8580 }, 
    { L"Iggy Raging Demon Trail P1 2/3", 0x3b8580, 0x3b8600 }, 
    { L"Iggy Raging Demon Trail P1 3/3", 0x3b8600, 0x3b8680 }, 
    { L"Iggy Burn P1 1/2", 0x3b7d80, 0x3b7e00 }, 
    { L"Iggy Burn P1 2/2", 0x3b7e00, 0x3b7e80 }, 
    { L"Iggy Tech/Zap P1 1/2", 0x3b8080, 0x3b8100 }, 
    { L"Iggy Tech/Zap P1 2/2", 0x3b8100, 0x3b8180 }, 
    { L"Iggy GC/Child Mode P1", 0x3b8380, 0x3b8400 }, 
    { L"Iggy Vs/Super P1", 0x3c9a80, 0x3c9b00 }, 
    { L"Iggy Challenger P1", 0x3c8a80, 0x3c8b00 }, 
};
const sGame_PaletteDataset VENTURE_A_IGGY_P2[] =
{
    { L"Iggy & The Fool P2", 0x3b8980, 0x3b8a00 }, 
    { L"Iggy Raging Demon Trail P2 1/3", 0x3b9180, 0x3b9200 }, 
    { L"Iggy Raging Demon Trail P2 2/3", 0x3b9200, 0x3b9280 }, 
    { L"Iggy Raging Demon Trail P2 3/3", 0x3b9280, 0x3b9300 }, 
    { L"Iggy Burn P2 1/2", 0x3b8a00, 0x3b8a80 }, 
    { L"Iggy Burn P2 2/2", 0x3b8a80, 0x3b8b00 }, 
    { L"Iggy Tech/Zap P2 1/2", 0x3b8d00, 0x3b8d80 }, 
    { L"Iggy Tech/Zap P2 2/2", 0x3b8d80, 0x3b8e00 }, 
    { L"Iggy GC/Child Mode P2", 0x3b9000, 0x3b9080 }, 
    { L"Iggy Select/Win P2", 0x3f4080, 0x3f4100 }, 
    { L"The Fool Select/Win P2", 0x3f4100, 0x3f4180 }, 
    { L"Iggy Vs/Super P2", 0x3ca100, 0x3ca180 }, 
    { L"Iggy Challenger P2", 0x3c9080, 0x3c9100 }, 
	
};
const sDescTreeNode VENTURE_A_COL_IGGY[] =
{
	{ L"Iggy P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_IGGY_P1, ARRAYSIZE(VENTURE_A_IGGY_P1) },
    { L"Iggy P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_IGGY_P2, ARRAYSIZE(VENTURE_A_IGGY_P2) },
};

const sGame_PaletteDataset VENTURE_A_ALESSI_P1[] =
{
    { L"Alessi & Sethan P1", 0x3b9600, 0x3b9680 }, 
    { L"Alessi Select/Win P1", 0x3f3380, 0x3f3400 }, 
    { L"Sethan Select/Win P1", 0x3f3400, 0x3f3480 }, 
    { L"Alessi Vs/Super P1", 0x3c9b00, 0x3c9b80 }, 
    { L"Alessi Challenger P1", 0x3c8b00, 0x3c8b80 }, 
};
const sGame_PaletteDataset VENTURE_A_ALESSI_P2[] =
{
    { L"Alessi & Sethan P2", 0x3ba280, 0x3ba300 }, 
    { L"Alessi Select/Win P2", 0x3f4180, 0x3f4200 }, 
    { L"Sethan Select/Win P2", 0x3f4200, 0x3f4280 }, 
    { L"Alessi Vs/Super P2", 0x3ca180, 0x3ca200 }, 
    { L"Alessi Challenger P2", 0x3c9100, 0x3c9180 }, 
	
};
const sDescTreeNode VENTURE_A_COL_ALESSI[] =
{
	{ L"Alessi P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_ALESSI_P1, ARRAYSIZE(VENTURE_A_ALESSI_P1) },
    { L"Alessi P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_ALESSI_P2, ARRAYSIZE(VENTURE_A_ALESSI_P2) },
};
const sGame_PaletteDataset VENTURE_A_CHAKA_P1[] =
{
    { L"Chaka & Anubis P1", 0x3baf00, 0x3baf80 }, 
    { L"Chaka Select/Win P1", 0x3f3480, 0x3f3500 }, 
    { L"Chaka Vs/Super P1", 0x3c9b80, 0x3c9c00 }, 
    { L"Chaka Challenger P1", 0x3c8b80, 0x3c8c00 }, 
};
const sGame_PaletteDataset VENTURE_A_CHAKA_P2[] =
{
    { L"Chaka & Anubis P2", 0x3bbb80, 0x3bbc00 }, 
    { L"Chaka Select/Win P2", 0x3f4280, 0x3f4300 }, 
    { L"Chaka Vs/Super P2", 0x3ca200, 0x3ca280 }, 
    { L"Chaka Challenger P2", 0x3c9180, 0x3c9200 }, 
	
};
const sDescTreeNode VENTURE_A_COL_CHAKA[] =
{
	{ L"Chaka P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_CHAKA_P1, ARRAYSIZE(VENTURE_A_CHAKA_P1) },
    { L"Chaka P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_CHAKA_P2, ARRAYSIZE(VENTURE_A_CHAKA_P2) },
};
const sGame_PaletteDataset VENTURE_A_DEVO_P1[] =
{
    { L"Devo & Ebony Devil P1", 0x3bc800, 0x3bc880 }, 
    { L"Devo Select/Win P1", 0x3f3500, 0x3f3580 }, 
    { L"Ebony Devil Select/Win P1", 0x3f3580, 0x3f3600 }, 
    { L"Devo Vs/Super P1", 0x3c9c00, 0x3c9c80 }, 
    { L"Devo Challenger P1", 0x3c8c00, 0x3c8c80 }, 
};
const sGame_PaletteDataset VENTURE_A_DEVO_P2[] =
{
    { L"Devo & Ebony Devil P2", 0x3bd480, 0x3bd500 }, 
    { L"Devo Select/Win P2", 0x3f4300, 0x3f4380 }, 
    { L"Ebony Devil Select/Win P2", 0x3f4380, 0x3f4400 }, 
    { L"Devo Vs/Super P2", 0x3ca280, 0x3ca300 }, 
    { L"Devo Challenger P2", 0x3c9200, 0x3c9280 }, 
	
};
const sDescTreeNode VENTURE_A_COL_DEVO[] =
{
	{ L"Devo P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_DEVO_P1, ARRAYSIZE(VENTURE_A_DEVO_P1) },
    { L"Devo P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_DEVO_P2, ARRAYSIZE(VENTURE_A_DEVO_P2) },
};
const sGame_PaletteDataset VENTURE_A_MIDLER_P1[] =
{
    { L"Midler & High Priestess P1", 0x3bfa00, 0x3bfa80 }, 
    { L"Midler Select/Win P1", 0x3f3700, 0x3f3780 }, 
    { L"High Priestess Select/Win P1", 0x3f3780, 0x3f3800 }, 
    { L"Midler Vs/Super P1", 0x3c9d00, 0x3c9d80 }, 
    { L"Midler Challenger P1", 0x3c8d00, 0x3c8d80 }, 
};

const sGame_PaletteDataset VENTURE_A_MIDLER_P2[] =
{
    { L"Midler & High Priestess P2", 0x3c0680, 0x3c0700 }, 
    { L"Midler Select/Win P2", 0x3f4500, 0x3f4580 }, 
    { L"High Priestess Select/Win P2", 0x3f4580, 0x3f4600 }, 
    { L"Midler Vs/Super P2", 0x3ca380, 0x3ca400 }, 
    { L"Midler Challenger P2", 0x3c9300, 0x3c9380 }, 
	
};
const sDescTreeNode VENTURE_A_COL_MIDLER[] =
{
	{ L"Midler P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_MIDLER_P1, ARRAYSIZE(VENTURE_A_MIDLER_P1) },
    { L"Midler P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_MIDLER_P2, ARRAYSIZE(VENTURE_A_MIDLER_P2) },
};
const sGame_PaletteDataset VENTURE_A_DIO_P1[] =
{
    { L"DIO & The World P1", 0x3c1300, 0x3c1380 }, 
    { L"DIO Select/Win P1", 0x3f3a00, 0x3f3a80 }, 
    { L"DIO High Score Select/Win P1", 0x3f3a80, 0x3f3b00 }, 
    { L"The World Select/Win P1", 0x3f3b00, 0x3f3b80 }, 
    { L"DIO VS/Super P1", 0x3c9e00, 0x3c9e80 }, 
    { L"DIO Challenger P1", 0x3c8d80, 0x3c8e00 }, 
};
const sGame_PaletteDataset VENTURE_A_DIO_P2[] =
{
    { L"DIO & The World P2", 0x3c1f80, 0x3c2000 }, 
    { L"DIO Select/Win P2", 0x3f4780, 0x3f4800 }, 
    { L"DIO High Score Select/Win P2", 0x3f4800, 0x3f4880 }, 
    { L"The World Select/Win P2", 0x3f4880, 0x3f4900 }, 
    { L"DIO VS/Super P2", 0x3ca480, 0x3ca500 }, 
    { L"DIO Challenger P2", 0x3c9380, 0x3c9400 }, 
	
};
const sDescTreeNode VENTURE_A_COL_DIO[] =
{
	{ L"Dio P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_DIO_P1, ARRAYSIZE(VENTURE_A_DIO_P1) },
    { L"Dio P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_DIO_P2, ARRAYSIZE(VENTURE_A_DIO_P2) },
};
const sGame_PaletteDataset VENTURE_A_SDIO_P1[] =
{
    { L"Shadow Dio P1", 0x3c4500, 0x3c4580 }, 
    { L"Shadow Dio Select/Win P1", 0x3f4a00, 0x3f4a80 }, 
    { L"Shadow Dio Vs/Super P1", 0x3ca600, 0x3ca680 }, 
    { L"Shadow Dio Challenger P1", 0x3ca800, 0x3ca880 }, 
};
const sGame_PaletteDataset VENTURE_A_SDIO_P2[] =
{
    { L"Shadow Dio P2", 0x3c5180, 0x3c5200 }, 
    { L"Shadow Dio Select/Win P2", 0x3f4a80, 0x3f4b00 }, 
    { L"Shadow Dio Vs/Super P2", 0x3ca680, 0x3ca700 }, 
    { L"Shadow Dio Challenger P2", 0x3ca880, 0x3ca900 }, 
	
};
const sDescTreeNode VENTURE_A_COL_SDIO[] =
{
	{ L"Shadow Dio P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_SDIO_P1, ARRAYSIZE(VENTURE_A_SDIO_P1) },
    { L"Shadow Dio P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_SDIO_P2, ARRAYSIZE(VENTURE_A_SDIO_P2) },
};
const sGame_PaletteDataset VENTURE_A_YJOSEPH_P1[] =
{
    { L"Young Joseph P1", 0x3c5e00, 0x3c5e80 }, 
    { L"Young Joseph Select/Win P1", 0x3f4900, 0x3f4980 }, 
    { L"Young Joseph Vs/Super P1", 0x3ca500, 0x3ca580 }, 
    { L"Young Joseph Challenger P1", 0x3ca700, 0x3ca780 }, 
};
const sGame_PaletteDataset VENTURE_A_YJOSEPH_P2[] =
{
    { L"Young Joseph P2", 0x3c6a80, 0x3c6b00 }, 
    { L"Young Joseph Select/Win P2", 0x3f4980, 0x3f4a00 }, 
    { L"Young Joseph Vs/Super P2", 0x3ca580, 0x3ca600 }, 
    { L"Young Joseph Challenger P2", 0x3ca780, 0x3ca800 }, 
	
};
const sDescTreeNode VENTURE_A_COL_YJOSEPH[] =
{
	{ L"Young Joseph P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_YJOSEPH_P1, ARRAYSIZE(VENTURE_A_YJOSEPH_P1) },
    { L"Young Joseph P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_YJOSEPH_P2, ARRAYSIZE(VENTURE_A_YJOSEPH_P2) },
};
const sGame_PaletteDataset VENTURE_A_BICE_P1[] =
{
    { L"Vanilla Ice & Cream P1", 0x3c2c00, 0x3c2c80 }, 
    { L"Vanilla Ice Select/Win P1", 0x3f3800, 0x3f3880 }, 
    { L"Vanilla Ice Select/Win???? P1", 0x3f3880, 0x3f3900 }, 
    { L"Cream Select/Win P1", 0x3f3900, 0x3f3980 }, 
    { L"Vanilla Ice VS/Super P1", 0x3c9d80, 0x3c9e00 }, 
	
};
const sDescTreeNode VENTURE_A_COL_BICE[] =
{
	{ L"Vanilla Ice (Boss) P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_BICE_P1, ARRAYSIZE(VENTURE_A_BICE_P1) },
};
const sGame_PaletteDataset VENTURE_A_NDOUL_P1[] =
{
    { L"Ndoul P1", 0x3be100, 0x3be180 }, 
    { L"Ndoul Select/Win P1", 0x3f3600, 0x3f3680 }, 
    { L"Ndoul VS/Super P1", 0x3c9c80, 0x3c9d00 }, 
    { L"Ndoul Challenger P1", 0x3c8c80, 0x3c8d00 }, 
};
const sGame_PaletteDataset VENTURE_A_NDOUL_P2[] =
{
	{ L"Ndoul P2", 0x3beD80, 0x3bee00 }, 
	
};
const sDescTreeNode VENTURE_A_COL_NDOUL[] =
{
	{ L"Ndoul P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_NDOUL_P1, ARRAYSIZE(VENTURE_A_NDOUL_P1) },
    { L"Ndoul P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_NDOUL_P2, ARRAYSIZE(VENTURE_A_NDOUL_P2) },
};
const sGame_PaletteDataset VENTURE_A_DEATH13_P1[] =
{
    { L"Death 13 P1", 0x3c3880, 0x3c3900 }, 

};
const sDescTreeNode VENTURE_A_COL_DEATH13[] =
{
	{ L"Death 13 P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_DEATH13_P1, ARRAYSIZE(VENTURE_A_DEATH13_P1) },
};
const sGame_PaletteDataset VENTURE_A_BONUS[] =
{
#ifdef USE_LARGE_PALETTES
    { L"Challenger Background", 0x3f7580, 0x3f8380 }, 
#else
    { L"Challenger Background (1/7) 0x3f7580", 0x3f7580, 0x3f7780 }, 
    { L"Challenger Background (2/7) 0x3f7780", 0x3f7780, 0x3f7980 }, 
    { L"Challenger Background (3/7) 0x3f7980", 0x3f7980, 0x3f7b80 }, 
    { L"Challenger Background (4/7) 0x3f7b80", 0x3f7b80, 0x3f7d80 }, 
    { L"Challenger Background (5/7) 0x3f7d80", 0x3f7d80, 0x3f7f80 }, 
    { L"Challenger Background (6/7) 0x3f7f80", 0x3f7f80, 0x3f8180 }, 
    { L"Challenger Background (7/7) 0x3f8180", 0x3f8180, 0x3f8380 }, 
#endif
    { L"Cameo (Judgement)", 0x3c7780, 0x3c7800 }, 
    { L"Hol Horse (Beta)", 0x3c7700, 0x3c7780 }, 
    { L"Enya (Beta)", 0x3c7800, 0x3c7880 }, 
    { L"Zombie", 0x3c7880, 0x3c7900 }, 
};
const sDescTreeNode VENTURE_A_COL_BONUS[] =
{
	{ L"Bonus", DESC_NODETYPE_TREE, (void*)VENTURE_A_BONUS, ARRAYSIZE(VENTURE_A_BONUS) },
};
	
	const sDescTreeNode VENTURE_A_UNITS[] =
{
    { L"Jotaro", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_JOTARO, ARRAYSIZE(VENTURE_A_COL_JOTARO) },
    { L"Kakyoin", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_KAKYOIN, ARRAYSIZE(VENTURE_A_COL_KAKYOIN) },
    { L"Avdol", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_AVDOL, ARRAYSIZE(VENTURE_A_COL_AVDOL) },
    { L"Polnareff", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_POL, ARRAYSIZE(VENTURE_A_COL_POL) },
    { L"Joseph", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_JOSEPH, ARRAYSIZE(VENTURE_A_COL_JOSEPH) },
    { L"Iggy", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_IGGY, ARRAYSIZE(VENTURE_A_COL_IGGY) },
    { L"Alessi", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_ALESSI, ARRAYSIZE(VENTURE_A_COL_ALESSI) },
    { L"Chaka", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_CHAKA, ARRAYSIZE(VENTURE_A_COL_CHAKA) },
    { L"Devo", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_DEVO, ARRAYSIZE(VENTURE_A_COL_DEVO) },
    { L"Midler", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_MIDLER, ARRAYSIZE(VENTURE_A_COL_MIDLER) },
    { L"Dio", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_DIO, ARRAYSIZE(VENTURE_A_COL_DIO) },
    { L"Shadow Dio", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_SDIO, ARRAYSIZE(VENTURE_A_COL_SDIO) },
    { L"Young Joseph", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_YJOSEPH, ARRAYSIZE(VENTURE_A_COL_YJOSEPH) },
    { L"N'Doul and Geb", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_NDOUL, ARRAYSIZE(VENTURE_A_COL_NDOUL) },
    { L"Vanilla Ice (Boss)", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_BICE, ARRAYSIZE(VENTURE_A_COL_BICE) },
    { L"Death 13", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_DEATH13, ARRAYSIZE(VENTURE_A_COL_DEATH13) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_BONUS, ARRAYSIZE(VENTURE_A_COL_BONUS) },
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
