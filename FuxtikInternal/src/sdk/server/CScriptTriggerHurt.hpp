#pragma once
#include "source2sdk/server/CTriggerHurt.hpp"
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
    // Size: 0x990
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CScriptTriggerHurt : public server::CTriggerHurt
    {
    public:
        Vector m_vExtent; // 0x980        
        [[maybe_unused]] std::uint8_t pad_0x98c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CScriptTriggerHurt because it is not a standard-layout class
    static_assert(sizeof(CScriptTriggerHurt) == 0x990);
};
