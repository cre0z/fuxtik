#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
    // Size: 0x9c0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CItem : public server::CBaseAnimGraph
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x8e8[0x8]; // 0x8e8
        entity2::CEntityIOOutput m_OnPlayerTouch; // 0x8f0        
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0x918        
        bool m_bActivateWhenAtRest; // 0x940        
        [[maybe_unused]] std::uint8_t pad_0x941[0x7]; // 0x941
        entity2::CEntityIOOutput m_OnCacheInteraction; // 0x948        
        entity2::CEntityIOOutput m_OnGlovePulled; // 0x970        
        Vector m_vOriginalSpawnOrigin; // 0x998        
        QAngle m_vOriginalSpawnAngles; // 0x9a4        
        bool m_bPhysStartAsleep; // 0x9b0        
        [[maybe_unused]] std::uint8_t pad_0x9b1[0xf];
        
        // Datamap fields:
        // void CItemItemTouch; // 0x0
        // void CItemMaterialize; // 0x0
        // void CItemComeToRest; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItem because it is not a standard-layout class
    static_assert(sizeof(CItem) == 0x9c0);
};
