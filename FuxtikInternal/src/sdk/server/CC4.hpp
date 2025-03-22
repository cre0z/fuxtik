#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/server/CCSWeaponBase.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
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
    // static metadata: MNetworkVarNames "bool m_bStartedArming"
    // static metadata: MNetworkVarNames "GameTime_t m_fArmedTime"
    // static metadata: MNetworkVarNames "bool m_bBombPlacedAnimation"
    // static metadata: MNetworkVarNames "bool m_bIsPlantingViaUse"
    // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
    #pragma pack(push, 1)
    class CC4 : public server::CCSWeaponBase
    {
    public:
        Vector m_vecLastValidPlayerHeldPosition; // 0xe98        
        Vector m_vecLastValidDroppedPosition; // 0xea4        
        bool m_bDoValidDroppedPositionCheck; // 0xeb0        
        // metadata: MNetworkEnable
        bool m_bStartedArming; // 0xeb1        
        [[maybe_unused]] std::uint8_t pad_0xeb2[0x2]; // 0xeb2
        // metadata: MNetworkEnable
        client::GameTime_t m_fArmedTime; // 0xeb4        
        // metadata: MNetworkEnable
        bool m_bBombPlacedAnimation; // 0xeb8        
        // metadata: MNetworkEnable
        bool m_bIsPlantingViaUse; // 0xeb9        
        [[maybe_unused]] std::uint8_t pad_0xeba[0x6]; // 0xeba
        // metadata: MNetworkEnable
        server::EntitySpottedState_t m_entitySpottedState; // 0xec0        
        int32_t m_nSpotRules; // 0xed8        
        bool m_bPlayedArmingBeeps[7]; // 0xedc        
        bool m_bBombPlanted; // 0xee3        
        [[maybe_unused]] std::uint8_t pad_0xee4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CC4 because it is not a standard-layout class
    static_assert(sizeof(CC4) == 0xee8);
};
