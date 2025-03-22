#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/HitboxLerpType_t.hpp"
#include "source2sdk/particleslib/CParticleModelInput.hpp"
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
    // Size: 0x470
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_MoveToHitbox : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "model input"
        particleslib::CParticleModelInput m_modelInput; // 0x1b8        
        // metadata: MPropertyFriendlyName "transform input"
        particleslib::CParticleTransformInput m_transformInput; // 0x218        
        [[maybe_unused]] std::uint8_t pad_0x280[0x4]; // 0x280
        // metadata: MPropertyFriendlyName "lifetime lerp start"
        float m_flLifeTimeLerpStart; // 0x284        
        // metadata: MPropertyFriendlyName "lifetime lerp end"
        float m_flLifeTimeLerpEnd; // 0x288        
        // metadata: MPropertyFriendlyName "previous position scale"
        float m_flPrevPosScale; // 0x28c        
        // metadata: MPropertyFriendlyName "hitbox set"
        char m_HitboxSetName[128]; // 0x290        
        // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
        bool m_bUseBones; // 0x310        
        [[maybe_unused]] std::uint8_t pad_0x311[0x3]; // 0x311
        // metadata: MPropertyFriendlyName "lerp type"
        particles::HitboxLerpType_t m_nLerpType; // 0x314        
        // metadata: MPropertyFriendlyName "Constant Interpolation"
        particleslib::CPerParticleFloatInput m_flInterpolation; // 0x318        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_MoveToHitbox because it is not a standard-layout class
    static_assert(sizeof(C_OP_MoveToHitbox) == 0x470);
};
