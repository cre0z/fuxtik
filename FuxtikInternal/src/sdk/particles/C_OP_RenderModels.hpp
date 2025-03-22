#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/MaterialVariable_t.hpp"
#include "source2sdk/particles/ModelReference_t.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
#include "source2sdk/particles/RenderModelSubModelFieldType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleModelInput.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
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
    // Size: 0x2900
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderModels : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "Only Render in effects bloom pass"
        // metadata: MPropertySortPriority "1100"
        bool m_bOnlyRenderInEffectsBloomPass; // 0x208        
        // metadata: MPropertyFriendlyName "Only Render in effects water pass"
        // metadata: MPropertySortPriority "1050"
        // metadata: MPropertySuppressExpr "mod != csgo"
        bool m_bOnlyRenderInEffectsWaterPass; // 0x209        
        // metadata: MPropertyFriendlyName "Use Mixed Resolution Rendering"
        // metadata: MPropertySortPriority "1200"
        bool m_bUseMixedResolutionRendering; // 0x20a        
        // metadata: MPropertyFriendlyName "Only Render in effects game overlay pass"
        // metadata: MPropertySortPriority "1210"
        // metadata: MPropertySuppressExpr "mod != csgo"
        bool m_bOnlyRenderInEffecsGameOverlay; // 0x20b        
        [[maybe_unused]] std::uint8_t pad_0x20c[0x4]; // 0x20c
        // metadata: MPropertyFriendlyName "models"
        // metadata: MParticleRequireDefaultArrayEntry
        // metadata: MPropertyAutoExpandSelf
        // metadata: MPropertySortPriority "775"
        // m_ModelList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::ModelReference_t> m_ModelList;
        char m_ModelList[0x18]; // 0x210        
        // metadata: MPropertyFriendlyName "bodygroup field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nBodyGroupField; // 0x228        
        // metadata: MPropertyFriendlyName "submodel field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nSubModelField; // 0x22c        
        // metadata: MPropertyStartGroup "Orientation"
        // metadata: MPropertyFriendlyName "ignore normal"
        // metadata: MPropertySortPriority "750"
        bool m_bIgnoreNormal; // 0x230        
        // metadata: MPropertyFriendlyName "orient model z to normal"
        // metadata: MPropertySortPriority "750"
        // metadata: MPropertySuppressExpr "m_bIgnoreNormal"
        bool m_bOrientZ; // 0x231        
        // metadata: MPropertyFriendlyName "center mesh"
        // metadata: MPropertySortPriority "750"
        bool m_bCenterOffset; // 0x232        
        [[maybe_unused]] std::uint8_t pad_0x233[0x5]; // 0x233
        // metadata: MPropertyFriendlyName "model local offset"
        // metadata: MPropertySortPriority "750"
        particleslib::CPerParticleVecInput m_vecLocalOffset; // 0x238        
        // metadata: MPropertyFriendlyName "model local rotation (pitch/yaw/roll)"
        // metadata: MPropertySortPriority "750"
        particleslib::CPerParticleVecInput m_vecLocalRotation; // 0x890        
        // metadata: MPropertyStartGroup "Model Scale"
        // metadata: MPropertyFriendlyName "ignore radius"
        // metadata: MPropertySortPriority "700"
        bool m_bIgnoreRadius; // 0xee8        
        [[maybe_unused]] std::uint8_t pad_0xee9[0x3]; // 0xee9
        // metadata: MPropertyFriendlyName "model scale CP"
        // metadata: MPropertySortPriority "700"
        int32_t m_nModelScaleCP; // 0xeec        
        // metadata: MPropertyFriendlyName "model component scale"
        // metadata: MPropertySortPriority "700"
        particleslib::CPerParticleVecInput m_vecComponentScale; // 0xef0        
        // metadata: MPropertyFriendlyName "apply scales in local model space"
        // metadata: MPropertySortPriority "700"
        bool m_bLocalScale; // 0x1548        
        [[maybe_unused]] std::uint8_t pad_0x1549[0x3]; // 0x1549
        // metadata: MPropertyFriendlyName "model size cull bloat"
        // metadata: MPropertyAttributeChoiceName "particlefield_size_cull_bloat"
        int32_t m_nSizeCullBloat; // 0x154c        
        // metadata: MPropertyStartGroup "Animation"
        // metadata: MPropertyFriendlyName "animated"
        // metadata: MPropertySortPriority "500"
        bool m_bAnimated; // 0x1550        
        [[maybe_unused]] std::uint8_t pad_0x1551[0x7]; // 0x1551
        // metadata: MPropertyFriendlyName "animation rate"
        // metadata: MPropertySortPriority "500"
        // metadata: MPropertySuppressExpr "!m_bAnimated"
        particleslib::CPerParticleFloatInput m_flAnimationRate; // 0x1558        
        // metadata: MPropertyFriendlyName "scale animation rate"
        // metadata: MPropertySortPriority "500"
        // metadata: MPropertySuppressExpr "!m_bAnimated"
        bool m_bScaleAnimationRate; // 0x16b0        
        // metadata: MPropertyFriendlyName "force looping animations"
        // metadata: MPropertySortPriority "500"
        // metadata: MPropertySuppressExpr "!m_bAnimated"
        bool m_bForceLoopingAnimation; // 0x16b1        
        // metadata: MPropertyFriendlyName "reset animation frame on stop"
        // metadata: MPropertySortPriority "500"
        // metadata: MPropertySuppressExpr "!m_bAnimated"
        bool m_bResetAnimOnStop; // 0x16b2        
        // metadata: MPropertyFriendlyName "set animation frame manually"
        // metadata: MPropertySortPriority "500"
        // metadata: MPropertySuppressExpr "!m_bAnimated"
        bool m_bManualAnimFrame; // 0x16b3        
        // metadata: MPropertyFriendlyName "animation rate scale field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySortPriority "500"
        // metadata: MPropertySuppressExpr "!m_bAnimated"
        particles::ParticleAttributeIndex_t m_nAnimationScaleField; // 0x16b4        
        // metadata: MPropertyStartGroup "Animation"
        // metadata: MPropertyFriendlyName "animation sequence field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySortPriority "500"
        particles::ParticleAttributeIndex_t m_nAnimationField; // 0x16b8        
        // metadata: MPropertyFriendlyName "manual animation frame field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySortPriority "500"
        // metadata: MPropertySuppressExpr "!(m_bAnimated && m_bManualAnimFrame)"
        particles::ParticleAttributeIndex_t m_nManualFrameField; // 0x16bc        
        // metadata: MPropertyFriendlyName "activity override"
        // metadata: MPropertySuppressExpr "mod != dota"
        // metadata: MPropertySortPriority "500"
        char m_ActivityName[256]; // 0x16c0        
        // metadata: MPropertyFriendlyName "sequence override"
        // metadata: MPropertySuppressExpr "mod == dota"
        // metadata: MPropertySortPriority "500"
        char m_SequenceName[256]; // 0x17c0        
        // metadata: MPropertyFriendlyName "Enable Cloth Simulation"
        bool m_bEnableClothSimulation; // 0x18c0        
        // metadata: MPropertyFriendlyName "With Cloth Effect"
        // metadata: MPropertySortPriority "500"
        char m_ClothEffectName[64]; // 0x18c1        
        [[maybe_unused]] std::uint8_t pad_0x1901[0x7]; // 0x1901
        // metadata: MPropertyStartGroup "Material"
        // metadata: MPropertyFriendlyName "material override"
        // metadata: MPropertySortPriority "600"
        // m_hOverrideMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hOverrideMaterial;
        char m_hOverrideMaterial[0x8]; // 0x1908        
        // metadata: MPropertyFriendlyName "override translucent materials"
        // metadata: MPropertySortPriority "600"
        bool m_bOverrideTranslucentMaterials; // 0x1910        
        [[maybe_unused]] std::uint8_t pad_0x1911[0x7]; // 0x1911
        // metadata: MPropertyFriendlyName "skin number"
        // metadata: MPropertySortPriority "600"
        particleslib::CPerParticleFloatInput m_nSkin; // 0x1918        
        // metadata: MPropertyFriendlyName "material variables"
        // metadata: MPropertyAutoExpandSelf
        // metadata: MPropertySortPriority "600"
        // m_MaterialVars has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<particles::MaterialVariable_t> m_MaterialVars;
        char m_MaterialVars[0x18]; // 0x1a70        
        // metadata: MPropertyStartGroup "Model Overrides"
        // metadata: MPropertyFriendlyName "model list selection override"
        particleslib::CPerParticleFloatInput m_flManualModelSelection; // 0x1a88        
        // metadata: MPropertyFriendlyName "input model"
        // metadata: MParticleInputOptional
        particleslib::CParticleModelInput m_modelInput; // 0x1be0        
        // metadata: MPropertyFriendlyName "model LOD"
        int32_t m_nLOD; // 0x1c40        
        // metadata: MPropertyFriendlyName "model override economy loadout slot type"
        char m_EconSlotName[256]; // 0x1c44        
        // metadata: MPropertyFriendlyName "model override original model only (ignore shapeshift/hex/etc)"
        bool m_bOriginalModel; // 0x1d44        
        // metadata: MPropertyFriendlyName "suppress tinting of the model"
        bool m_bSuppressTint; // 0x1d45        
        [[maybe_unused]] std::uint8_t pad_0x1d46[0x2]; // 0x1d46
        // metadata: MPropertyFriendlyName "SubModel Field Type"
        particles::RenderModelSubModelFieldType_t m_nSubModelFieldType; // 0x1d48        
        // metadata: MPropertyFriendlyName "disable shadows"
        bool m_bDisableShadows; // 0x1d4c        
        // metadata: MPropertyFriendlyName "disable depth prepass"
        bool m_bDisableDepthPrepass; // 0x1d4d        
        // metadata: MPropertyFriendlyName "accept decals"
        bool m_bAcceptsDecals; // 0x1d4e        
        // metadata: MPropertyFriendlyName "forcedrawinterlevedwithsiblings"
        bool m_bForceDrawInterlevedWithSiblings; // 0x1d4f        
        // metadata: MPropertyFriendlyName "do not draw in particle pass"
        bool m_bDoNotDrawInParticlePass; // 0x1d50        
        // metadata: MPropertyFriendlyName "allow approximate transforms (cpu optimizaiton)"
        bool m_bAllowApproximateTransforms; // 0x1d51        
        // metadata: MPropertyFriendlyName "render attribute"
        char m_szRenderAttribute[260]; // 0x1d52        
        [[maybe_unused]] std::uint8_t pad_0x1e56[0x2]; // 0x1e56
        // metadata: MPropertyStartGroup "+Renderer Modifiers"
        // metadata: MPropertyFriendlyName "Radius Scale"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionFloatInput m_flRadiusScale; // 0x1e58        
        // metadata: MPropertyFriendlyName "alpha scale"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionFloatInput m_flAlphaScale; // 0x1fb0        
        // metadata: MPropertyFriendlyName "rotation roll scale"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionFloatInput m_flRollScale; // 0x2108        
        // metadata: MPropertyFriendlyName "per-particle alpha scale attribute"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySortPriority "700"
        particles::ParticleAttributeIndex_t m_nAlpha2Field; // 0x2260        
        [[maybe_unused]] std::uint8_t pad_0x2264[0x4]; // 0x2264
        // metadata: MPropertyFriendlyName "color blend"
        // metadata: MPropertySortPriority "700"
        particleslib::CParticleCollectionVecInput m_vecColorScale; // 0x2268        
        // metadata: MPropertyFriendlyName "color blend type"
        // metadata: MPropertySortPriority "700"
        particles::ParticleColorBlendType_t m_nColorBlendType; // 0x28c0        
        [[maybe_unused]] std::uint8_t pad_0x28c4[0x3c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderModels because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderModels) == 0x2900);
};
