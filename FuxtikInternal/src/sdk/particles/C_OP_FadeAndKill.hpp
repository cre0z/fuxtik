#pragma once
#include "source2sdk/particles/CParticleFunctionOperator.hpp"
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
    // Size: 0x1d8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_OP_FadeAndKill : public particles::CParticleFunctionOperator
    {
    public:
        // metadata: MPropertyFriendlyName "start fade in time"
        float m_flStartFadeInTime; // 0x1b8        
        // metadata: MPropertyFriendlyName "end fade in time"
        float m_flEndFadeInTime; // 0x1bc        
        // metadata: MPropertyFriendlyName "start fade out time"
        float m_flStartFadeOutTime; // 0x1c0        
        // metadata: MPropertyFriendlyName "end fade out time"
        float m_flEndFadeOutTime; // 0x1c4        
        // metadata: MPropertyFriendlyName "start alpha"
        float m_flStartAlpha; // 0x1c8        
        // metadata: MPropertyFriendlyName "end alpha"
        float m_flEndAlpha; // 0x1cc        
        // metadata: MPropertyFriendlyName "force preserving particle order"
        bool m_bForcePreserveParticleOrder; // 0x1d0        
        [[maybe_unused]] std::uint8_t pad_0x1d1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_OP_FadeAndKill because it is not a standard-layout class
    static_assert(sizeof(C_OP_FadeAndKill) == 0x1d8);
};
