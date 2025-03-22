#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x490
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetFloat : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "value"
        particleslib::CPerParticleFloatInput m_InputValue; // 0x1b8        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nOutputField; // 0x310        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x314        
        // metadata: MPropertyFriendlyName "interpolation"
        particleslib::CPerParticleFloatInput m_Lerp; // 0x318        
        [[maybe_unused]] std::uint8_t pad_0x470[0x20];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetFloat because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetFloat) == 0x490);
};
