#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
#include "source2sdk/particles/ParticleSetMethod_t.hpp"
#include "source2sdk/particles/VectorExpressionType_t.hpp"
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
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0xee0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SetVectorAttributeToVectorExpression : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "expression"
        particles::VectorExpressionType_t m_nExpression; // 0x1b8        
        [[maybe_unused]] std::uint8_t pad_0x1bc[0x4]; // 0x1bc
        // metadata: MPropertyFriendlyName "input 1"
        particleslib::CPerParticleVecInput m_vInput1; // 0x1c0        
        // metadata: MPropertyFriendlyName "input 2"
        particleslib::CPerParticleVecInput m_vInput2; // 0x818        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nOutputField; // 0xe70        
        // metadata: MPropertyFriendlyName "set value method"
        particles::ParticleSetMethod_t m_nSetMethod; // 0xe74        
        // metadata: MPropertyFriendlyName "normalize result"
        bool m_bNormalizedOutput; // 0xe78        
        [[maybe_unused]] std::uint8_t pad_0xe79[0x67];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SetVectorAttributeToVectorExpression because it is not a standard-layout class
    static_assert(sizeof(C_OP_SetVectorAttributeToVectorExpression) == 0xee0);
};
