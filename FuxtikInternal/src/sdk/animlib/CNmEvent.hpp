#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animlib
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x10
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CNmEvent
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        float m_flStartTime; // 0x8        
        float m_flDuration; // 0xc        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CNmEvent, m_flStartTime) == 0x8);
    static_assert(offsetof(CNmEvent, m_flDuration) == 0xc);
    
    static_assert(sizeof(CNmEvent) == 0x10);
};
