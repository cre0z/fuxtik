#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CRandomNumberGeneratorParameters.hpp"
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
    // Size: 0x1e8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_OffsetVectorToVector : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "input field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldInput; // 0x1c0        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1c4        
        // metadata: MPropertyFriendlyName "output offset minimum"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        Vector m_vecOutputMin; // 0x1c8        
        // metadata: MPropertyFriendlyName "output offset maximum"
        // metadata: MVectorIsSometimesCoordinate "m_nFieldOutput"
        Vector m_vecOutputMax; // 0x1d4        
        // metadata: MPropertyFriendlyName "Random number generator controls"
        particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0x1e0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_OffsetVectorToVector because it is not a standard-layout class
    static_assert(sizeof(C_INIT_OffsetVectorToVector) == 0x1e8);
};
