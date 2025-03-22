#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe90
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
    class C_MapVetoPickController : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x548[0x10]; // 0x548
        // metadata: MNetworkEnable
        int32_t m_nDraftType; // 0x558        
        // metadata: MNetworkEnable
        int32_t m_nTeamWinningCoinToss; // 0x55c        
        // metadata: MNetworkEnable
        int32_t m_nTeamWithFirstChoice[64]; // 0x560        
        // metadata: MNetworkEnable
        int32_t m_nVoteMapIdsList[7]; // 0x660        
        // metadata: MNetworkEnable
        int32_t m_nAccountIDs[64]; // 0x67c        
        // metadata: MNetworkEnable
        int32_t m_nMapId0[64]; // 0x77c        
        // metadata: MNetworkEnable
        int32_t m_nMapId1[64]; // 0x87c        
        // metadata: MNetworkEnable
        int32_t m_nMapId2[64]; // 0x97c        
        // metadata: MNetworkEnable
        int32_t m_nMapId3[64]; // 0xa7c        
        // metadata: MNetworkEnable
        int32_t m_nMapId4[64]; // 0xb7c        
        // metadata: MNetworkEnable
        int32_t m_nMapId5[64]; // 0xc7c        
        // metadata: MNetworkEnable
        int32_t m_nStartingSide0[64]; // 0xd7c        
        // metadata: MNetworkEnable
        int32_t m_nCurrentPhase; // 0xe7c        
        // metadata: MNetworkEnable
        int32_t m_nPhaseStartTick; // 0xe80        
        // metadata: MNetworkEnable
        int32_t m_nPhaseDurationTicks; // 0xe84        
        int32_t m_nPostDataUpdateTick; // 0xe88        
        bool m_bDisabledHud; // 0xe8c        
        [[maybe_unused]] std::uint8_t pad_0xe8d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_MapVetoPickController because it is not a standard-layout class
    static_assert(sizeof(C_MapVetoPickController) == 0xe90);
};
