#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCTextureBase.hpp"
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
    // Size: 0x8a0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderDeferredLight : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "projected texture use alpha test window"
        // metadata: MPropertySuppressExpr "!m_bUseTexture"
        bool m_bUseAlphaTestWindow; // 0x208        
        // metadata: MPropertyFriendlyName "projected texture light"
        bool m_bUseTexture; // 0x209        
        [[maybe_unused]] std::uint8_t pad_0x20a[0x2]; // 0x20a
        // metadata: MPropertyStartGroup "+Renderer Modifiers"
        // metadata: MPropertyFriendlyName "radius scale"
        // metadata: MPropertySortPriority "700"
        float m_flRadiusScale; // 0x20c        
        // metadata: MPropertyFriendlyName "alpha scale"
        // metadata: MPropertySortPriority "700"
        float m_flAlphaScale; // 0x210        
        // metadata: MPropertyFriendlyName "per-particle alpha scale attribute"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySortPriority "700"
        particles::ParticleAttributeIndex_t m_nAlpha2Field; // 0x214        
        // metadata: MPropertyFriendlyName "color blend"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x218        
        // metadata: MPropertyFriendlyName "color blend type"
        // metadata: MPropertySortPriority "700"
        particles::ParticleColorBlendType_t m_nColorBlendType; // 0x870        
        // metadata: MPropertyStartGroup
        // metadata: MPropertyFriendlyName "spotlight distance"
        float m_flLightDistance; // 0x874        
        // metadata: MPropertyFriendlyName "light start falloff"
        float m_flStartFalloff; // 0x878        
        // metadata: MPropertyFriendlyName "spotlight distance falloff"
        float m_flDistanceFalloff; // 0x87c        
        // metadata: MPropertyFriendlyName "spotlight FoV"
        float m_flSpotFoV; // 0x880        
        // metadata: MPropertyFriendlyName "projected texture alpha test point scale field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySuppressExpr "!m_bUseTexture"
        particles::ParticleAttributeIndex_t m_nAlphaTestPointField; // 0x884        
        // metadata: MPropertyFriendlyName "projected texture alpha test range scale field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySuppressExpr "!m_bUseTexture"
        particles::ParticleAttributeIndex_t m_nAlphaTestRangeField; // 0x888        
        // metadata: MPropertyFriendlyName "projected texture alpha test sharpness scale field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySuppressExpr "!m_bUseTexture"
        particles::ParticleAttributeIndex_t m_nAlphaTestSharpnessField; // 0x88c        
        // metadata: MPropertyFriendlyName "texture"
        // metadata: MPropertySuppressExpr "!m_bUseTexture"
        // m_hTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hTexture;
        char m_hTexture[0x8]; // 0x890        
        // metadata: MPropertyFriendlyName "HSV Shift Control Point"
        int32_t m_nHSVShiftControlPoint; // 0x898        
        [[maybe_unused]] std::uint8_t pad_0x89c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderDeferredLight because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderDeferredLight) == 0x8a0);
};
