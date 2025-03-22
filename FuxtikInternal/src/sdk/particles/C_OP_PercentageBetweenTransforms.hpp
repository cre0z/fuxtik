#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
    // Size: 0x2a8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_PercentageBetweenTransforms : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8        
        // metadata: MPropertyFriendlyName "percentage minimum"
        float m_flInputMin; // 0x1bc        
        // metadata: MPropertyFriendlyName "percentage maximum"
        float m_flInputMax; // 0x1c0        
        // metadata: MPropertyFriendlyName "output minimum"
        float m_flOutputMin; // 0x1c4        
        // metadata: MPropertyFriendlyName "output maximum"
        float m_flOutputMax; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x4]; // 0x1cc
        // metadata: MPropertyFriendlyName "strarting transform"
        particleslib::CParticleTransformInput m_TransformStart; // 0x1d0        
        // metadata: MPropertyFriendlyName "end transform"
        particleslib::CParticleTransformInput m_TransformEnd; // 0x238        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x2a0        
        // metadata: MPropertyFriendlyName "only active within input range"
        bool m_bActiveRange; // 0x2a4        
        // metadata: MPropertyFriendlyName "treat distance between points as radius"
        bool m_bRadialCheck; // 0x2a5        
        [[maybe_unused]] std::uint8_t pad_0x2a6[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_PercentageBetweenTransforms because it is not a standard-layout class
    static_assert(sizeof(C_OP_PercentageBetweenTransforms) == 0x2a8);
};
