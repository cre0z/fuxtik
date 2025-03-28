#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/SnapshotIndexType_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
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
    // Size: 0x888
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_MovementSkinnedPositionFromCPSnapshot : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "snapshot control point number"
        int32_t m_nSnapshotControlPointNumber; // 0x1b8        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1bc        
        // metadata: MPropertyFriendlyName "random order"
        bool m_bRandom; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c1[0x3]; // 0x1c1
        // metadata: MPropertyFriendlyName "random seed"
        int32_t m_nRandomSeed; // 0x1c4        
        // metadata: MPropertyFriendlyName "set normal"
        bool m_bSetNormal; // 0x1c8        
        // metadata: MPropertyFriendlyName "set radius"
        bool m_bSetRadius; // 0x1c9        
        [[maybe_unused]] std::uint8_t pad_0x1ca[0x2]; // 0x1ca
        // metadata: MPropertyFriendlyName "Snapshot Read Type"
        particles::SnapshotIndexType_t m_nIndexType; // 0x1cc        
        // metadata: MPropertyFriendlyName "Snapshot Index"
        // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_DIRECT"
        particleslib::CPerParticleFloatInput m_flReadIndex; // 0x1d0        
        // metadata: MPropertyFriendlyName "particle increment amount"
        // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
        particleslib::CParticleCollectionFloatInput m_flIncrement; // 0x328        
        // metadata: MPropertyFriendlyName "Full Loop Increment Amount"
        // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
        particleslib::CParticleCollectionFloatInput m_nFullLoopIncrement; // 0x480        
        // metadata: MPropertyFriendlyName "Snapshot start point"
        // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
        particleslib::CParticleCollectionFloatInput m_nSnapShotStartPoint; // 0x5d8        
        // metadata: MPropertyFriendlyName "Interpolation"
        particleslib::CPerParticleFloatInput m_flInterpolation; // 0x730        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_MovementSkinnedPositionFromCPSnapshot because it is not a standard-layout class
    static_assert(sizeof(C_OP_MovementSkinnedPositionFromCPSnapshot) == 0x888);
};
