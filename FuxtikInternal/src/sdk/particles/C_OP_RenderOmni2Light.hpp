#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particles/ParticleLightUnitChoiceList_t.hpp"
#include "source2sdk/particles/ParticleOmni2LightTypeChoiceList_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x11f8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderOmni2Light : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "Type"
        particles::ParticleOmni2LightTypeChoiceList_t m_nLightType; // 0x208        
        [[maybe_unused]] std::uint8_t pad_0x20c[0x4]; // 0x20c
        // metadata: MPropertyFriendlyName "Color Blend"
        particleslib::CParticleCollectionVecInput m_vColorBlend; // 0x210        
        // metadata: MPropertyFriendlyName "Color Blend Type"
        // metadata: MPropertySortPriority "700"
        particles::ParticleColorBlendType_t m_nColorBlendType; // 0x868        
        particles::ParticleLightUnitChoiceList_t m_nBrightnessUnit; // 0x86c        
        // metadata: MPropertyFriendlyName "Lumens"
        // metadata: MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_LUMENS"
        particleslib::CPerParticleFloatInput m_flBrightnessLumens; // 0x870        
        // metadata: MPropertyFriendlyName "Candelas"
        // metadata: MPropertySuppressExpr "m_nBrightnessUnit != PARTICLE_LIGHT_UNIT_CANDELAS"
        particleslib::CPerParticleFloatInput m_flBrightnessCandelas; // 0x9c8        
        // metadata: MPropertyFriendlyName "Shadows"
        // metadata: MPropertySuppressExpr "mod == csgo"
        bool m_bCastShadows; // 0xb20        
        [[maybe_unused]] std::uint8_t pad_0xb21[0x7]; // 0xb21
        // metadata: MPropertyFriendlyName "Light Radius"
        particleslib::CPerParticleFloatInput m_flLuminaireRadius; // 0xb28        
        // metadata: MPropertyFriendlyName "Skirt"
        particleslib::CPerParticleFloatInput m_flSkirt; // 0xc80        
        // metadata: MPropertyFriendlyName "Range"
        particleslib::CPerParticleFloatInput m_flRange; // 0xdd8        
        // metadata: MPropertyFriendlyName "Inner Cone Angle"
        particleslib::CPerParticleFloatInput m_flInnerConeAngle; // 0xf30        
        // metadata: MPropertyFriendlyName "Outer Cone Angle"
        particleslib::CPerParticleFloatInput m_flOuterConeAngle; // 0x1088        
        // metadata: MPropertyFriendlyName "Cookie"
        // m_hLightCookie has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCTextureBase> m_hLightCookie;
        char m_hLightCookie[0x8]; // 0x11e0        
        // metadata: MPropertyFriendlyName "Cookie is Spherically Mapped"
        bool m_bSphericalCookie; // 0x11e8        
        [[maybe_unused]] std::uint8_t pad_0x11e9[0xf];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderOmni2Light because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderOmni2Light) == 0x11f8);
};
