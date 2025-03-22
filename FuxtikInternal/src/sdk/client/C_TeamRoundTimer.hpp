#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x590
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bTimerPaused"
    // static metadata: MNetworkVarNames "float m_flTimeRemaining"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimerEndTime"
    // static metadata: MNetworkVarNames "bool m_bIsDisabled"
    // static metadata: MNetworkVarNames "bool m_bShowInHUD"
    // static metadata: MNetworkVarNames "int m_nTimerLength"
    // static metadata: MNetworkVarNames "int m_nTimerInitialLength"
    // static metadata: MNetworkVarNames "int m_nTimerMaxLength"
    // static metadata: MNetworkVarNames "bool m_bAutoCountdown"
    // static metadata: MNetworkVarNames "int m_nSetupTimeLength"
    // static metadata: MNetworkVarNames "int m_nState"
    // static metadata: MNetworkVarNames "bool m_bStartPaused"
    // static metadata: MNetworkVarNames "bool m_bInCaptureWatchState"
    // static metadata: MNetworkVarNames "float m_flTotalTime"
    // static metadata: MNetworkVarNames "bool m_bStopWatchTimer"
    #pragma pack(push, 1)
    class C_TeamRoundTimer : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnTimerPaused"
        bool m_bTimerPaused; // 0x548        
        [[maybe_unused]] std::uint8_t pad_0x549[0x3]; // 0x549
        // metadata: MNetworkEnable
        float m_flTimeRemaining; // 0x54c        
        // metadata: MNetworkEnable
        client::GameTime_t m_flTimerEndTime; // 0x550        
        // metadata: MNetworkEnable
        bool m_bIsDisabled; // 0x554        
        // metadata: MNetworkEnable
        bool m_bShowInHUD; // 0x555        
        [[maybe_unused]] std::uint8_t pad_0x556[0x2]; // 0x556
        // metadata: MNetworkEnable
        int32_t m_nTimerLength; // 0x558        
        // metadata: MNetworkEnable
        int32_t m_nTimerInitialLength; // 0x55c        
        // metadata: MNetworkEnable
        int32_t m_nTimerMaxLength; // 0x560        
        // metadata: MNetworkEnable
        bool m_bAutoCountdown; // 0x564        
        [[maybe_unused]] std::uint8_t pad_0x565[0x3]; // 0x565
        // metadata: MNetworkEnable
        int32_t m_nSetupTimeLength; // 0x568        
        // metadata: MNetworkEnable
        int32_t m_nState; // 0x56c        
        // metadata: MNetworkEnable
        bool m_bStartPaused; // 0x570        
        // metadata: MNetworkEnable
        bool m_bInCaptureWatchState; // 0x571        
        [[maybe_unused]] std::uint8_t pad_0x572[0x2]; // 0x572
        // metadata: MNetworkEnable
        float m_flTotalTime; // 0x574        
        // metadata: MNetworkEnable
        bool m_bStopWatchTimer; // 0x578        
        bool m_bFireFinished; // 0x579        
        bool m_bFire5MinRemain; // 0x57a        
        bool m_bFire4MinRemain; // 0x57b        
        bool m_bFire3MinRemain; // 0x57c        
        bool m_bFire2MinRemain; // 0x57d        
        bool m_bFire1MinRemain; // 0x57e        
        bool m_bFire30SecRemain; // 0x57f        
        bool m_bFire10SecRemain; // 0x580        
        bool m_bFire5SecRemain; // 0x581        
        bool m_bFire4SecRemain; // 0x582        
        bool m_bFire3SecRemain; // 0x583        
        bool m_bFire2SecRemain; // 0x584        
        bool m_bFire1SecRemain; // 0x585        
        [[maybe_unused]] std::uint8_t pad_0x586[0x2]; // 0x586
        int32_t m_nOldTimerLength; // 0x588        
        int32_t m_nOldTimerState; // 0x58c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TeamRoundTimer because it is not a standard-layout class
    static_assert(sizeof(C_TeamRoundTimer) == 0x590);
};
