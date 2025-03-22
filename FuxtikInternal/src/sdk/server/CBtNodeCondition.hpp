#pragma once
#include "source2sdk/server/CBtNodeDecorator.hpp"
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
    // Size: 0x60
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CBtNodeCondition : public server::CBtNodeDecorator
    {
    public:
        bool m_bNegated; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x59[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBtNodeCondition because it is not a standard-layout class
    static_assert(sizeof(CBtNodeCondition) == 0x60);
};
