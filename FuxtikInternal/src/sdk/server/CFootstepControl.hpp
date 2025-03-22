#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0x8f0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "string_t m_source"
    // static metadata: MNetworkVarNames "string_t m_destination"
    #pragma pack(push, 1)
    class CFootstepControl : public server::CBaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_source; // 0x8e0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_destination; // 0x8e8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFootstepControl because it is not a standard-layout class
    static_assert(sizeof(CFootstepControl) == 0x8f0);
};
