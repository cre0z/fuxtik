#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particles/ParticleTraceSet_t.hpp"
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
    // Size: 0x888
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_DistanceBetweenTransforms : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8        
        [[maybe_unused]] std::uint8_t pad_0x1bc[0x4]; // 0x1bc
        // metadata: MPropertyFriendlyName "strarting transform"
        particleslib::CParticleTransformInput m_TransformStart; // 0x1c0        
        // metadata: MPropertyFriendlyName "end transform"
        particleslib::CParticleTransformInput m_TransformEnd; // 0x228        
        // metadata: MPropertyFriendlyName "distance minimum"
        particleslib::CPerParticleFloatInput m_flInputMin; // 0x290        
        // metadata: MPropertyFriendlyName "distance maximum"
        particleslib::CPerParticleFloatInput m_flInputMax; // 0x3e8        
        // metadata: MPropertyFriendlyName "output minimum"
        particleslib::CPerParticleFloatInput m_flOutputMin; // 0x540        
        // metadata: MPropertyFriendlyName "output maximum"
        particleslib::CPerParticleFloatInput m_flOutputMax; // 0x698        
        // metadata: MPropertyFriendlyName "maximum trace length"
        float m_flMaxTraceLength; // 0x7f0        
        // metadata: MPropertyFriendlyName "LOS Failure Scalar"
        float m_flLOSScale; // 0x7f4        
        // metadata: MPropertyFriendlyName "LOS collision group"
        char m_CollisionGroupName[128]; // 0x7f8        
        // metadata: MPropertyFriendlyName "Trace Set"
        particles::ParticleTraceSet_t m_nTraceSet; // 0x878        
        // metadata: MPropertyFriendlyName "ensure line of sight"
        bool m_bLOS; // 0x87c        
        [[maybe_unused]] std::uint8_t pad_0x87d[0x3]; // 0x87d
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x880        
        [[maybe_unused]] std::uint8_t pad_0x884[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_DistanceBetweenTransforms because it is not a standard-layout class
    static_assert(sizeof(C_OP_DistanceBetweenTransforms) == 0x888);
};
