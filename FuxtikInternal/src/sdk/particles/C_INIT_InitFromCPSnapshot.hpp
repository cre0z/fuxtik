#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
    // Size: 0x490
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_InitFromCPSnapshot : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "snapshot control point number"
        int32_t m_nControlPointNumber; // 0x1c0        
        // metadata: MPropertyFriendlyName "field to read"
        // metadata: MPropertyAttributeChoiceName "particlefield"
        particles::ParticleAttributeIndex_t m_nAttributeToRead; // 0x1c4        
        // metadata: MPropertyFriendlyName "field to write"
        // metadata: MPropertyAttributeChoiceName "particlefield"
        particles::ParticleAttributeIndex_t m_nAttributeToWrite; // 0x1c8        
        // metadata: MPropertyFriendlyName "local space control point number"
        int32_t m_nLocalSpaceCP; // 0x1cc        
        // metadata: MPropertyFriendlyName "random order"
        bool m_bRandom; // 0x1d0        
        // metadata: MPropertyFriendlyName "reverse order"
        bool m_bReverse; // 0x1d1        
        [[maybe_unused]] std::uint8_t pad_0x1d2[0x6]; // 0x1d2
        // metadata: MPropertyFriendlyName "Snapshot increment amount"
        particleslib::CParticleCollectionFloatInput m_nSnapShotIncrement; // 0x1d8        
        // metadata: MPropertyFriendlyName "Manual Snapshot Index"
        particleslib::CPerParticleFloatInput m_nManualSnapshotIndex; // 0x330        
        // metadata: MPropertyFriendlyName "random seed"
        int32_t m_nRandomSeed; // 0x488        
        // metadata: MPropertyFriendlyName "local space angles"
        bool m_bLocalSpaceAngles; // 0x48c        
        [[maybe_unused]] std::uint8_t pad_0x48d[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_InitFromCPSnapshot because it is not a standard-layout class
    static_assert(sizeof(C_INIT_InitFromCPSnapshot) == 0x490);
};
