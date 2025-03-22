#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/SnapshotIndexType_t.hpp"
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
    // Size: 0x350
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_InitSkinnedPositionFromCPSnapshot : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "snapshot control point number"
        int32_t m_nSnapshotControlPointNumber; // 0x1c0        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1c4        
        // metadata: MPropertyFriendlyName "random order"
        // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
        bool m_bRandom; // 0x1c8        
        [[maybe_unused]] std::uint8_t pad_0x1c9[0x3]; // 0x1c9
        // metadata: MPropertyFriendlyName "random seed"
        // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
        int32_t m_nRandomSeed; // 0x1cc        
        // metadata: MPropertyFriendlyName "prepare for rigid lock"
        bool m_bRigid; // 0x1d0        
        // metadata: MPropertyFriendlyName "set normal"
        bool m_bSetNormal; // 0x1d1        
        // metadata: MPropertyFriendlyName "normal velocity ignore delta time"
        bool m_bIgnoreDt; // 0x1d2        
        [[maybe_unused]] std::uint8_t pad_0x1d3[0x1]; // 0x1d3
        // metadata: MPropertyFriendlyName "normal velocity min"
        float m_flMinNormalVelocity; // 0x1d4        
        // metadata: MPropertyFriendlyName "normal velocity max"
        float m_flMaxNormalVelocity; // 0x1d8        
        // metadata: MPropertyFriendlyName "Snapshot Read Type"
        particles::SnapshotIndexType_t m_nIndexType; // 0x1dc        
        // metadata: MPropertyFriendlyName "Snapshot Index"
        // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_DIRECT"
        particleslib::CPerParticleFloatInput m_flReadIndex; // 0x1e0        
        // metadata: MPropertyFriendlyName "particle increment amount"
        // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
        float m_flIncrement; // 0x338        
        // metadata: MPropertyFriendlyName "Full Loop Increment Amount"
        // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
        int32_t m_nFullLoopIncrement; // 0x33c        
        // metadata: MPropertyFriendlyName "Snapshot start point"
        // metadata: MPropertySuppressExpr "m_nIndexType != SNAPSHOT_INDEX_INCREMENT"
        int32_t m_nSnapShotStartPoint; // 0x340        
        // metadata: MPropertyFriendlyName "inherited bone velocity"
        float m_flBoneVelocity; // 0x344        
        // metadata: MPropertyFriendlyName "max inherited bone velocity"
        float m_flBoneVelocityMax; // 0x348        
        // metadata: MPropertyFriendlyName "Set Color"
        bool m_bCopyColor; // 0x34c        
        // metadata: MPropertyFriendlyName "Set Alpha"
        bool m_bCopyAlpha; // 0x34d        
        // metadata: MPropertyFriendlyName "Set Radius"
        bool m_bSetRadius; // 0x34e        
        [[maybe_unused]] std::uint8_t pad_0x34f[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_InitSkinnedPositionFromCPSnapshot because it is not a standard-layout class
    static_assert(sizeof(C_INIT_InitSkinnedPositionFromCPSnapshot) == 0x350);
};
