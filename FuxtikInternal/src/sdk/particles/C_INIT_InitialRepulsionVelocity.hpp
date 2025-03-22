#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
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
    // Size: 0x278
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_InitialRepulsionVelocity : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "collision group"
        char m_CollisionGroupName[128]; // 0x1c0        
        // metadata: MPropertyFriendlyName "Trace Set"
        particles::ParticleTraceSet_t m_nTraceSet; // 0x240        
        // metadata: MPropertyFriendlyName "minimum velocity"
        // metadata: MVectorIsCoordinate
        Vector m_vecOutputMin; // 0x244        
        // metadata: MPropertyFriendlyName "maximum velocity"
        // metadata: MVectorIsCoordinate
        Vector m_vecOutputMax; // 0x250        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x25c        
        // metadata: MPropertyFriendlyName "per particle world collision tests"
        bool m_bPerParticle; // 0x260        
        // metadata: MPropertyFriendlyName "offset instead of accelerate"
        bool m_bTranslate; // 0x261        
        // metadata: MPropertyFriendlyName "offset proportional to radius 0/1"
        bool m_bProportional; // 0x262        
        [[maybe_unused]] std::uint8_t pad_0x263[0x1]; // 0x263
        // metadata: MPropertyFriendlyName "trace length"
        float m_flTraceLength; // 0x264        
        // metadata: MPropertyFriendlyName "use radius for per particle trace length"
        bool m_bPerParticleTR; // 0x268        
        // metadata: MPropertyFriendlyName "inherit from parent"
        bool m_bInherit; // 0x269        
        [[maybe_unused]] std::uint8_t pad_0x26a[0x2]; // 0x26a
        // metadata: MPropertyFriendlyName "control points to broadcast to children (n + 1)"
        int32_t m_nChildCP; // 0x26c        
        // metadata: MPropertyFriendlyName "child group ID to affect"
        int32_t m_nChildGroupID; // 0x270        
        [[maybe_unused]] std::uint8_t pad_0x274[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_InitialRepulsionVelocity because it is not a standard-layout class
    static_assert(sizeof(C_INIT_InitialRepulsionVelocity) == 0x278);
};
