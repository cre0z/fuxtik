#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleTraceMissBehavior_t.hpp"
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
    // Size: 0x518
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_PositionPlaceOnGround : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "offset"
        particleslib::CPerParticleFloatInput m_flOffset; // 0x1c0        
        // metadata: MPropertyFriendlyName "max trace length"
        particleslib::CPerParticleFloatInput m_flMaxTraceLength; // 0x318        
        // metadata: MPropertyFriendlyName "collision group"
        char m_CollisionGroupName[128]; // 0x470        
        // metadata: MPropertyFriendlyName "Trace Set"
        particles::ParticleTraceSet_t m_nTraceSet; // 0x4f0        
        [[maybe_unused]] std::uint8_t pad_0x4f4[0xc]; // 0x4f4
        // metadata: MPropertyFriendlyName "No Collision Behavior"
        particles::ParticleTraceMissBehavior_t m_nTraceMissBehavior; // 0x500        
        // metadata: MPropertyFriendlyName "include water"
        // metadata: MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
        bool m_bIncludeWater; // 0x504        
        // metadata: MPropertyFriendlyName "set normal"
        bool m_bSetNormal; // 0x505        
        // metadata: MPropertyFriendlyName "set Previous XYZ only"
        bool m_bSetPXYZOnly; // 0x506        
        // metadata: MPropertyFriendlyName "Trace along particle normal"
        bool m_bTraceAlongNormal; // 0x507        
        // metadata: MPropertyFriendlyName "Offset only if trace hit"
        bool m_bOffsetonColOnly; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x509[0x3]; // 0x509
        // metadata: MPropertyFriendlyName "offset final position by this fraction of the particle radius"
        float m_flOffsetByRadiusFactor; // 0x50c        
        // metadata: MPropertyFriendlyName "preserve initial Z-offset relative to cp"
        int32_t m_nPreserveOffsetCP; // 0x510        
        // metadata: MPropertyFriendlyName "CP Entity to Ignore for Collisions"
        // metadata: MPropertySuppressExpr "m_nTraceSet == PARTICLE_TRACE_SET_STATIC"
        int32_t m_nIgnoreCP; // 0x514        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_PositionPlaceOnGround because it is not a standard-layout class
    static_assert(sizeof(C_INIT_PositionPlaceOnGround) == 0x518);
};
