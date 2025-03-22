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
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    #pragma pack(push, 1)
    class CHintMessage
    {
    public:
        char* m_hintString; // 0x0        
        // m_args has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<char*> m_args;
        char m_args[0x18]; // 0x8        
        float m_duration; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0x24[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CHintMessage, m_hintString) == 0x0);
    static_assert(offsetof(CHintMessage, m_args) == 0x8);
    static_assert(offsetof(CHintMessage, m_duration) == 0x20);
    
    static_assert(sizeof(CHintMessage) == 0x28);
};
