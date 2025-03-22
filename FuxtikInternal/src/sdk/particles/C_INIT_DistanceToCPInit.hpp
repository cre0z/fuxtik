#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
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
    // Size: 0x930
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_DistanceToCPInit : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "distance minimum"
        particleslib::CPerParticleFloatInput m_flInputMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "distance maximum"
        particleslib::CPerParticleFloatInput m_flInputMax; // 0x320        
        // metadata: MPropertyFriendlyName "output minimum"
        particleslib::CPerParticleFloatInput m_flOutputMin; // 0x478        
        // metadata: MPropertyFriendlyName "output maximum"
        particleslib::CPerParticleFloatInput m_flOutputMax; // 0x5d0        
        // metadata: MPropertyFriendlyName "control point"
        int32_t m_nStartCP; // 0x728        
        // metadata: MPropertyFriendlyName "ensure line of sight"
        bool m_bLOS; // 0x72c        
        // metadata: MPropertyFriendlyName "LOS collision group"
        char m_CollisionGroupName[128]; // 0x72d        
        [[maybe_unused]] std::uint8_t pad_0x7ad[0x3]; // 0x7ad
        // metadata: MPropertyFriendlyName "Trace Set"
        particles::ParticleTraceSet_t m_nTraceSet; // 0x7b0        
        [[maybe_unused]] std::uint8_t pad_0x7b4[0x4]; // 0x7b4
        // metadata: MPropertyFriendlyName "Maximum Trace Length"
        particleslib::CPerParticleFloatInput m_flMaxTraceLength; // 0x7b8        
        // metadata: MPropertyFriendlyName "LOS Failure Scalar"
        float m_flLOSScale; // 0x910        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x914        
        // metadata: MPropertyFriendlyName "only active within specified distance"
        bool m_bActiveRange; // 0x918        
        [[maybe_unused]] std::uint8_t pad_0x919[0x3]; // 0x919
        // metadata: MPropertyFriendlyName "distance component scale"
        Vector m_vecDistanceScale; // 0x91c        
        // metadata: MPropertyFriendlyName "remap bias"
        float m_flRemapBias; // 0x928        
        [[maybe_unused]] std::uint8_t pad_0x92c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_DistanceToCPInit because it is not a standard-layout class
    static_assert(sizeof(C_INIT_DistanceToCPInit) == 0x930);
};
