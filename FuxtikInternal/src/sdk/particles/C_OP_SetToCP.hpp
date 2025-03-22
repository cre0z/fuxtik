#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1d0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetToCP : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1b8        
        // metadata: MPropertyFriendlyName "offset"
        Vector m_vecOffset; // 0x1bc        
        // metadata: MPropertyFriendlyName "offset in local space"
        bool m_bOffsetLocal; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1c9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetToCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetToCP) == 0x1d0);
};
