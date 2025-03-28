#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x18
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "bool m_bSpotted"
    // static metadata: MNetworkVarNames "uint32 m_bSpottedByMask"
    #pragma pack(push, 1)
    struct EntitySpottedState_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnIsSpottedChanged"
        bool m_bSpotted; // 0x8        
        [[maybe_unused]] std::uint8_t pad_0x09[0x3]; // 0x9
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnIsSpottedChanged"
        uint32_t m_bSpottedByMask[2]; // 0xc        
        [[maybe_unused]] std::uint8_t pad_0x14[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(EntitySpottedState_t, m_bSpotted) == 0x8);
    static_assert(offsetof(EntitySpottedState_t, m_bSpottedByMask) == 0xc);
    
    static_assert(sizeof(EntitySpottedState_t) == 0x18);
};
