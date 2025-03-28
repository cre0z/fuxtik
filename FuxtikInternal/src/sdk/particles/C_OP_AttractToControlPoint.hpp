#pragma once
#include "source2sdk/particles/CParticleFunctionForce.hpp"
#include "source2sdk/particleslib/CParticleTransformInput.hpp"
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
    // Size: 0x500
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_AttractToControlPoint : public particles::CParticleFunctionForce
    {
    public:
        // metadata: MPropertyFriendlyName "component scale"
        // metadata: MVectorIsCoordinate
        Vector m_vecComponentScale; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1d4[0x4]; // 0x1d4
        // metadata: MPropertyFriendlyName "amount of force (or Max Force)"
        particleslib::CPerParticleFloatInput m_fForceAmount; // 0x1d8        
        // metadata: MPropertyFriendlyName "falloff power"
        float m_fFalloffPower; // 0x330        
        [[maybe_unused]] std::uint8_t pad_0x334[0x4]; // 0x334
        // metadata: MPropertyFriendlyName "input position transform"
        particleslib::CParticleTransformInput m_TransformInput; // 0x338        
        // metadata: MPropertyFriendlyName "Min Pullforce"
        particleslib::CPerParticleFloatInput m_fForceAmountMin; // 0x3a0        
        // metadata: MPropertyFriendlyName "Apply Min Pullforce"
        bool m_bApplyMinForce; // 0x4f8        
        [[maybe_unused]] std::uint8_t pad_0x4f9[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_AttractToControlPoint because it is not a standard-layout class
    static_assert(sizeof(C_OP_AttractToControlPoint) == 0x500);
};
