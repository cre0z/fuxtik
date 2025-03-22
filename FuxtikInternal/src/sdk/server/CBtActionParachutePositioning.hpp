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
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x78
    // Has VTable
    #pragma pack(push, 1)
    class CBtActionParachutePositioning : public server::CBtNode
    {
    public:
        server::CountdownTimer m_ActionTimer; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x70[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBtActionParachutePositioning because it is not a standard-layout class
    static_assert(sizeof(CBtActionParachutePositioning) == 0x78);
};
