#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
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
    // Size: 0x9d8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_CreateOnGrid : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "X Dimension Count"
        particleslib::CParticleCollectionFloatInput m_nXCount; // 0x1c0        
        // metadata: MPropertyFriendlyName "Y Dimension Count"
        particleslib::CParticleCollectionFloatInput m_nYCount; // 0x318        
        // metadata: MPropertyFriendlyName "Z Dimension Count"
        particleslib::CParticleCollectionFloatInput m_nZCount; // 0x470        
        // metadata: MPropertyFriendlyName "X Dimension Spacing"
        particleslib::CParticleCollectionFloatInput m_nXSpacing; // 0x5c8        
        // metadata: MPropertyFriendlyName "Y Dimension Spacing"
        particleslib::CParticleCollectionFloatInput m_nYSpacing; // 0x720        
        // metadata: MPropertyFriendlyName "Z Dimension Spacing"
        particleslib::CParticleCollectionFloatInput m_nZSpacing; // 0x878        
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x9d0        
        // metadata: MPropertyFriendlyName "use local space"
        bool m_bLocalSpace; // 0x9d4        
        // metadata: MPropertyFriendlyName "center around control point"
        bool m_bCenter; // 0x9d5        
        // metadata: MPropertyFriendlyName "hollow"
        bool m_bHollow; // 0x9d6        
        [[maybe_unused]] std::uint8_t pad_0x9d7[0x1];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_CreateOnGrid because it is not a standard-layout class
    static_assert(sizeof(C_INIT_CreateOnGrid) == 0x9d8);
};
