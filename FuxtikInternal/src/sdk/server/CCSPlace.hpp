#pragma once
#include "source2sdk/server/CServerOnlyModelEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x720
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CCSPlace : public server::CServerOnlyModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x710[0x8]; // 0x710
        CUtlSymbolLarge m_name; // 0x718        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlace because it is not a standard-layout class
    static_assert(sizeof(CCSPlace) == 0x720);
};
