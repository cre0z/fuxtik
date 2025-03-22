#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticlePinDistance_t.hpp"
#include "source2sdk/particles/ParticleSelection_t.hpp"
#include "source2sdk/particleslib/CParticleCollectionFloatInput.hpp"
#include "source2sdk/particleslib/CParticleCollectionVecInput.hpp"
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
    // Size: 0x1040
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_PinParticleToCP : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "control point number"
        int32_t m_nControlPointNumber; // 0x1b8        
        [[maybe_unused]] std::uint8_t pad_0x1bc[0x4]; // 0x1bc
        // metadata: MPropertyFriendlyName "offset"
        particleslib::CParticleCollectionVecInput m_vecOffset; // 0x1c0        
        // metadata: MPropertyFriendlyName "offset in local space"
        bool m_bOffsetLocal; // 0x818        
        [[maybe_unused]] std::uint8_t pad_0x819[0x3]; // 0x819
        // metadata: MPropertyFriendlyName "particle to use"
        particles::ParticleSelection_t m_nParticleSelection; // 0x81c        
        // metadata: MPropertyFriendlyName "particle number/offset"
        particleslib::CParticleCollectionFloatInput m_nParticleNumber; // 0x820        
        // metadata: MPropertyFriendlyName "pin break type"
        particles::ParticlePinDistance_t m_nPinBreakType; // 0x978        
        [[maybe_unused]] std::uint8_t pad_0x97c[0x4]; // 0x97c
        // metadata: MPropertyFriendlyName "break length %"
        particleslib::CParticleCollectionFloatInput m_flBreakDistance; // 0x980        
        // metadata: MPropertyFriendlyName "break speed"
        particleslib::CParticleCollectionFloatInput m_flBreakSpeed; // 0xad8        
        // metadata: MPropertyFriendlyName "break age"
        particleslib::CParticleCollectionFloatInput m_flAge; // 0xc30        
        // metadata: MPropertyFriendlyName "break comparison control point 1"
        int32_t m_nBreakControlPointNumber; // 0xd88        
        // metadata: MPropertyFriendlyName "break comparison control point 2"
        int32_t m_nBreakControlPointNumber2; // 0xd8c        
        // metadata: MPropertyFriendlyName "break value"
        particleslib::CParticleCollectionFloatInput m_flBreakValue; // 0xd90        
        // metadata: MPropertyFriendlyName "Interpolation"
        particleslib::CPerParticleFloatInput m_flInterpolation; // 0xee8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_PinParticleToCP because it is not a standard-layout class
    static_assert(sizeof(C_OP_PinParticleToCP) == 0x1040);
};
