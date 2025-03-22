#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/CRandomNumberGeneratorParameters.hpp"
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
    // Size: 0xe80
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateWithinBox : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "min"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_vecMin; // 0x1c0        
        // metadata: MPropertyFriendlyName "max"
        // metadata: MVectorIsCoordinate
        particleslib::CPerParticleVecInput m_vecMax; // 0x818        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0xe70        
        // metadata: MPropertyFriendlyName "use local space"
        bool m_bLocalSpace; // 0xe74        
        [[maybe_unused]] std::uint8_t pad_0xe75[0x3]; // 0xe75
        // metadata: MPropertyFriendlyName "Random number generator controls"
        particles::CRandomNumberGeneratorParameters m_randomnessParameters; // 0xe78        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateWithinBox because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateWithinBox) == 0xe80);
};
