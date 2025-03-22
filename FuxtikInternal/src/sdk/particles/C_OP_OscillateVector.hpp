#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
#include "source2sdk/particles/ParticleAttributeIndex_t.hpp"
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
    // Size: 0x608
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_OscillateVector : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "oscillation rate min"
        // metadata: MVectorIsSometimesCoordinate "m_nField"
        Vector m_RateMin; // 0x1b8        
        // metadata: MPropertyFriendlyName "oscillation rate max"
        // metadata: MVectorIsSometimesCoordinate "m_nField"
        Vector m_RateMax; // 0x1c4        
        // metadata: MPropertyFriendlyName "oscillation frequency min"
        // metadata: MVectorIsSometimesCoordinate "m_nField"
        Vector m_FrequencyMin; // 0x1d0        
        // metadata: MPropertyFriendlyName "oscillation frequency max"
        // metadata: MVectorIsSometimesCoordinate "m_nField"
        Vector m_FrequencyMax; // 0x1dc        
        // metadata: MPropertyFriendlyName "oscillation field"
        // metadata: MPropertyAttributeChoiceName "particlefield_vector"
        particles::ParticleAttributeIndex_t m_nField; // 0x1e8        
        // metadata: MPropertyFriendlyName "proportional 0/1"
        bool m_bProportional; // 0x1ec        
        // metadata: MPropertyFriendlyName "start/end proportional"
        bool m_bProportionalOp; // 0x1ed        
        // metadata: MPropertyFriendlyName "offset instead of accelerate position"
        bool m_bOffset; // 0x1ee        
        [[maybe_unused]] std::uint8_t pad_0x1ef[0x1]; // 0x1ef
        // metadata: MPropertyFriendlyName "start time min"
        float m_flStartTime_min; // 0x1f0        
        // metadata: MPropertyFriendlyName "start time max"
        float m_flStartTime_max; // 0x1f4        
        // metadata: MPropertyFriendlyName "end time min"
        float m_flEndTime_min; // 0x1f8        
        // metadata: MPropertyFriendlyName "end time max"
        float m_flEndTime_max; // 0x1fc        
        // metadata: MPropertyFriendlyName "oscillation multiplier"
        particleslib::CPerParticleFloatInput m_flOscMult; // 0x200        
        // metadata: MPropertyFriendlyName "oscillation start phase"
        particleslib::CPerParticleFloatInput m_flOscAdd; // 0x358        
        // metadata: MPropertyFriendlyName "rate scale"
        particleslib::CPerParticleFloatInput m_flRateScale; // 0x4b0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_OscillateVector because it is not a standard-layout class
    static_assert(sizeof(C_OP_OscillateVector) == 0x608);
};
