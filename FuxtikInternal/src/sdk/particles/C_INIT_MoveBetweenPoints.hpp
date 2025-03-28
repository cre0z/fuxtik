#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    // Size: 0x880
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_MoveBetweenPoints : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "minimum speed"
        particleslib::CPerParticleFloatInput m_flSpeedMin; // 0x1c0        
        // metadata: MPropertyFriendlyName "maximum speed"
        particleslib::CPerParticleFloatInput m_flSpeedMax; // 0x318        
        // metadata: MPropertyFriendlyName "end spread"
        particleslib::CPerParticleFloatInput m_flEndSpread; // 0x470        
        // metadata: MPropertyFriendlyName "start offset"
        particleslib::CPerParticleFloatInput m_flStartOffset; // 0x5c8        
        // metadata: MPropertyFriendlyName "end offset"
        particleslib::CPerParticleFloatInput m_flEndOffset; // 0x720        
        // metadata: MPropertyFriendlyName "end control point"
        int32_t m_nEndControlPointNumber; // 0x878        
        // metadata: MPropertyFriendlyName "bias lifetime by trail length"
        bool m_bTrailBias; // 0x87c        
        [[maybe_unused]] std::uint8_t pad_0x87d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_MoveBetweenPoints because it is not a standard-layout class
    static_assert(sizeof(C_INIT_MoveBetweenPoints) == 0x880);
};
