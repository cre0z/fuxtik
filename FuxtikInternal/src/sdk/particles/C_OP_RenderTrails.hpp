#pragma once
#include "source2sdk/particles/CBaseTrailRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0x3c28
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderTrails : public particles::CBaseTrailRenderer
    {
    public:
        // metadata: MPropertyStartGroup "Screenspace Fading and culling"
        // metadata: MPropertyFriendlyName "enable fading and clamping"
        // metadata: MPropertySortPriority "1000"
        bool m_bEnableFadingAndClamping; // 0x29e0        
        [[maybe_unused]] std::uint8_t pad_0x29e1[0x3]; // 0x29e1
        // metadata: MPropertyFriendlyName "start fade dot product of normal vs view"
        // metadata: MPropertySortPriority "1000"
        float m_flStartFadeDot; // 0x29e4        
        // metadata: MPropertyFriendlyName "end fade dot product of normal vs view"
        // metadata: MPropertySortPriority "1000"
        float m_flEndFadeDot; // 0x29e8        
        // metadata: MPropertyStartGroup "+Trail Length"
        // metadata: MPropertyFriendlyName "Anchor point source"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        // metadata: MPropertySortPriority "800"
        particles::ParticleAttributeIndex_t m_nPrevPntSource; // 0x29ec        
        // metadata: MPropertyFriendlyName "max length"
        // metadata: MPropertySortPriority "800"
        float m_flMaxLength; // 0x29f0        
        // metadata: MPropertyFriendlyName "min length"
        // metadata: MPropertySortPriority "800"
        float m_flMinLength; // 0x29f4        
        // metadata: MPropertyFriendlyName "ignore delta time"
        // metadata: MPropertySortPriority "800"
        bool m_bIgnoreDT; // 0x29f8        
        [[maybe_unused]] std::uint8_t pad_0x29f9[0x3]; // 0x29f9
        // metadata: MPropertyFriendlyName "constrain radius to no more than this times the length"
        // metadata: MPropertySortPriority "800"
        float m_flConstrainRadiusToLengthRatio; // 0x29fc        
        // metadata: MPropertyFriendlyName "amount to scale trail length by"
        float m_flLengthScale; // 0x2a00        
        // metadata: MPropertyFriendlyName "how long before a trail grows to its full length"
        float m_flLengthFadeInTime; // 0x2a04        
        // metadata: MPropertyStartGroup "Trail Head & Tail"
        // metadata: MPropertyFriendlyName "head taper scale"
        // metadata: MPropertySortPriority "800"
        particleslib::CPerParticleFloatInput m_flRadiusHeadTaper; // 0x2a08        
        // metadata: MPropertyFriendlyName "head color scale"
        particleslib::CParticleCollectionVecInput m_vecHeadColorScale; // 0x2b60        
        // metadata: MPropertyFriendlyName "head alpha scale"
        particleslib::CPerParticleFloatInput m_flHeadAlphaScale; // 0x31b8        
        // metadata: MPropertyFriendlyName "tail taper scale"
        particleslib::CPerParticleFloatInput m_flRadiusTaper; // 0x3310        
        // metadata: MPropertyFriendlyName "tail color scale"
        particleslib::CParticleCollectionVecInput m_vecTailColorScale; // 0x3468        
        // metadata: MPropertyFriendlyName "tail alpha scale"
        particleslib::CPerParticleFloatInput m_flTailAlphaScale; // 0x3ac0        
        // metadata: MPropertyStartGroup "Trail UV Controls"
        // metadata: MPropertyFriendlyName "texture UV horizontal Scale field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySortPriority "800"
        particles::ParticleAttributeIndex_t m_nHorizCropField; // 0x3c18        
        // metadata: MPropertyFriendlyName "texture UV vertical Scale field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nVertCropField; // 0x3c1c        
        // metadata: MPropertyFriendlyName "Trail forward shift (fraction)"
        float m_flForwardShift; // 0x3c20        
        // metadata: MPropertyFriendlyName "Flip U or V texcoords if pitch or yaw go over PI"
        bool m_bFlipUVBasedOnPitchYaw; // 0x3c24        
        [[maybe_unused]] std::uint8_t pad_0x3c25[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderTrails because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderTrails) == 0x3c28);
};
