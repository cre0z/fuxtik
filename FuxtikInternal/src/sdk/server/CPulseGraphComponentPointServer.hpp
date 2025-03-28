#pragma once
#include "source2sdk/server/CPulseGraphComponentBase.hpp"
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
    // Size: 0x178
    // Has VTable
    #pragma pack(push, 1)
    class CPulseGraphComponentPointServer : public server::CPulseGraphComponentBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x28[0x150];
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CPulseGraphComponentPointServer) == 0x178);
};
