#pragma once
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x4c8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvHudHint : public server::CPointEntity
    {
    public:
        CUtlSymbolLarge m_iszMessage; // 0x4c0        
        
        // Datamap fields:
        // void InputShowHudHint; // 0x0
        // void InputHideHudHint; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvHudHint because it is not a standard-layout class
    static_assert(sizeof(CEnvHudHint) == 0x4c8);
};
