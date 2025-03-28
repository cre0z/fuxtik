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
    // Size: 0x5d8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_RepeatedTriggerChildGroup : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "group ID to affect"
        int32_t m_nChildGroupID; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        // metadata: MPropertyFriendlyName "Within-Cluster Refire Time"
        particleslib::CParticleCollectionFloatInput m_flClusterRefireTime; // 0x1c8        
        // metadata: MPropertyFriendlyName "Within-Cluster Fire Count Before Cooldown"
        particleslib::CParticleCollectionFloatInput m_flClusterSize; // 0x320        
        // metadata: MPropertyFriendlyName "Cluster Cooldown Time"
        particleslib::CParticleCollectionFloatInput m_flClusterCooldown; // 0x478        
        // metadata: MPropertyFriendlyName "limit active children to parent particle count"
        bool m_bLimitChildCount; // 0x5d0        
        [[maybe_unused]] std::uint8_t pad_0x5d1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_RepeatedTriggerChildGroup because it is not a standard-layout class
    static_assert(sizeof(C_OP_RepeatedTriggerChildGroup) == 0x5d8);
};
