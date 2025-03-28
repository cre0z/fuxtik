#pragma once
#include "source2sdk/server/CItem.hpp"
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
    // Size: 0x9e0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CItemDefuser : public server::CItem
    {
    public:
        server::EntitySpottedState_t m_entitySpottedState; // 0x9c0        
        int32_t m_nSpotRules; // 0x9d8        
        [[maybe_unused]] std::uint8_t pad_0x9dc[0x4];
        
        // Datamap fields:
        // void CItemDefuserActivateThink; // 0x0
        // void CItemDefuserDefuserTouch; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemDefuser because it is not a standard-layout class
    static_assert(sizeof(CItemDefuser) == 0x9e0);
};
