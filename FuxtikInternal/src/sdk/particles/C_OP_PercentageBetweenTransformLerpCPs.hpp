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
    // Size: 0x2b0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_PercentageBetweenTransformLerpCPs : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8        
        // metadata: MPropertyFriendlyName "percentage minimum"
        float m_flInputMin; // 0x1bc        
        // metadata: MPropertyFriendlyName "percentage maximum"
        float m_flInputMax; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "strarting transform"
        particleslib::CParticleTransformInput m_TransformStart; // 0x1c8        
        // metadata: MPropertyFriendlyName "end transform"
        particleslib::CParticleTransformInput m_TransformEnd; // 0x230        
        // metadata: MPropertyFriendlyName "output starting control point number"
        int32_t m_nOutputStartCP; // 0x298        
        // metadata: MPropertyFriendlyName "output starting control point field 0-2 X/Y/Z"
        int32_t m_nOutputStartField; // 0x29c        
        // metadata: MPropertyFriendlyName "output ending control point number"
        int32_t m_nOutputEndCP; // 0x2a0        
        // metadata: MPropertyFriendlyName "output ending control point field 0-2 X/Y/Z"
        int32_t m_nOutputEndField; // 0x2a4        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0x2a8        
        // metadata: MPropertyFriendlyName "only active within input range"
        bool m_bActiveRange; // 0x2ac        
        // metadata: MPropertyFriendlyName "treat distance between points as radius"
        bool m_bRadialCheck; // 0x2ad        
        [[maybe_unused]] std::uint8_t pad_0x2ae[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_PercentageBetweenTransformLerpCPs because it is not a standard-layout class
    static_assert(sizeof(C_OP_PercentageBetweenTransformLerpCPs) == 0x2b0);
};
