#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particles/ParticleLightBehaviorChoiceList_t.hpp"
#include "source2sdk/particles/ParticleLightFogLightingMode_t.hpp"
#include "source2sdk/particles/ParticleLightTypeChoiceList_t.hpp"
#include "source2sdk/particles/StandardLightingAttenuationStyle_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
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
    // Size: 0x1388
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderStandardLight : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "light type"
        particles::ParticleLightTypeChoiceList_t m_nLightType; // 0x208        
        [[maybe_unused]] std::uint8_t pad_0x20c[0x4]; // 0x20c
        // metadata: MPropertyFriendlyName "color blend"
        particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x210        
        // metadata: MPropertyFriendlyName "color blend type"
        particles::ParticleColorBlendType_t m_nColorBlendType; // 0x868        
        [[maybe_unused]] std::uint8_t pad_0x86c[0x4]; // 0x86c
        // metadata: MPropertyFriendlyName "intensity"
        particleslib::CParticleCollectionFloatInput m_flIntensity; // 0x870        
        // metadata: MPropertyFriendlyName "cast shadows"
        // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
        bool m_bCastShadows; // 0x9c8        
        [[maybe_unused]] std::uint8_t pad_0x9c9[0x7]; // 0x9c9
        // metadata: MPropertyFriendlyName "inner cone angle"
        // metadata: MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
        particleslib::CParticleCollectionFloatInput m_flTheta; // 0x9d0        
        // metadata: MPropertyFriendlyName "outer cone angle"
        // metadata: MPropertySuppressExpr "m_nLightType != PARTICLE_LIGHT_TYPE_SPOT"
        particleslib::CParticleCollectionFloatInput m_flPhi; // 0xb28        
        // metadata: MPropertyFriendlyName "light radius multiplier"
        particleslib::CParticleCollectionFloatInput m_flRadiusMultiplier; // 0xc80        
        // metadata: MPropertyFriendlyName "attenuation type"
        particles::StandardLightingAttenuationStyle_t m_nAttenuationStyle; // 0xdd8        
        [[maybe_unused]] std::uint8_t pad_0xddc[0x4]; // 0xddc
        // metadata: MPropertyFriendlyName "falloff linearity"
        // metadata: MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_NEW || ( m_nAttenuationStyle == LIGHT_STYLE_OLD && m_nLightType == PARTICLE_LIGHT_TYPE_FX )"
        particleslib::CParticleCollectionFloatInput m_flFalloffLinearity; // 0xde0        
        // metadata: MPropertyFriendlyName "falloff fifty percent"
        // metadata: MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
        particleslib::CParticleCollectionFloatInput m_flFiftyPercentFalloff; // 0xf38        
        // metadata: MPropertyFriendlyName "falloff zero percent"
        // metadata: MPropertySuppressExpr "m_nAttenuationStyle == LIGHT_STYLE_OLD"
        particleslib::CParticleCollectionFloatInput m_flZeroPercentFalloff; // 0x1090        
        // metadata: MPropertyFriendlyName "render diffuse"
        // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
        bool m_bRenderDiffuse; // 0x11e8        
        // metadata: MPropertyFriendlyName "render specular"
        // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
        bool m_bRenderSpecular; // 0x11e9        
        [[maybe_unused]] std::uint8_t pad_0x11ea[0x6]; // 0x11ea
        // metadata: MPropertyFriendlyName "light cookie string"
        CUtlString m_lightCookie; // 0x11f0        
        // metadata: MPropertyFriendlyName "light priority"
        int32_t m_nPriority; // 0x11f8        
        // metadata: MPropertyFriendlyName "fog lighting mode"
        // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
        particles::ParticleLightFogLightingMode_t m_nFogLightingMode; // 0x11fc        
        // metadata: MPropertyFriendlyName "fog contribution"
        // metadata: MPropertySuppressExpr "m_nLightType == PARTICLE_LIGHT_TYPE_FX"
        particleslib::CParticleCollectionRendererFloatInput m_flFogContribution; // 0x1200        
        // metadata: MPropertyFriendlyName "capsule behavior"
        particles::ParticleLightBehaviorChoiceList_t m_nCapsuleLightBehavior; // 0x1358        
        // metadata: MPropertyStartGroup "Capsule Light Controls"
        // metadata: MPropertyFriendlyName "capsule length"
        // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
        float m_flCapsuleLength; // 0x135c        
        // metadata: MPropertyFriendlyName "reverse point order"
        // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
        bool m_bReverseOrder; // 0x1360        
        // metadata: MPropertyFriendlyName "Closed loop"
        // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_TRAILS"
        bool m_bClosedLoop; // 0x1361        
        [[maybe_unused]] std::uint8_t pad_0x1362[0x2]; // 0x1362
        // metadata: MPropertyFriendlyName "Anchor point source"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
        particles::ParticleAttributeIndex_t m_nPrevPntSource; // 0x1364        
        // metadata: MPropertyFriendlyName "max length"
        // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
        float m_flMaxLength; // 0x1368        
        // metadata: MPropertyFriendlyName "min length"
        // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
        float m_flMinLength; // 0x136c        
        // metadata: MPropertyFriendlyName "ignore delta time"
        // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
        bool m_bIgnoreDT; // 0x1370        
        [[maybe_unused]] std::uint8_t pad_0x1371[0x3]; // 0x1371
        // metadata: MPropertyFriendlyName "constrain radius to no more than this times the length"
        // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
        float m_flConstrainRadiusToLengthRatio; // 0x1374        
        // metadata: MPropertyFriendlyName "amount to scale trail length by"
        // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
        float m_flLengthScale; // 0x1378        
        // metadata: MPropertyFriendlyName "how long before a trail grows to its full length"
        // metadata: MPropertySuppressExpr "m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_FOLLOW_DIRECTION || m_nCapsuleLightBehavior == PARTICLE_LIGHT_BEHAVIOR_ROPE"
        float m_flLengthFadeInTime; // 0x137c        
        [[maybe_unused]] std::uint8_t pad_0x1380[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderStandardLight because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderStandardLight) == 0x1388);
};
