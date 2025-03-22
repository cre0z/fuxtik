#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"
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
    // Size: 0x988
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_VectorFieldSnapshot : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "snapshot control point number"
        int32_t m_nControlPointNumber; // 0x1b8        
        // metadata: MPropertyFriendlyName "extra velocity field to write"
        // metadata: MPropertyAttributeChoiceName "particlefield"
        particles::ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1bc        
        // metadata: MPropertyFriendlyName "local space control point number"
        int32_t m_nLocalSpaceCP; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "Interpolation"
        particleslib::CPerParticleFloatInput m_flInterpolation; // 0x1c8        
        // metadata: MPropertyFriendlyName "Component Scale"
        particleslib::CPerParticleVecInput m_vecScale; // 0x320        
        // metadata: MPropertyFriendlyName "Boundary Dampening"
        float m_flBoundaryDampening; // 0x978        
        // metadata: MPropertyFriendlyName "Set Velocity"
        bool m_bSetVelocity; // 0x97c        
        // metadata: MPropertyFriendlyName "Lock to Surface"
        bool m_bLockToSurface; // 0x97d        
        [[maybe_unused]] std::uint8_t pad_0x97e[0x2]; // 0x97e
        // metadata: MPropertyFriendlyName "Vector Field Grid Spacing Override"
        float m_flGridSpacing; // 0x980        
        [[maybe_unused]] std::uint8_t pad_0x984[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_VectorFieldSnapshot because it is not a standard-layout class
    static_assert(sizeof(C_OP_VectorFieldSnapshot) == 0x988);
};
