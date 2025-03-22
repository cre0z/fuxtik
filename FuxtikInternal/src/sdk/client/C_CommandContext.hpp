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
    // Size: 0xa8
    #pragma pack(push, 1)
    class C_CommandContext
    {
    public:
        bool needsprocessing; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x01[0x9f]; // 0x1
        int32_t command_number; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa4[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(C_CommandContext, needsprocessing) == 0x0);
    static_assert(offsetof(C_CommandContext, command_number) == 0xa0);
    
    static_assert(sizeof(C_CommandContext) == 0xa8);
};
