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
    // Size: 0x1c8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_VelocityMatchingForce : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "direction matching strength"
        float m_flDirScale; // 0x1b8        
        // metadata: MPropertyFriendlyName "speed matching strength"
        float m_flSpdScale; // 0x1bc        
        // metadata: MPropertyFriendlyName "control point to broadcast speed and direction to"
        int32_t m_nCPBroadcast; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_VelocityMatchingForce because it is not a standard-layout class
    static_assert(sizeof(C_OP_VelocityMatchingForce) == 0x1c8);
};
