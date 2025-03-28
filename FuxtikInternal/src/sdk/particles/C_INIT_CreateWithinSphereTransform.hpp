#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
    // Size: 0x1ab8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateWithinSphereTransform : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "distance min"
        particleslib::CPerParticleFloatInput m_fRadiusMin; // 0x1c0        
        // metadata: MPropertyFriendlyName "distance max"
        particleslib::CPerParticleFloatInput m_fRadiusMax; // 0x318        
        // metadata: MPropertyFriendlyName "distance bias"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_vecDistanceBias; // 0x470        
        // metadata: MPropertyFriendlyName "distance bias absolute value"
        // metadata: MVectorIsCoordinate
        Vector m_vecDistanceBiasAbs; // 0xac8        
        [[maybe_unused]] std::uint8_t pad_0xad4[0x4]; // 0xad4
        // metadata: MPropertyFriendlyName "input position transform"
        particleslib::CParticleTransformInput m_TransformInput; // 0xad8        
        // metadata: MPropertyFriendlyName "speed min"
        particleslib::CPerParticleFloatInput m_fSpeedMin; // 0xb40        
        // metadata: MPropertyFriendlyName "speed max"
        particleslib::CPerParticleFloatInput m_fSpeedMax; // 0xc98        
        // metadata: MPropertyFriendlyName "speed random exponent"
        float m_fSpeedRandExp; // 0xdf0        
        // metadata: MPropertyFriendlyName "bias in local system"
        bool m_bLocalCoords; // 0xdf4        
        [[maybe_unused]] std::uint8_t pad_0xdf5[0x3]; // 0xdf5
        // metadata: MPropertyFriendlyName "randomly distribution growth time"
        float m_flEndCPGrowthTime; // 0xdf8        
        [[maybe_unused]] std::uint8_t pad_0xdfc[0x4]; // 0xdfc
        // metadata: MPropertyFriendlyName "speed in local coordinate system min"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMin; // 0xe00        
        // metadata: MPropertyFriendlyName "speed in local coordinate system max"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_LocalCoordinateSystemSpeedMax; // 0x1458        
        // metadata: MPropertyFriendlyName "Output vector"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1ab0        
        // metadata: MPropertyFriendlyName "Velocity vector"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldVelocity; // 0x1ab4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateWithinSphereTransform because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateWithinSphereTransform) == 0x1ab8);
};
