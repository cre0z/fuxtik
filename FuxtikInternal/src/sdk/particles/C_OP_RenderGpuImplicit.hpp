#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particleslib/CParticleCollectionRendererFloatInput.hpp"
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
    // Size: 0x630
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderGpuImplicit : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertySortPriority "-1"
        // metadata: MPropertyDescription "Honors the per-particle radius (multiplied by radius scale) but is more expensive to render.  Some particles with large radii can make things much costlier"
        bool m_bUsePerParticleRadius; // 0x208        
        [[maybe_unused]] std::uint8_t pad_0x209[0x3]; // 0x209
        // metadata: MPropertyFriendlyName "(optional) vertex buffer size (k)"
        // metadata: MPropertyAttributeRange "0 1024"
        uint32_t m_nVertexCountKb; // 0x20c        
        // metadata: MPropertyFriendlyName "(optional) index buffer size (k)"
        // metadata: MPropertyAttributeRange "0 2048"
        uint32_t m_nIndexCountKb; // 0x210        
        [[maybe_unused]] std::uint8_t pad_0x214[0x4]; // 0x214
        particleslib::CParticleCollectionRendererFloatInput m_fGridSize; // 0x218        
        particleslib::CParticleCollectionRendererFloatInput m_fRadiusScale; // 0x370        
        // metadata: MPropertyAttributeRange ".1 .95"
        particleslib::CParticleCollectionRendererFloatInput m_fIsosurfaceThreshold; // 0x4c8        
        // metadata: MPropertyFriendlyName "scale CP (grid size/particle radius/threshold = x/y/z)"
        int32_t m_nScaleCP; // 0x620        
        [[maybe_unused]] std::uint8_t pad_0x624[0x4]; // 0x624
        // m_hMaterial has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_hMaterial;
        char m_hMaterial[0x8]; // 0x628        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderGpuImplicit because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderGpuImplicit) == 0x630);
};
