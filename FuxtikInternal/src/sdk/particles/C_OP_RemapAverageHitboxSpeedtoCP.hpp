#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleHitboxDataSelection_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0xe10
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RemapAverageHitboxSpeedtoCP : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "input control point"
        int32_t m_nInControlPointNumber; // 0x1c0        
        // metadata: MPropertyFriendlyName "output control point"
        int32_t m_nOutControlPointNumber; // 0x1c4        
        // metadata: MPropertyFriendlyName "Output component"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nField; // 0x1c8        
        // metadata: MPropertyFriendlyName "hitbox data"
        particles::ParticleHitboxDataSelection_t m_nHitboxDataType; // 0x1cc        
        // metadata: MPropertyFriendlyName "input minimum"
        particleslib::CParticleCollectionFloatInput m_flInputMin; // 0x1d0        
        // metadata: MPropertyFriendlyName "input maximum"
        particleslib::CParticleCollectionFloatInput m_flInputMax; // 0x328        
        // metadata: MPropertyFriendlyName "output minimum"
        particleslib::CParticleCollectionFloatInput m_flOutputMin; // 0x480        
        // metadata: MPropertyFriendlyName "output maximum"
        particleslib::CParticleCollectionFloatInput m_flOutputMax; // 0x5d8        
        // metadata: MPropertyFriendlyName "intersection height CP"
        // metadata: MPropertySuppressExpr "m_nHitboxDataType != PARTICLE_HITBOX_AVERAGE_SPEED"
        int32_t m_nHeightControlPointNumber; // 0x730        
        [[maybe_unused]] std::uint8_t pad_0x734[0x4]; // 0x734
        // metadata: MPropertyFriendlyName "comparison velocity"
        // metadata: MPropertySuppressExpr "m_nHitboxDataType != PARTICLE_HITBOX_AVERAGE_SPEED"
        particleslib::CParticleCollectionVecInput m_vecComparisonVelocity; // 0x738        
        // metadata: MPropertyFriendlyName "hitbox set"
        char m_HitboxSetName[128]; // 0xd90        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapAverageHitboxSpeedtoCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapAverageHitboxSpeedtoCP) == 0xe10);
};
