#pragma once
#include "source2sdk/particles/CParticleFunctionForce.hpp"
#include "source2sdk/particleslib/CPerParticleFloatInput.hpp"
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
    // Size: 0x328
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_ExternalGameImpulseForce : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "force scale"
        particleslib::CPerParticleFloatInput m_flForceScale; // 0x1c8        
        // metadata: MPropertyFriendlyName "rope shake"
        bool m_bRopes; // 0x320        
        // metadata: MPropertyFriendlyName "limit rope impulses to Z"
        bool m_bRopesZOnly; // 0x321        
        // metadata: MPropertyFriendlyName "explosions"
        bool m_bExplosions; // 0x322        
        // metadata: MPropertyFriendlyName "particle systems"
        bool m_bParticles; // 0x323        
        [[maybe_unused]] std::uint8_t pad_0x324[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ExternalGameImpulseForce because it is not a standard-layout class
    static_assert(sizeof(C_OP_ExternalGameImpulseForce) == 0x328);
};
