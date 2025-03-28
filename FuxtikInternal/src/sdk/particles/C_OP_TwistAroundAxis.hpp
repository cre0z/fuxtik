#pragma once
#include "source2sdk/particles/CParticleFunctionForce.hpp"
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
    // Size: 0x1e0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_TwistAroundAxis : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "amount of force"
        float m_fForceAmount; // 0x1c8        
        // metadata: MPropertyFriendlyName "twist axis"
        // metadata: MVectorIsCoordinate
        Vector m_TwistAxis; // 0x1cc        
        // metadata: MPropertyFriendlyName "object local space axis 0/1"
        bool m_bLocalSpace; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1d9[0x3]; // 0x1d9
        // metadata: MPropertyFriendlyName "control point"
        int32_t m_nControlPointNumber; // 0x1dc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_TwistAroundAxis because it is not a standard-layout class
    static_assert(sizeof(C_OP_TwistAroundAxis) == 0x1e0);
};
