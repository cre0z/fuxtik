#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
    // Size: 0x9d8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_MovementRotateParticleAroundAxis : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "rotation axis"
        // metadata: MVectorIsCoordinate
        particleslib::CParticleCollectionVecInput m_vecRotAxis; // 0x1b8        
        // metadata: MPropertyFriendlyName "rotation rate"
        particleslib::CParticleCollectionFloatInput m_flRotRate; // 0x810        
        // metadata: MPropertyFriendlyName "transform input"
        particleslib::CParticleTransformInput m_TransformInput; // 0x968        
        // metadata: MPropertyFriendlyName "use local space"
        bool m_bLocalSpace; // 0x9d0        
        [[maybe_unused]] std::uint8_t pad_0x9d1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_MovementRotateParticleAroundAxis because it is not a standard-layout class
    static_assert(sizeof(C_OP_MovementRotateParticleAroundAxis) == 0x9d8);
};
