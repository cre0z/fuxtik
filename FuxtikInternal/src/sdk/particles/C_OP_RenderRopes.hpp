#pragma once
#include "source2sdk/particles/CBaseRendererSource2.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleOrientationChoiceList_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
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
    // Size: 0x2b88
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderRopes : public particles::CBaseRendererSource2
    {
    public:
        // metadata: MPropertyStartGroup "Screenspace Fading and culling"
        // metadata: MPropertyFriendlyName "enable fading and clamping"
        // metadata: MPropertySortPriority "1000"
        bool m_bEnableFadingAndClamping; // 0x2718        
        [[maybe_unused]] std::uint8_t pad_0x2719[0x3]; // 0x2719
        // metadata: MPropertyFriendlyName "minimum visual screen-size"
        // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
        float m_flMinSize; // 0x271c        
        // metadata: MPropertyFriendlyName "maximum visual screen-size"
        // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
        float m_flMaxSize; // 0x2720        
        // metadata: MPropertyFriendlyName "start fade screen-size"
        // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
        float m_flStartFadeSize; // 0x2724        
        // metadata: MPropertyFriendlyName "end fade and cull screen-size"
        // metadata: MPropertySuppressExpr "!m_bEnableFadingAndClamping"
        float m_flEndFadeSize; // 0x2728        
        // metadata: MPropertyFriendlyName "start fade dot product of normal vs view"
        // metadata: MPropertySortPriority "1000"
        float m_flStartFadeDot; // 0x272c        
        // metadata: MPropertyFriendlyName "end fade dot product of normal vs view"
        // metadata: MPropertySortPriority "1000"
        float m_flEndFadeDot; // 0x2730        
        // metadata: MPropertyStartGroup "Rope Tesselation"
        // metadata: MPropertyFriendlyName "amount to taper the width of the trail end by"
        float m_flRadiusTaper; // 0x2734        
        // metadata: MPropertyFriendlyName "minium number of quads per render segment"
        // metadata: MPropertySortPriority "850"
        int32_t m_nMinTesselation; // 0x2738        
        // metadata: MPropertyFriendlyName "maximum number of quads per render segment"
        int32_t m_nMaxTesselation; // 0x273c        
        // metadata: MPropertyFriendlyName "tesselation resolution scale factor"
        float m_flTessScale; // 0x2740        
        [[maybe_unused]] std::uint8_t pad_0x2744[0x4]; // 0x2744
        // metadata: MPropertyStartGroup "+Rope Global UV Controls"
        // metadata: MPropertyFriendlyName "global texture V World Size"
        // metadata: MPropertySortPriority "800"
        particleslib::CParticleCollectionRendererFloatInput m_flTextureVWorldSize; // 0x2748        
        // metadata: MPropertyFriendlyName "global texture V Scroll Rate"
        particleslib::CParticleCollectionRendererFloatInput m_flTextureVScrollRate; // 0x28a0        
        // metadata: MPropertyFriendlyName "global texture V Offset"
        particleslib::CParticleCollectionRendererFloatInput m_flTextureVOffset; // 0x29f8        
        // metadata: MPropertyFriendlyName "global texture V Params CP"
        int32_t m_nTextureVParamsCP; // 0x2b50        
        // metadata: MPropertyFriendlyName "Clamp Non-Sheet texture V coords"
        bool m_bClampV; // 0x2b54        
        [[maybe_unused]] std::uint8_t pad_0x2b55[0x3]; // 0x2b55
        // metadata: MPropertyStartGroup "Rope Global UV Controls/CP Scaling"
        // metadata: MPropertyFriendlyName "scale CP start"
        int32_t m_nScaleCP1; // 0x2b58        
        // metadata: MPropertyFriendlyName "scale CP end"
        int32_t m_nScaleCP2; // 0x2b5c        
        // metadata: MPropertyFriendlyName "scale V world size by CP distance"
        float m_flScaleVSizeByControlPointDistance; // 0x2b60        
        // metadata: MPropertyFriendlyName "scale V scroll rate by CP distance"
        float m_flScaleVScrollByControlPointDistance; // 0x2b64        
        // metadata: MPropertyFriendlyName "scale V offset by CP distance"
        float m_flScaleVOffsetByControlPointDistance; // 0x2b68        
        [[maybe_unused]] std::uint8_t pad_0x2b6c[0x1]; // 0x2b6c
        // metadata: MPropertyStartGroup "Rope Global UV Controls"
        // metadata: MPropertyFriendlyName "Use scalar attribute for texture coordinate"
        bool m_bUseScalarForTextureCoordinate; // 0x2b6d        
        [[maybe_unused]] std::uint8_t pad_0x2b6e[0x2]; // 0x2b6e
        // metadata: MPropertyFriendlyName "scalar to use for texture coordinate"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        // metadata: MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
        particles::ParticleAttributeIndex_t m_nScalarFieldForTextureCoordinate; // 0x2b70        
        // metadata: MPropertyFriendlyName "scale value to map attribute to texture coordinate"
        // metadata: MPropertySuppressExpr "!m_bUseScalarForTextureCoordinate"
        float m_flScalarAttributeTextureCoordScale; // 0x2b74        
        // metadata: MPropertyStartGroup "Rope Order Controls"
        // metadata: MPropertyFriendlyName "reverse point order"
        // metadata: MPropertySortPriority "800"
        bool m_bReverseOrder; // 0x2b78        
        // metadata: MPropertyFriendlyName "Closed loop"
        bool m_bClosedLoop; // 0x2b79        
        [[maybe_unused]] std::uint8_t pad_0x2b7a[0x2]; // 0x2b7a
        // metadata: MPropertyStartGroup "Orientation"
        // metadata: MPropertyFriendlyName "orientation_type"
        // metadata: MPropertySortPriority "750"
        particles::ParticleOrientationChoiceList_t m_nOrientationType; // 0x2b7c        
        // metadata: MPropertyFriendlyName "attribute to use for normal"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        // metadata: MPropertySortPriority "750"
        // metadata: MPropertySuppressExpr "m_nOrientationType != PARTICLE_ORIENTATION_ALIGN_TO_PARTICLE_NORMAL && m_nOrientationType != PARTICLE_ORIENTATION_SCREENALIGN_TO_PARTICLE_NORMAL"
        particles::ParticleAttributeIndex_t m_nVectorFieldForOrientation; // 0x2b80        
        // metadata: MPropertyStartGroup "Material"
        // metadata: MPropertyFriendlyName "draw as opaque"
        bool m_bDrawAsOpaque; // 0x2b84        
        // metadata: MPropertyStartGroup "Orientation"
        // metadata: MPropertyFriendlyName "generate normals for cylinder"
        bool m_bGenerateNormals; // 0x2b85        
        [[maybe_unused]] std::uint8_t pad_0x2b86[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderRopes because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderRopes) == 0x2b88);
};
