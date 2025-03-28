#pragma once
#include "source2sdk/server/CBtNode.hpp"
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
    // Alignment: 0x1
    // Standard-layout class: false
    // Size: 0x58
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CBtNodeDecorator : public server::CBtNode
    {
    public:
        // No schema binary for binding
    };
    #pragma pack(pop)
    
    static_assert(sizeof(CBtNodeDecorator) == 0x58);
};
