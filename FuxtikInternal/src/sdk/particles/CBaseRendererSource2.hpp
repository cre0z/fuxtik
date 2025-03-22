#pragma once
#include "source2sdk/particles/AnimationType_t.hpp"
#include "source2sdk/particles/BlurFilterType_t.hpp"
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleAlphaReferenceType_t.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particles/ParticleDepthFeatheringMode_t.hpp"
#include "source2sdk/particles/ParticleFogType_t.hpp"
#include "source2sdk/particles/ParticleOutputBlendMode_t.hpp"
#include "source2sdk/particles/ParticleSequenceCropOverride_t.hpp"
#include "source2sdk/particles/ParticleSortingChoiceList_t.hpp"
#include "source2sdk/particles/SpriteCardPerParticleScale_t.hpp"
#include "source2sdk/particles/SpriteCardShaderType_t.hpp"
#include "source2sdk/particles/TextureGroup_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererVecInput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x2718
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBaseRendererSource2 : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyStartGroup "+Renderer Modifiers"
        // metadata: MPropertyFriendlyName "radius scale"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionRendererFloatInput m_flRadiusScale; // 0x208        
        // metadata: MPropertyFriendlyName "alpha scale"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionRendererFloatInput m_flAlphaScale; // 0x360        
        // metadata: MPropertyFriendlyName "rotation roll scale"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionRendererFloatInput m_flRollScale; // 0x4b8        
        // metadata: MPropertyFriendlyName "per-particle alpha scale attribute"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySortPriority "700"
        particles::ParticleAttributeIndex_t m_nAlpha2Field; // 0x610        
        [[maybe_unused]] std::uint8_t pad_0x614[0x4]; // 0x614
        // metadata: MPropertyFriendlyName "color blend"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionRendererVecInput m_vecColorScale; // 0x618        
        // metadata: MPropertyFriendlyName "color blend type"
        // metadata: MPropertySortPriority "700"
        particles::ParticleColorBlendType_t m_nColorBlendType; // 0xc70        
        // metadata: MPropertyStartGroup "+Material"
        // metadata: MPropertyFriendlyName "Shader"
        // metadata: MPropertySortPriority "600"
        particles::SpriteCardShaderType_t m_nShaderType; // 0xc74        
        // metadata: MPropertyFriendlyName "Custom Shader"
        // metadata: MPropertySuppressExpr "m_nShaderType != SPRITECARD_SHADER_CUSTOM"
        // metadata: MPropertySortPriority "600"
        CUtlString m_strShaderOverride; // 0xc78        
        // metadata: MPropertyFriendlyName "X offset of center point"
        // metadata: MPropertySortPriority "600"
        particleslib::CParticleCollectionRendererFloatInput m_flCenterXOffset; // 0xc80        
        // metadata: MPropertyFriendlyName "Y offset of center point"
        // metadata: MPropertySortPriority "600"
        particleslib::CParticleCollectionRendererFloatInput m_flCenterYOffset; // 0xdd8        
        // metadata: MPropertyFriendlyName "Bump Strength"
        // metadata: MPropertySortPriority "600"
        float m_flBumpStrength; // 0xf30        
        // metadata: MPropertyFriendlyName "Sheet Crop Behavior"
        // metadata: MPropertySortPriority "600"
        particles::ParticleSequenceCropOverride_t m_nCropTextureOverride; // 0xf34        
        // metadata: MPropertyFriendlyName "Textures"
        // metadata: MParticleRequireDefaultArrayEntry
        // metadata: MPropertyAutoExpandSelf
        // metadata: MPropertySortPriority "600"
        // m_vecTexturesInput has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::TextureGroup_t> m_vecTexturesInput;
        char m_vecTexturesInput[0x18]; // 0xf38        
        // metadata: MPropertyStartGroup "Animation"
        // metadata: MPropertyFriendlyName "animation rate"
        // metadata: MPropertyAttributeRange "0 5"
        // metadata: MPropertySortPriority "500"
        float m_flAnimationRate; // 0xf50        
        // metadata: MPropertyFriendlyName "animation type"
        // metadata: MPropertySortPriority "500"
        particles::AnimationType_t m_nAnimationType; // 0xf54        
        // metadata: MPropertyFriendlyName "set animation value in FPS"
        // metadata: MPropertySortPriority "500"
        bool m_bAnimateInFPS; // 0xf58        
        [[maybe_unused]] std::uint8_t pad_0xf59[0x7]; // 0xf59
        // metadata: MPropertyStartGroup "Lighting and Shadows"
        // metadata: MPropertyFriendlyName "self illum amount"
        // metadata: MPropertyAttributeRange "0 2"
        // metadata: MPropertySortPriority "400"
        particleslib::CParticleCollectionRendererFloatInput m_flSelfIllumAmount; // 0xf60        
        // metadata: MPropertyFriendlyName "diffuse lighting amount"
        // metadata: MPropertyAttributeRange "0 1"
        // metadata: MPropertySortPriority "400"
        particleslib::CParticleCollectionRendererFloatInput m_flDiffuseAmount; // 0x10b8        
        // metadata: MPropertyFriendlyName "diffuse max contribution clamp"
        // metadata: MPropertyAttributeRange "0 1"
        // metadata: MPropertySortPriority "400"
        // metadata: MPropertySuppressExpr "mod != hlx"
        particleslib::CParticleCollectionRendererFloatInput m_flDiffuseClamp; // 0x1210        
        // metadata: MPropertyFriendlyName "diffuse lighting origin Control Point"
        // metadata: MPropertySortPriority "400"
        int32_t m_nLightingControlPoint; // 0x1368        
        // metadata: MPropertyFriendlyName "self illum per-particle"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySortPriority "400"
        // metadata: MPropertySuppressExpr "m_nOrientationType == PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL || m_nOrientationType == PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
        particles::ParticleAttributeIndex_t m_nSelfIllumPerParticle; // 0x136c        
        // metadata: MPropertyStartGroup "+Color and alpha adjustments"
        // metadata: MPropertyFriendlyName "output blend mode"
        // metadata: MPropertySortPriority "300"
        particles::ParticleOutputBlendMode_t m_nOutputBlendMode; // 0x1370        
        // metadata: MPropertyFriendlyName "Gamma-correct vertex colors"
        // metadata: MPropertySortPriority "300"
        bool m_bGammaCorrectVertexColors; // 0x1374        
        // metadata: MPropertyFriendlyName "Saturate color pre alphablend"
        // metadata: MPropertySortPriority "300"
        // metadata: MPropertySuppressExpr "mod!=dota"
        bool m_bSaturateColorPreAlphaBlend; // 0x1375        
        [[maybe_unused]] std::uint8_t pad_0x1376[0x2]; // 0x1376
        // metadata: MPropertyFriendlyName "add self amount over alphablend"
        // metadata: MPropertySortPriority "300"
        particleslib::CParticleCollectionRendererFloatInput m_flAddSelfAmount; // 0x1378        
        // metadata: MPropertyFriendlyName "desaturation amount"
        // metadata: MPropertyAttributeRange "0 1"
        // metadata: MPropertySortPriority "300"
        particleslib::CParticleCollectionRendererFloatInput m_flDesaturation; // 0x14d0        
        // metadata: MPropertyFriendlyName "overbright factor"
        // metadata: MPropertySortPriority "300"
        particleslib::CParticleCollectionRendererFloatInput m_flOverbrightFactor; // 0x1628        
        // metadata: MPropertyFriendlyName "HSV Shift Control Point"
        // metadata: MPropertySortPriority "300"
        int32_t m_nHSVShiftControlPoint; // 0x1780        
        // metadata: MPropertyFriendlyName "Apply fog to particle"
        // metadata: MPropertySortPriority "300"
        particles::ParticleFogType_t m_nFogType; // 0x1784        
        // metadata: MPropertyFriendlyName "Fog Scale"
        // metadata: MPropertySortPriority "300"
        // metadata: MPropertySuppressExpr "mod != hlx"
        particleslib::CParticleCollectionRendererFloatInput m_flFogAmount; // 0x1788        
        // metadata: MPropertyFriendlyName "Apply fog of war to color"
        // metadata: MPropertySortPriority "300"
        // metadata: MPropertySuppressExpr "mod != dota"
        bool m_bTintByFOW; // 0x18e0        
        // metadata: MPropertyFriendlyName "Apply global light to color"
        // metadata: MPropertySortPriority "300"
        // metadata: MPropertySuppressExpr "mod != dota"
        bool m_bTintByGlobalLight; // 0x18e1        
        [[maybe_unused]] std::uint8_t pad_0x18e2[0x2]; // 0x18e2
        // metadata: MPropertyStartGroup "Color and alpha adjustments/Alpha Reference"
        // metadata: MPropertyFriendlyName "alpha reference"
        // metadata: MPropertySortPriority "300"
        particles::SpriteCardPerParticleScale_t m_nPerParticleAlphaReference; // 0x18e4        
        // metadata: MPropertyFriendlyName "alpha reference window size"
        // metadata: MPropertySortPriority "300"
        particles::SpriteCardPerParticleScale_t m_nPerParticleAlphaRefWindow; // 0x18e8        
        // metadata: MPropertyFriendlyName "alpha reference type"
        // metadata: MPropertySortPriority "300"
        particles::ParticleAlphaReferenceType_t m_nAlphaReferenceType; // 0x18ec        
        // metadata: MPropertyFriendlyName "alpha reference softness"
        // metadata: MPropertyAttributeRange "0 1"
        // metadata: MPropertySortPriority "300"
        particleslib::CParticleCollectionRendererFloatInput m_flAlphaReferenceSoftness; // 0x18f0        
        // metadata: MPropertyFriendlyName "source alpha value to map to alpha of zero"
        // metadata: MPropertyAttributeRange "0 1"
        // metadata: MPropertySortPriority "300"
        particleslib::CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToZero; // 0x1a48        
        // metadata: MPropertyFriendlyName "source alpha value to map to alpha of 1"
        // metadata: MPropertyAttributeRange "0 1"
        // metadata: MPropertySortPriority "300"
        particleslib::CParticleCollectionRendererFloatInput m_flSourceAlphaValueToMapToOne; // 0x1ba0        
        // metadata: MPropertyStartGroup "Refraction"
        // metadata: MPropertyFriendlyName "refract background"
        // metadata: MPropertySortPriority "200"
        bool m_bRefract; // 0x1cf8        
        // metadata: MPropertyFriendlyName "refract draws opaque - alpha scales refraction"
        // metadata: MPropertySortPriority "200"
        // metadata: MPropertySuppressExpr "!m_bRefract"
        bool m_bRefractSolid; // 0x1cf9        
        [[maybe_unused]] std::uint8_t pad_0x1cfa[0x6]; // 0x1cfa
        // metadata: MPropertyFriendlyName "refract amount"
        // metadata: MPropertyAttributeRange "-2 2"
        // metadata: MPropertySortPriority "200"
        // metadata: MPropertySuppressExpr "!m_bRefract"
        particleslib::CParticleCollectionRendererFloatInput m_flRefractAmount; // 0x1d00        
        // metadata: MPropertyFriendlyName "refract blur radius"
        // metadata: MPropertySortPriority "200"
        // metadata: MPropertySuppressExpr "!m_bRefract"
        int32_t m_nRefractBlurRadius; // 0x1e58        
        // metadata: MPropertyFriendlyName "refract blur type"
        // metadata: MPropertySortPriority "200"
        // metadata: MPropertySuppressExpr "!m_bRefract"
        particles::BlurFilterType_t m_nRefractBlurType; // 0x1e5c        
        // metadata: MPropertyStartGroup
        // metadata: MPropertyFriendlyName "Only Render in effects bloom pass"
        // metadata: MPropertySortPriority "1100"
        bool m_bOnlyRenderInEffectsBloomPass; // 0x1e60        
        // metadata: MPropertyFriendlyName "Only Render in effects water pass"
        // metadata: MPropertySortPriority "1050"
        // metadata: MPropertySuppressExpr "mod != csgo"
        bool m_bOnlyRenderInEffectsWaterPass; // 0x1e61        
        // metadata: MPropertyFriendlyName "Use Mixed Resolution Rendering"
        // metadata: MPropertySortPriority "1200"
        bool m_bUseMixedResolutionRendering; // 0x1e62        
        // metadata: MPropertyFriendlyName "Only Render in effects game overlay pass"
        // metadata: MPropertySortPriority "1210"
        // metadata: MPropertySuppressExpr "mod != csgo"
        bool m_bOnlyRenderInEffecsGameOverlay; // 0x1e63        
        // metadata: MPropertyStartGroup "Stencil"
        // metadata: MPropertyFriendlyName "stencil test ID"
        // metadata: MPropertySortPriority "0"
        char m_stencilTestID[128]; // 0x1e64        
        // metadata: MPropertyFriendlyName "only write where stencil is NOT stencil test ID"
        // metadata: MPropertySortPriority "0"
        bool m_bStencilTestExclude; // 0x1ee4        
        // metadata: MPropertyFriendlyName "stencil write ID"
        // metadata: MPropertySortPriority "0"
        char m_stencilWriteID[128]; // 0x1ee5        
        // metadata: MPropertyFriendlyName "write stencil on z-buffer test success"
        // metadata: MPropertySortPriority "0"
        bool m_bWriteStencilOnDepthPass; // 0x1f65        
        // metadata: MPropertyFriendlyName "write stencil on z-buffer test failure"
        // metadata: MPropertySortPriority "0"
        bool m_bWriteStencilOnDepthFail; // 0x1f66        
        // metadata: MPropertyStartGroup "Depth buffer control and effects"
        // metadata: MPropertyFriendlyName "reverse z-buffer test"
        // metadata: MPropertySortPriority "900"
        bool m_bReverseZBuffering; // 0x1f67        
        // metadata: MPropertyFriendlyName "disable z-buffer test"
        // metadata: MPropertySortPriority "900"
        bool m_bDisableZBuffering; // 0x1f68        
        [[maybe_unused]] std::uint8_t pad_0x1f69[0x3]; // 0x1f69
        // metadata: MPropertyFriendlyName "Depth feathering mode"
        // metadata: MPropertySortPriority "900"
        particles::ParticleDepthFeatheringMode_t m_nFeatheringMode; // 0x1f6c        
        // metadata: MPropertyFriendlyName "particle feathering closest distance to surface"
        // metadata: MPropertySortPriority "900"
        particleslib::CParticleCollectionRendererFloatInput m_flFeatheringMinDist; // 0x1f70        
        // metadata: MPropertyFriendlyName "particle feathering farthest distance to surface"
        // metadata: MPropertySortPriority "900"
        particleslib::CParticleCollectionRendererFloatInput m_flFeatheringMaxDist; // 0x20c8        
        // metadata: MPropertyFriendlyName "particle feathering filter"
        // metadata: MPropertySortPriority "900"
        particleslib::CParticleCollectionRendererFloatInput m_flFeatheringFilter; // 0x2220        
        // metadata: MPropertyFriendlyName "depth comparison bias"
        // metadata: MPropertySortPriority "900"
        particleslib::CParticleCollectionRendererFloatInput m_flDepthBias; // 0x2378        
        // metadata: MPropertyFriendlyName "Sort Method"
        // metadata: MPropertySortPriority "900"
        particles::ParticleSortingChoiceList_t m_nSortMethod; // 0x24d0        
        // metadata: MPropertyStartGroup "Animation"
        // metadata: MPropertyFriendlyName "blend sequence animation frames"
        // metadata: MPropertySortPriority "500"
        bool m_bBlendFramesSeq0; // 0x24d4        
        // metadata: MPropertyFriendlyName "use max-luminance blending for sequence"
        // metadata: MPropertySortPriority "500"
        // metadata: MPropertySuppressExpr "!m_bBlendFramesSeq0"
        bool m_bMaxLuminanceBlendingSequence0; // 0x24d5        
        [[maybe_unused]] std::uint8_t pad_0x24d6[0x242];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseRendererSource2 because it is not a standard-layout class
    static_assert(sizeof(CBaseRendererSource2) == 0x2718);
};
