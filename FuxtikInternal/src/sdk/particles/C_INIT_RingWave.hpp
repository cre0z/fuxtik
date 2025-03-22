#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
    // Size: 0xcf0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_RingWave : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "input transform"
        particleslib::CParticleTransformInput m_TransformInput; // 0x1c0        
        // metadata: MPropertyFriendlyName "even distribution count"
        particleslib::CParticleCollectionFloatInput m_flParticlesPerOrbit; // 0x228        
        // metadata: MPropertyFriendlyName "initial radius"
        particleslib::CPerParticleFloatInput m_flInitialRadius; // 0x380        
        // metadata: MPropertyFriendlyName "thickness"
        particleslib::CPerParticleFloatInput m_flThickness; // 0x4d8        
        // metadata: MPropertyFriendlyName "min initial speed"
        particleslib::CPerParticleFloatInput m_flInitialSpeedMin; // 0x630        
        // metadata: MPropertyFriendlyName "max initial speed"
        particleslib::CPerParticleFloatInput m_flInitialSpeedMax; // 0x788        
        // metadata: MPropertyFriendlyName "roll"
        particleslib::CPerParticleFloatInput m_flRoll; // 0x8e0        
        // metadata: MPropertyFriendlyName "pitch"
        particleslib::CPerParticleFloatInput m_flPitch; // 0xa38        
        // metadata: MPropertyFriendlyName "yaw"
        particleslib::CPerParticleFloatInput m_flYaw; // 0xb90        
        // metadata: MPropertyFriendlyName "even distribution"
        bool m_bEvenDistribution; // 0xce8        
        // metadata: MPropertyFriendlyName "XY velocity only"
        bool m_bXYVelocityOnly; // 0xce9        
        [[maybe_unused]] std::uint8_t pad_0xcea[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_RingWave because it is not a standard-layout class
    static_assert(sizeof(C_INIT_RingWave) == 0xcf0);
};
