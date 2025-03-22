#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x1f54a8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDebugHistory : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4c0[0x1f4040]; // 0x4c0
        int32_t m_nNpcEvents; // 0x1f4500        
        [[maybe_unused]] std::uint8_t pad_0x1f4504[0xfa4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDebugHistory because it is not a standard-layout class
    static_assert(sizeof(CDebugHistory) == 0x1f54a8);
};
