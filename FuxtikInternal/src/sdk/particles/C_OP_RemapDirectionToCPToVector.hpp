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
    class C_OP_RemapDirectionToCPToVector : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "control point"
        int32_t m_nCP; // 0x1b8        
        // metadata: MPropertyFriendlyName "output field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nFieldOutput; // 0x1bc        
        // metadata: MPropertyFriendlyName "scale factor"
        float m_flScale; // 0x1c0        
        // metadata: MPropertyFriendlyName "offset rotation"
        float m_flOffsetRot; // 0x1c4        
        // metadata: MPropertyFriendlyName "offset axis"
        // metadata: MVectorIsCoordinate
        Vector m_vecOffsetAxis; // 0x1c8        
        // metadata: MPropertyFriendlyName "normalize"
        bool m_bNormalize; // 0x1d4        
        [[maybe_unused]] std::uint8_t pad_0x1d5[0x3]; // 0x1d5
        // metadata: MPropertyFriendlyName "strength field"
        // metadata: MPropertyAttributeChoiceName "particlefield_scalar"
        particles::ParticleAttributeIndex_t m_nFieldStrength; // 0x1d8        
        [[maybe_unused]] std::uint8_t pad_0x1dc[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RemapDirectionToCPToVector because it is not a standard-layout class
    static_assert(sizeof(C_OP_RemapDirectionToCPToVector) == 0x1e0);
};
