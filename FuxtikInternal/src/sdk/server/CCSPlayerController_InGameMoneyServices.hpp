#pragma once
#include "source2sdk/client/CPlayerControllerComponent.hpp"
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
    // Standard-layout class: false
    // Size: 0x58
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iAccount"
    // static metadata: MNetworkVarNames "int m_iStartAccount"
    // static metadata: MNetworkVarNames "int m_iTotalCashSpent"
    // static metadata: MNetworkVarNames "int m_iCashSpentThisRound"
    #pragma pack(push, 1)
    class CCSPlayerController_InGameMoneyServices : public client::CPlayerControllerComponent
    {
    public:
        bool m_bReceivesMoneyNextRound; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x41[0x3]; // 0x41
        int32_t m_iMoneyEarnedForNextRound; // 0x44        
        // metadata: MNetworkEnable
        int32_t m_iAccount; // 0x48        
        // metadata: MNetworkEnable
        int32_t m_iStartAccount; // 0x4c        
        // metadata: MNetworkEnable
        int32_t m_iTotalCashSpent; // 0x50        
        // metadata: MNetworkEnable
        int32_t m_iCashSpentThisRound; // 0x54        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerController_InGameMoneyServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerController_InGameMoneyServices) == 0x58);
};
