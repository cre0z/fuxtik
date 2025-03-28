#pragma once
#include "source2sdk/server/CBtNode.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf8
    // Has VTable
    #pragma pack(push, 1)
    class CBtActionAim : public server::CBtNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x10]; // 0x58
        CUtlString m_szSensorInputKey; // 0x68        
        [[maybe_unused]] std::uint8_t pad_0x70[0x10]; // 0x70
        CUtlString m_szAimReadyKey; // 0x80        
        float m_flZoomCooldownTimestamp; // 0x88        
        bool m_bDoneAiming; // 0x8c        
        [[maybe_unused]] std::uint8_t pad_0x8d[0x3]; // 0x8d
        float m_flLerpStartTime; // 0x90        
        float m_flNextLookTargetLerpTime; // 0x94        
        float m_flPenaltyReductionRatio; // 0x98        
        QAngle m_NextLookTarget; // 0x9c        
        server::CountdownTimer m_AimTimer; // 0xa8        
        server::CountdownTimer m_SniperHoldTimer; // 0xc0        
        server::CountdownTimer m_FocusIntervalTimer; // 0xd8        
        bool m_bAcquired; // 0xf0        
        [[maybe_unused]] std::uint8_t pad_0xf1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBtActionAim because it is not a standard-layout class
    static_assert(sizeof(CBtActionAim) == 0xf8);
};
