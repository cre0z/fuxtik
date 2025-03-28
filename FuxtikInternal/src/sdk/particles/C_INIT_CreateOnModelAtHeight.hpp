#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleHitboxBiasType_t.hpp"
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
    // Size: 0x1310
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateOnModelAtHeight : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "use bones instead of hitboxes"
        bool m_bUseBones; // 0x1c0        
        // metadata: MPropertyFriendlyName "force creation height to desired height"
        bool m_bForceZ; // 0x1c1        
        [[maybe_unused]] std::uint8_t pad_0x1c2[0x2]; // 0x1c2
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c4        
        // metadata: MPropertyFriendlyName "height override control point number"
        int32_t m_nHeightCP; // 0x1c8        
        // metadata: MPropertyFriendlyName "desired height is relative to water"
        bool m_bUseWaterHeight; // 0x1cc        
        [[maybe_unused]] std::uint8_t pad_0x1cd[0x3]; // 0x1cd
        // metadata: MPropertyFriendlyName "relative desired height"
        particleslib::CParticleCollectionFloatInput m_flDesiredHeight; // 0x1d0        
        // metadata: MPropertyFriendlyName "model hitbox scale"
        particleslib::CParticleCollectionVecInput m_vecHitBoxScale; // 0x328        
        // metadata: MPropertyFriendlyName "direction bias"
        // metadata: MVectorIsCoordinate
        particleslib::CParticleCollectionVecInput m_vecDirectionBias; // 0x980        
        // metadata: MPropertyFriendlyName "bias type"
        particles::ParticleHitboxBiasType_t m_nBiasType; // 0xfd8        
        // metadata: MPropertyFriendlyName "bias in local space"
        bool m_bLocalCoords; // 0xfdc        
        // metadata: MPropertyFriendlyName "bias prefers moving hitboxes"
        bool m_bPreferMovingBoxes; // 0xfdd        
        // metadata: MPropertyFriendlyName "hitbox set"
        char m_HitboxSetName[128]; // 0xfde        
        [[maybe_unused]] std::uint8_t pad_0x105e[0x2]; // 0x105e
        // metadata: MPropertyFriendlyName "hitbox velocity inherited scale"
        particleslib::CParticleCollectionFloatInput m_flHitboxVelocityScale; // 0x1060        
        // metadata: MPropertyFriendlyName "max hitbox velocity"
        particleslib::CParticleCollectionFloatInput m_flMaxBoneVelocity; // 0x11b8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateOnModelAtHeight because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateOnModelAtHeight) == 0x1310);
};
