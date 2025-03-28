#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
    // Size: 0x488
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetPerChildControlPoint : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "group ID to affect"
        int32_t m_nChildGroupID; // 0x1b8        
        // metadata: MPropertyFriendlyName "control point to set"
        int32_t m_nFirstControlPoint; // 0x1bc        
        // metadata: MPropertyFriendlyName "# of children to set"
        int32_t m_nNumControlPoints; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "particle increment amount"
        particleslib::CParticleCollectionFloatInput m_nParticleIncrement; // 0x1c8        
        // metadata: MPropertyFriendlyName "first particle to copy"
        particleslib::CParticleCollectionFloatInput m_nFirstSourcePoint; // 0x320        
        // metadata: MPropertyFriendlyName "set orientation from velocity"
        bool m_bSetOrientation; // 0x478        
        [[maybe_unused]] std::uint8_t pad_0x479[0x3]; // 0x479
        // metadata: MPropertyFriendlyName "orientation vector"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nOrientationField; // 0x47c        
        // metadata: MPropertyFriendlyName "set number of children based on particle count"
        bool m_bNumBasedOnParticleCount; // 0x480        
        [[maybe_unused]] std::uint8_t pad_0x481[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetPerChildControlPoint because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetPerChildControlPoint) == 0x488);
};
