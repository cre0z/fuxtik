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
    class CCSPlayerController;
};

namespace source2sdk::server
{
    class CCSPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x100
    // Has VTable
    // Is Abstract
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CBot
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x10]; // 0x0
        server::CCSPlayerController* m_pController; // 0x10        
        server::CCSPlayerPawn* m_pPlayer; // 0x18        
        bool m_bHasSpawned; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x21[0x3]; // 0x21
        uint32_t m_id; // 0x24        
        [[maybe_unused]] std::uint8_t pad_0x28[0x98]; // 0x28
        bool m_isRunning; // 0xc0        
        bool m_isCrouching; // 0xc1        
        [[maybe_unused]] std::uint8_t pad_0xc2[0x2]; // 0xc2
        float m_forwardSpeed; // 0xc4        
        float m_leftSpeed; // 0xc8        
        float m_verticalSpeed; // 0xcc        
        uint64_t m_buttonFlags; // 0xd0        
        float m_jumpTimestamp; // 0xd8        
        Vector m_viewForward; // 0xdc        
        [[maybe_unused]] std::uint8_t pad_0xe8[0x10]; // 0xe8
        int32_t m_postureStackIndex; // 0xf8        
        [[maybe_unused]] std::uint8_t pad_0xfc[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CBot, m_pController) == 0x10);
    static_assert(offsetof(CBot, m_pPlayer) == 0x18);
    static_assert(offsetof(CBot, m_bHasSpawned) == 0x20);
    static_assert(offsetof(CBot, m_id) == 0x24);
    static_assert(offsetof(CBot, m_isRunning) == 0xc0);
    static_assert(offsetof(CBot, m_isCrouching) == 0xc1);
    static_assert(offsetof(CBot, m_forwardSpeed) == 0xc4);
    static_assert(offsetof(CBot, m_leftSpeed) == 0xc8);
    static_assert(offsetof(CBot, m_verticalSpeed) == 0xcc);
    static_assert(offsetof(CBot, m_buttonFlags) == 0xd0);
    static_assert(offsetof(CBot, m_jumpTimestamp) == 0xd8);
    static_assert(offsetof(CBot, m_viewForward) == 0xdc);
    static_assert(offsetof(CBot, m_postureStackIndex) == 0xf8);
    
    static_assert(sizeof(CBot) == 0x100);
};
