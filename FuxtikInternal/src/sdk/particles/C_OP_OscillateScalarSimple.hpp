#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x1f0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_OscillateScalarSimple : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "oscillation rate"
        float m_Rate; // 0x1b8        
        // metadata: MPropertyFriendlyName "oscillation frequency"
        float m_Frequency; // 0x1bc        
        // metadata: MPropertyFriendlyName "oscillation field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nField; // 0x1c0        
        // metadata: MPropertyFriendlyName "oscillation multiplier"
        float m_flOscMult; // 0x1c4        
        // metadata: MPropertyFriendlyName "oscillation start phase"
        float m_flOscAdd; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x24];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_OscillateScalarSimple because it is not a standard-layout class
    static_assert(sizeof(C_OP_OscillateScalarSimple) == 0x1f0);
};
