#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
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
    // Size: 0xdd0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RenderLightBeam : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "Color Blend"
        particleslib::CParticleCollectionVecInput m_vColorBlend; // 0x208        
        // metadata: MPropertyFriendlyName "Color Blend Type"
        // metadata: MPropertySortPriority "700"
        particles::ParticleColorBlendType_t m_nColorBlendType; // 0x860        
        [[maybe_unused]] std::uint8_t pad_0x864[0x4]; // 0x864
        // metadata: MPropertyFriendlyName "Lumens Per Meter"
        particleslib::CParticleCollectionFloatInput m_flBrightnessLumensPerMeter; // 0x868        
        // metadata: MPropertyFriendlyName "Shadows"
        // metadata: MPropertySuppressExpr "mod == csgo"
        bool m_bCastShadows; // 0x9c0        
        [[maybe_unused]] std::uint8_t pad_0x9c1[0x7]; // 0x9c1
        // metadata: MPropertyFriendlyName "Skirt"
        particleslib::CParticleCollectionFloatInput m_flSkirt; // 0x9c8        
        // metadata: MPropertyFriendlyName "Range"
        particleslib::CParticleCollectionFloatInput m_flRange; // 0xb20        
        // metadata: MPropertyFriendlyName "Thickness"
        particleslib::CParticleCollectionFloatInput m_flThickness; // 0xc78        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RenderLightBeam because it is not a standard-layout class
    static_assert(sizeof(C_OP_RenderLightBeam) == 0xdd0);
};
