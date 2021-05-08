#pragma once
#include "gameclass.h"
#include "ESCKIDS_A_DEF.h"
#include "..\extrafile.h"

// Howdy!  To adapt this file for your game:
// * replace usage of ESCKIDS with the shortname for your game.
// * update the value ESCKIDS_A_PRIMARY_ROMNAME to your ROM name
// That's it: this file should be simple to adapt.

class CGame_ESCKIDS_A : public CGameWithExtrasFile
{
private:
    static UINT32 m_nTotalPaletteCountForESCKIDS;

    static int rgExtraCountAll[ESCKIDS_A_NUMUNIT + 1];
    static int rgExtraLoc[ESCKIDS_A_NUMUNIT + 1];

    static void InitializeStatics();
    static UINT32 m_nExpectedGameROMSize;
    static UINT32 m_nConfirmedROMSize;

    void LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId);
    UINT16 GetPaletteCountForUnit(UINT16 nUnitId);

    static constexpr auto EXTRA_FILENAME_ESCKIDS_A = L"ESCKIDSE.txt";
    static constexpr auto ESCKIDS_A_PRIMARY_ROMNAME = L"975r01"; // the file that your palettes are stored in

public:
    CGame_ESCKIDS_A(UINT32 nConfirmedROMSize);
    ~CGame_ESCKIDS_A(void);

    //Static functions / variables
    static CDescTree MainDescTree;

    static sDescTreeNode* InitDescTree();
    static sFileRule GetRule(UINT16 nUnitId);

    //Extra palette function
    static int GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly = FALSE);
    static int GetExtraLoc(UINT16 nUnitId);

    //Normal functions
    CDescTree* GetMainTree();
    static UINT16 GetCollectionCountForUnit(UINT16 nUnitId);

    // We don't fold these into one sDescTreeNode return because we need to handle the Extra section.
    static UINT16 GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static LPCWSTR GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId);
    static const sGame_PaletteDataset* GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId);

    const sDescTreeNode* GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static stExtraDef* ESCKIDS_A_EXTRA_CUSTOM;
};
