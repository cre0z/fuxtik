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
    class CBasePlayerController;
};

namespace source2sdk::server
{
    class CHintMessage;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    #pragma pack(push, 1)
    class CHintMessageQueue
    {
    public:
        float m_tmMessageEnd; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        // m_messages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CHintMessage*> m_messages;
        char m_messages[0x18]; // 0x8        
        server::CBasePlayerController* m_pPlayerController; // 0x20        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CHintMessageQueue, m_tmMessageEnd) == 0x0);
    static_assert(offsetof(CHintMessageQueue, m_messages) == 0x8);
    static_assert(offsetof(CHintMessageQueue, m_pPlayerController) == 0x20);
    
    static_assert(sizeof(CHintMessageQueue) == 0x28);
};
