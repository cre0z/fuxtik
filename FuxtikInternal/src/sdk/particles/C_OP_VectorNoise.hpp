#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
    // Size: 0x1e0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_VectorNoise : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1b8        
        // metadata: MPropertyFriendlyName "output minimum"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        Vector m_vecOutputMin; // 0x1bc        
        // metadata: MPropertyFriendlyName "output maximum"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        Vector m_vecOutputMax; // 0x1c8        
        // metadata: MPropertyFriendlyName "noise coordinate scale"
        float m_fl4NoiseScale; // 0x1d4        
        // metadata: MPropertyFriendlyName "additive"
        bool m_bAdditive; // 0x1d8        
        // metadata: MPropertyFriendlyName "offset instead of accelerate position"
        bool m_bOffset; // 0x1d9        
        [[maybe_unused]] std::uint8_t pad_0x1da[0x2]; // 0x1da
        // metadata: MPropertyFriendlyName "Noise animation time scale"
        float m_flNoiseAnimationTimeScale; // 0x1dc        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_VectorNoise because it is not a standard-layout class
    static_assert(sizeof(C_OP_VectorNoise) == 0x1e0);
};
