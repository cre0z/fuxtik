#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xad0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_LerpToInitialPosition : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1b8        
        [[maybe_unused]] std::uint8_t pad_0x1bc[0x4]; // 0x1bc
        // metadata: MPropertyFriendlyName "Interpolation"
        particleslib::CPerParticleFloatInput m_flInterpolation; // 0x1c0        
        // metadata: MPropertyFriendlyName "position cache attribute"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nCacheField; // 0x318        
        [[maybe_unused]] std::uint8_t pad_0x31c[0x4]; // 0x31c
        // metadata: MPropertyFriendlyName "scale"
        particleslib::CParticleCollectionFloatInput m_flScale; // 0x320        
        // metadata: MPropertyFriendlyName "component scale"
        particleslib::CParticleCollectionVecInput m_vecScale; // 0x478        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_LerpToInitialPosition because it is not a standard-layout class
    static_assert(sizeof(C_OP_LerpToInitialPosition) == 0xad0);
};
