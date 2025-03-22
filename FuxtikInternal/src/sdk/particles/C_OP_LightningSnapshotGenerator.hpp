#pragma once
#include "source2sdk/particles/CParticleFunctionPreEmission.hpp"
#include "source2sdk/particles/ParticleLightnintBranchBehavior_t.hpp"
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
    // Size: 0x10a0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_LightningSnapshotGenerator : public particles::CParticleFunctionPreEmission
    {
    public:
        // metadata: MPropertyFriendlyName "snapshot control point number"
        int32_t m_nCPSnapshot; // 0x1c0        
        // metadata: MPropertyFriendlyName "start control point number"
        int32_t m_nCPStartPnt; // 0x1c4        
        // metadata: MPropertyFriendlyName "end control point number"
        int32_t m_nCPEndPnt; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1cc[0x4]; // 0x1cc
        // metadata: MPropertyFriendlyName "Recursion Depth"
        particleslib::CParticleCollectionFloatInput m_flSegments; // 0x1d0        
        // metadata: MPropertyFriendlyName "Offset"
        particleslib::CParticleCollectionFloatInput m_flOffset; // 0x328        
        // metadata: MPropertyFriendlyName "Offset Decay"
        particleslib::CParticleCollectionFloatInput m_flOffsetDecay; // 0x480        
        // metadata: MPropertyFriendlyName "Recalculation Rate"
        particleslib::CParticleCollectionFloatInput m_flRecalcRate; // 0x5d8        
        // metadata: MPropertyFriendlyName "UV Scale"
        particleslib::CParticleCollectionFloatInput m_flUVScale; // 0x730        
        // metadata: MPropertyFriendlyName "UV Offset"
        particleslib::CParticleCollectionFloatInput m_flUVOffset; // 0x888        
        // metadata: MPropertyFriendlyName "Branch Split Rate"
        particleslib::CParticleCollectionFloatInput m_flSplitRate; // 0x9e0        
        // metadata: MPropertyFriendlyName "Branch Twist"
        particleslib::CParticleCollectionFloatInput m_flBranchTwist; // 0xb38        
        // metadata: MPropertyFriendlyName "Branch Behavior"
        particles::ParticleLightnintBranchBehavior_t m_nBranchBehavior; // 0xc90        
        [[maybe_unused]] std::uint8_t pad_0xc94[0x4]; // 0xc94
        // metadata: MPropertyFriendlyName "Start Radius"
        particleslib::CParticleCollectionFloatInput m_flRadiusStart; // 0xc98        
        // metadata: MPropertyFriendlyName "End Radius"
        particleslib::CParticleCollectionFloatInput m_flRadiusEnd; // 0xdf0        
        // metadata: MPropertyFriendlyName "Dedicated Particle Pool Count"
        particleslib::CParticleCollectionFloatInput m_flDedicatedPool; // 0xf48        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_LightningSnapshotGenerator because it is not a standard-layout class
    static_assert(sizeof(C_OP_LightningSnapshotGenerator) == 0x10a0);
};
