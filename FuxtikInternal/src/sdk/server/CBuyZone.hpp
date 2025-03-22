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
    // Size: 0x8e8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CBuyZone : public server::CBaseTrigger
    {
    public:
        int32_t m_LegacyTeamNum; // 0x8e0        
        [[maybe_unused]] std::uint8_t pad_0x8e4[0x4];
        
        // Datamap fields:
        // void InputSetTeam_TerroristOnly; // 0x0
        // void InputSetTeam_CTOnly; // 0x0
        // void InputSetTeam_AllTeams; // 0x0
        // void InputSetTeam_None; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBuyZone because it is not a standard-layout class
    static_assert(sizeof(CBuyZone) == 0x8e8);
};
