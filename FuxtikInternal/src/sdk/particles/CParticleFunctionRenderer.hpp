#pragma once
#include "source2sdk/particles/CParticleFunction.hpp"
#include "source2sdk/particles/CParticleVisibilityInputs.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x208
    // Has VTable
    // Is Abstract
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CParticleFunctionRenderer : public particles::CParticleFunction
    {
    public:
        // metadata: MPropertySortPriority "-1"
        particles::CParticleVisibilityInputs VisibilityInputs; // 0x1b8        
        // metadata: MPropertyStartGroup "Rendering filter"
        // metadata: MPropertyFriendlyName "I cannot be refracted through refracting objects like water"
        // metadata: MPropertySortPriority "-1"
        bool m_bCannotBeRefracted; // 0x200        
        // metadata: MPropertyFriendlyName "Skip rendering on mobile"
        // metadata: MPropertySortPriority "-1"
        bool m_bSkipRenderingOnMobile; // 0x201        
        [[maybe_unused]] std::uint8_t pad_0x202[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CParticleFunctionRenderer because it is not a standard-layout class
    static_assert(sizeof(CParticleFunctionRenderer) == 0x208);
};
