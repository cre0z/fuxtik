#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
    // Size: 0x338
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RotateVector : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8        
        // metadata: MPropertyFriendlyName "rotation axis min"
        // metadata: MVectorIsCoordinate
        Vector m_vecRotAxisMin; // 0x1bc        
        // metadata: MPropertyFriendlyName "rotation axis max"
        // metadata: MVectorIsCoordinate
        Vector m_vecRotAxisMax; // 0x1c8        
        // metadata: MPropertyFriendlyName "rotation rate min"
        float m_flRotRateMin; // 0x1d4        
        // metadata: MPropertyFriendlyName "rotation rate max"
        float m_flRotRateMax; // 0x1d8        
        // metadata: MPropertyFriendlyName "normalize output"
        bool m_bNormalize; // 0x1dc        
        [[maybe_unused]] std::uint8_t pad_0x1dd[0x3]; // 0x1dd
        // metadata: MPropertyFriendlyName "per particle scale"
        particleslib::CPerParticleFloatInput m_flScale; // 0x1e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RotateVector because it is not a standard-layout class
    static_assert(sizeof(C_OP_RotateVector) == 0x338);
};
