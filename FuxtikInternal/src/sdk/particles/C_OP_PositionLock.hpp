#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0xa08
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_PositionLock : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "transform input"
        particleslib::CParticleTransformInput m_TransformInput; // 0x1b8        
        // metadata: MPropertyFriendlyName "start fadeout min"
        float m_flStartTime_min; // 0x220        
        // metadata: MPropertyFriendlyName "start fadeout max"
        float m_flStartTime_max; // 0x224        
        // metadata: MPropertyFriendlyName "start fadeout exponent"
        float m_flStartTime_exp; // 0x228        
        // metadata: MPropertyFriendlyName "end fadeout min"
        float m_flEndTime_min; // 0x22c        
        // metadata: MPropertyFriendlyName "end fadeout max"
        float m_flEndTime_max; // 0x230        
        // metadata: MPropertyFriendlyName "end fadeout exponent"
        float m_flEndTime_exp; // 0x234        
        // metadata: MPropertyFriendlyName "distance fade range"
        float m_flRange; // 0x238        
        [[maybe_unused]] std::uint8_t pad_0x23c[0x4]; // 0x23c
        // metadata: MPropertyFriendlyName "distance fade bias"
        particleslib::CParticleCollectionFloatInput m_flRangeBias; // 0x240        
        // metadata: MPropertyFriendlyName "instant jump threshold"
        float m_flJumpThreshold; // 0x398        
        // metadata: MPropertyFriendlyName "previous position scale"
        float m_flPrevPosScale; // 0x39c        
        // metadata: MPropertyFriendlyName "lock rotation"
        bool m_bLockRot; // 0x3a0        
        [[maybe_unused]] std::uint8_t pad_0x3a1[0x7]; // 0x3a1
        // metadata: MPropertyFriendlyName "component scale"
        particleslib::CParticleCollectionVecInput m_vecScale; // 0x3a8        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0xa00        
        // metadata: MPropertyFriendlyName "output field prev"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutputPrev; // 0xa04        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_PositionLock because it is not a standard-layout class
    static_assert(sizeof(C_OP_PositionLock) == 0xa08);
};
