#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xee8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nDraftType"
    // static metadata: MNetworkVarNames "int m_nTeamWinningCoinToss"
    // static metadata: MNetworkVarNames "int m_nTeamWithFirstChoice"
    // static metadata: MNetworkVarNames "int m_nVoteMapIdsList"
    // static metadata: MNetworkVarNames "int m_nAccountIDs"
    // static metadata: MNetworkVarNames "int m_nMapId0"
    // static metadata: MNetworkVarNames "int m_nMapId1"
    // static metadata: MNetworkVarNames "int m_nMapId2"
    // static metadata: MNetworkVarNames "int m_nMapId3"
    // static metadata: MNetworkVarNames "int m_nMapId4"
    // static metadata: MNetworkVarNames "int m_nMapId5"
    // static metadata: MNetworkVarNames "int m_nStartingSide0"
    // static metadata: MNetworkVarNames "int m_nCurrentPhase"
    // static metadata: MNetworkVarNames "int m_nPhaseStartTick"
    // static metadata: MNetworkVarNames "int m_nPhaseDurationTicks"
    #pragma pack(push, 1)
    class CMapVetoPickController : public server::CBaseEntity
    {
    public:
        bool m_bPlayedIntroVcd; // 0x4c0        
        bool m_bNeedToPlayFiveSecondsRemaining; // 0x4c1        
        [[maybe_unused]] std::uint8_t pad_0x4c2[0x1e]; // 0x4c2
        double m_dblPreMatchDraftSequenceTime; // 0x4e0        
        bool m_bPreMatchDraftStateChanged; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4e9[0x3]; // 0x4e9
        // metadata: MNetworkEnable
        int32_t m_nDraftType; // 0x4ec        
        // metadata: MNetworkEnable
        int32_t m_nTeamWinningCoinToss; // 0x4f0        
        // metadata: MNetworkEnable
        int32_t m_nTeamWithFirstChoice[64]; // 0x4f4        
        // metadata: MNetworkEnable
        int32_t m_nVoteMapIdsList[7]; // 0x5f4        
        // metadata: MNetworkEnable
        int32_t m_nAccountIDs[64]; // 0x610        
        // metadata: MNetworkEnable
        int32_t m_nMapId0[64]; // 0x710        
        // metadata: MNetworkEnable
        int32_t m_nMapId1[64]; // 0x810        
        // metadata: MNetworkEnable
        int32_t m_nMapId2[64]; // 0x910        
        // metadata: MNetworkEnable
        int32_t m_nMapId3[64]; // 0xa10        
        // metadata: MNetworkEnable
        int32_t m_nMapId4[64]; // 0xb10        
        // metadata: MNetworkEnable
        int32_t m_nMapId5[64]; // 0xc10        
        // metadata: MNetworkEnable
        int32_t m_nStartingSide0[64]; // 0xd10        
        // metadata: MNetworkEnable
        int32_t m_nCurrentPhase; // 0xe10        
        // metadata: MNetworkEnable
        int32_t m_nPhaseStartTick; // 0xe14        
        // metadata: MNetworkEnable
        int32_t m_nPhaseDurationTicks; // 0xe18        
        [[maybe_unused]] std::uint8_t pad_0xe1c[0x4]; // 0xe1c
        // m_OnMapVetoed has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<CUtlSymbolLarge> m_OnMapVetoed;
        char m_OnMapVetoed[0x28]; // 0xe20        
        // m_OnMapPicked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<CUtlSymbolLarge> m_OnMapPicked;
        char m_OnMapPicked[0x28]; // 0xe48        
        // m_OnSidesPicked has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<int32_t> m_OnSidesPicked;
        char m_OnSidesPicked[0x28]; // 0xe70        
        // m_OnNewPhaseStarted has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<int32_t> m_OnNewPhaseStarted;
        char m_OnNewPhaseStarted[0x28]; // 0xe98        
        // m_OnLevelTransition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<int32_t> m_OnLevelTransition;
        char m_OnLevelTransition[0x28]; // 0xec0        
        
        // Datamap fields:
        // void CMapVetoPickControllerVoteControllerThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMapVetoPickController because it is not a standard-layout class
    static_assert(sizeof(CMapVetoPickController) == 0xee8);
};
