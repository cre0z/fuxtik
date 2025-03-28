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
    // Alignment: 0x1
    // Standard-layout class: true
    // Size: 0x608
    // Has VTable
    #pragma pack(push, 1)
    class CCSGOPlayerAnimGraphState
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x608];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CCSGOPlayerAnimGraphState) == 0x608);
};
