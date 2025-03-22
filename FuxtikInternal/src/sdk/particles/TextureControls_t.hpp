#pragma once
#include "source2sdk/particles/SpriteCardPerParticleScale_t.hpp"
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
    // Size: 0x988
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct TextureControls_t
    {
    public:
        // metadata: MPropertyFriendlyName "horizontal texture scale"
        particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureScaleU; // 0x0        
        // metadata: MPropertyFriendlyName "vertical texture scale"
        particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureScaleV; // 0x158        
        // metadata: MPropertyFriendlyName "horizontal texture offset"
        particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureOffsetU; // 0x2b0        
        // metadata: MPropertyFriendlyName "vertical texture offset"
        particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureOffsetV; // 0x408        
        // metadata: MPropertyFriendlyName "texture rotation / animation rate scale"
        particleslib::CParticleCollectionRendererFloatInput m_flFinalTextureUVRotation; // 0x560        
        // metadata: MPropertyFriendlyName "Infinite Zoom Scale"
        particleslib::CParticleCollectionRendererFloatInput m_flZoomScale; // 0x6b8        
        // metadata: MPropertyFriendlyName "Distortion Amount"
        particleslib::CParticleCollectionRendererFloatInput m_flDistortion; // 0x810        
        // metadata: MPropertyFriendlyName "Randomize Initial Offset"
        bool m_bRandomizeOffsets; // 0x968        
        // metadata: MPropertyFriendlyName "Clamp UVs"
        bool m_bClampUVs; // 0x969        
        [[maybe_unused]] std::uint8_t pad_0x96a[0x2]; // 0x96a
        // metadata: MPropertyFriendlyName "per-particle scalar for blend"
        particles::SpriteCardPerParticleScale_t m_nPerParticleBlend; // 0x96c        
        // metadata: MPropertyFriendlyName "per-particle scalar for scale"
        particles::SpriteCardPerParticleScale_t m_nPerParticleScale; // 0x970        
        // metadata: MPropertyFriendlyName "per-particle scalar for horizontal offset"
        particles::SpriteCardPerParticleScale_t m_nPerParticleOffsetU; // 0x974        
        // metadata: MPropertyFriendlyName "per-particle scalar for vertical offset"
        particles::SpriteCardPerParticleScale_t m_nPerParticleOffsetV; // 0x978        
        // metadata: MPropertyFriendlyName "per-particle scalar for rotation"
        particles::SpriteCardPerParticleScale_t m_nPerParticleRotation; // 0x97c        
        // metadata: MPropertyFriendlyName "per-particle scalar for zoom"
        particles::SpriteCardPerParticleScale_t m_nPerParticleZoom; // 0x980        
        // metadata: MPropertyFriendlyName "per-particle scalar for distortion"
        particles::SpriteCardPerParticleScale_t m_nPerParticleDistortion; // 0x984        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in TextureControls_t because it is not a standard-layout class
    static_assert(sizeof(TextureControls_t) == 0x988);
};
