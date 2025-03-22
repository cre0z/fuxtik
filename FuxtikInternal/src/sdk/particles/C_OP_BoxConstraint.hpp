#pragma once
#include "source2sdk/particles/CParticleFunctionConstraint.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0xe70
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_BoxConstraint : public particles::CParticleFunctionConstraint
    {
    public:
        // metadata: MPropertyFriendlyName "min coords"
        particleslib::CParticleCollectionVecInput m_vecMin; // 0x1b8        
        // metadata: MPropertyFriendlyName "max coords"
        particleslib::CParticleCollectionVecInput m_vecMax; // 0x810        
        // metadata: MPropertyFriendlyName "control point"
        int32_t m_nCP; // 0xe68        
        // metadata: MPropertyFriendlyName "use local space"
        bool m_bLocalSpace; // 0xe6c        
        // metadata: MPropertyFriendlyName "Take radius into account"
        bool m_bAccountForRadius; // 0xe6d        
        [[maybe_unused]] std::uint8_t pad_0xe6e[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_BoxConstraint because it is not a standard-layout class
    static_assert(sizeof(C_OP_BoxConstraint) == 0xe70);
};
