#pragma once
#include "source2sdk/particles/CParticleFunctionForce.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
#include "source2sdk/particleslib/CPerParticleVecInput.hpp"
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
    // Size: 0x1de8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_ExternalWindForce : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "sample position"
        particleslib::CPerParticleVecInput m_vecSamplePosition; // 0x1c8        
        // metadata: MPropertyFriendlyName "force scale"
        particleslib::CPerParticleVecInput m_vecScale; // 0x820        
        // metadata: MPropertyFriendlyName "sample wind"
        bool m_bSampleWind; // 0xe78        
        // metadata: MPropertyFriendlyName "sample water current"
        bool m_bSampleWater; // 0xe79        
        // metadata: MPropertyFriendlyName "dampen gravity/buoyancy near water plane"
        // metadata: MPropertySuppressExpr "!m_bSampleWater"
        bool m_bDampenNearWaterPlane; // 0xe7a        
        // metadata: MPropertyFriendlyName "sample local gravity"
        bool m_bSampleGravity; // 0xe7b        
        [[maybe_unused]] std::uint8_t pad_0xe7c[0x4]; // 0xe7c
        // metadata: MPropertyFriendlyName "gravity force"
        // metadata: MPropertySuppressExpr "m_bSampleGravity"
        particleslib::CPerParticleVecInput m_vecGravityForce; // 0xe80        
        // metadata: MPropertyFriendlyName "use Movement Basic for Local Gravity & Buoyancy Scale"
        // metadata: MPropertySuppressExpr "!m_bSampleGravity"
        bool m_bUseBasicMovementGravity; // 0x14d8        
        [[maybe_unused]] std::uint8_t pad_0x14d9[0x7]; // 0x14d9
        // metadata: MPropertyFriendlyName "local gravity scale"
        // metadata: MPropertySuppressExpr "!m_bSampleGravity"
        particleslib::CPerParticleFloatInput m_flLocalGravityScale; // 0x14e0        
        // metadata: MPropertyFriendlyName "local gravity buoyancy scale"
        // metadata: MPropertySuppressExpr "!m_bSampleGravity"
        particleslib::CPerParticleFloatInput m_flLocalBuoyancyScale; // 0x1638        
        // metadata: MPropertyFriendlyName "buoyancy force"
        // metadata: MPropertySuppressExpr "!m_bSampleWater || m_bSampleGravity"
        particleslib::CPerParticleVecInput m_vecBuoyancyForce; // 0x1790        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ExternalWindForce because it is not a standard-layout class
    static_assert(sizeof(C_OP_ExternalWindForce) == 0x1de8);
};
