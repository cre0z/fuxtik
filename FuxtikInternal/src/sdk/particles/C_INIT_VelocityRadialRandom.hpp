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
    // Size: 0x488
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_VelocityRadialRandom : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "random speed min"
        particleslib::CPerParticleFloatInput m_fSpeedMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "random speed max"
        particleslib::CPerParticleFloatInput m_fSpeedMax; // 0x320        
        // metadata: MPropertyFriendlyName "local space scale"
        Vector m_vecLocalCoordinateSystemSpeedScale; // 0x478        
        [[maybe_unused]] std::uint8_t pad_0x484[0x1]; // 0x484
        // metadata: MPropertyFriendlyName "ignore delta time"
        bool m_bIgnoreDelta; // 0x485        
        [[maybe_unused]] std::uint8_t pad_0x486[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_VelocityRadialRandom because it is not a standard-layout class
    static_assert(sizeof(C_INIT_VelocityRadialRandom) == 0x488);
};
