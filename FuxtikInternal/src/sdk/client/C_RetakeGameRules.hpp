#pragma once
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: true
    // Size: 0x118
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "int m_nMatchSeed"
    // static metadata: MNetworkVarNames "bool m_bBlockersPresent"
    // static metadata: MNetworkVarNames "bool m_bRoundInProgress"
    // static metadata: MNetworkVarNames "int m_iFirstSecondHalfRound"
    // static metadata: MNetworkVarNames "int m_iBombSite"
    #pragma pack(push, 1)
    class C_RetakeGameRules
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0xf8]; // 0x0
        // metadata: MNetworkEnable
        int32_t m_nMatchSeed; // 0xf8        
        // metadata: MNetworkEnable
        bool m_bBlockersPresent; // 0xfc        
        // metadata: MNetworkEnable
        bool m_bRoundInProgress; // 0xfd        
        [[maybe_unused]] std::uint8_t pad_0xfe[0x2]; // 0xfe
        // metadata: MNetworkEnable
        int32_t m_iFirstSecondHalfRound; // 0x100        
        // metadata: MNetworkEnable
        int32_t m_iBombSite; // 0x104        
        [[maybe_unused]] std::uint8_t pad_0x108[0x10];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(C_RetakeGameRules, m_nMatchSeed) == 0xf8);
    static_assert(offsetof(C_RetakeGameRules, m_bBlockersPresent) == 0xfc);
    static_assert(offsetof(C_RetakeGameRules, m_bRoundInProgress) == 0xfd);
    static_assert(offsetof(C_RetakeGameRules, m_iFirstSecondHalfRound) == 0x100);
    static_assert(offsetof(C_RetakeGameRules, m_iBombSite) == 0x104);
    
    static_assert(sizeof(C_RetakeGameRules) == 0x118);
};
