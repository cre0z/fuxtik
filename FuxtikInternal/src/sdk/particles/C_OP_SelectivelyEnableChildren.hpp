#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
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
    // Size: 0x5d0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_SelectivelyEnableChildren : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "group ID to affect"
        particleslib::CParticleCollectionFloatInput m_nChildGroupID; // 0x1c0        
        // metadata: MPropertyFriendlyName "first child to enable"
        particleslib::CParticleCollectionFloatInput m_nFirstChild; // 0x318        
        // metadata: MPropertyFriendlyName "# of children to enable"
        particleslib::CParticleCollectionFloatInput m_nNumChildrenToEnable; // 0x470        
        // metadata: MPropertyFriendlyName "play endcap when children are removed"
        bool m_bPlayEndcapOnStop; // 0x5c8        
        // metadata: MPropertyFriendlyName "destroy particles immediately when child is removed"
        bool m_bDestroyImmediately; // 0x5c9        
        [[maybe_unused]] std::uint8_t pad_0x5ca[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_SelectivelyEnableChildren because it is not a standard-layout class
    static_assert(sizeof(C_OP_SelectivelyEnableChildren) == 0x5d0);
};
