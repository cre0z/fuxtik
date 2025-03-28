#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x18
    // Has Trivial Destructor
    #pragma pack(push, 1)
    struct CSAdditionalPerRoundStats_t
    {
    public:
        int32_t m_numChickensKilled; // 0x0        
        int32_t m_killsWhileBlind; // 0x4        
        int32_t m_bombCarrierkills; // 0x8        
        int32_t m_iBurnDamageInflicted; // 0xc        
        int32_t m_iBlastDamageInflicted; // 0x10        
        int32_t m_iDinks; // 0x14        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CSAdditionalPerRoundStats_t, m_numChickensKilled) == 0x0);
    static_assert(offsetof(CSAdditionalPerRoundStats_t, m_killsWhileBlind) == 0x4);
    static_assert(offsetof(CSAdditionalPerRoundStats_t, m_bombCarrierkills) == 0x8);
    static_assert(offsetof(CSAdditionalPerRoundStats_t, m_iBurnDamageInflicted) == 0xc);
    static_assert(offsetof(CSAdditionalPerRoundStats_t, m_iBlastDamageInflicted) == 0x10);
    static_assert(offsetof(CSAdditionalPerRoundStats_t, m_iDinks) == 0x14);
    
    static_assert(sizeof(CSAdditionalPerRoundStats_t) == 0x18);
};
