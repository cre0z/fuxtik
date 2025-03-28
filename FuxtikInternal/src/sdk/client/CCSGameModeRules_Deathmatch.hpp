#pragma once
#include "source2sdk/client/CCSGameModeRules.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x40
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flDMBonusStartTime"
    // static metadata: MNetworkVarNames "float m_flDMBonusTimeLength"
    // static metadata: MNetworkVarNames "CUtlString m_sDMBonusWeapon"
    #pragma pack(push, 1)
    class CCSGameModeRules_Deathmatch : public client::CCSGameModeRules
    {
    public:
        // metadata: MNetworkEnable
        client::GameTime_t m_flDMBonusStartTime; // 0x30        
        // metadata: MNetworkEnable
        float m_flDMBonusTimeLength; // 0x34        
        // metadata: MNetworkEnable
        CUtlString m_sDMBonusWeapon; // 0x38        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSGameModeRules_Deathmatch because it is not a standard-layout class
    static_assert(sizeof(CCSGameModeRules_Deathmatch) == 0x40);
};
