#pragma once
#include "source2sdk/particles/CParticleFunctionRenderer.hpp"
#include "source2sdk/particles/ParticleColorBlendType_t.hpp"
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
    // Size: 0x220
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_ClientPhysics : public particles::CParticleFunctionRenderer
    {
    public:
        // metadata: MPropertyFriendlyName "client physics type"
        // metadata: MPropertyAttributeEditor "VDataChoice( scripts/misc.vdata!generic_physics_particle_spawner )"
        CUtlString m_strPhysicsType; // 0x208        
        // metadata: MPropertyFriendlyName "kill physics particles"
        bool m_bKillParticles; // 0x210        
        // metadata: MPropertyFriendlyName "delete physics sim when stopped"
        // metadata: MPropertySuppressExpr "m_bKillParticles == false"
        bool m_bDeleteSim; // 0x211        
        [[maybe_unused]] std::uint8_t pad_0x212[0x2]; // 0x212
        // metadata: MPropertyFriendlyName "control point (for finding nearest sim)"
        // metadata: MPropertySuppressExpr "m_bKillParticles == true"
        int32_t m_nControlPoint; // 0x214        
        // metadata: MPropertyFriendlyName "tint blend (color vs prop group gradient)"
        particles::ParticleColorBlendType_t m_nColorBlendType; // 0x218        
        [[maybe_unused]] std::uint8_t pad_0x21c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_ClientPhysics because it is not a standard-layout class
    static_assert(sizeof(C_OP_ClientPhysics) == 0x220);
};
