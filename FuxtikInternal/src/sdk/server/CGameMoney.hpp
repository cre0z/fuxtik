#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CRulePointEntity.hpp"
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
    // Size: 0x780
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CGameMoney : public server::CRulePointEntity
    {
    public:
        entity2::CEntityIOOutput m_OnMoneySpent; // 0x720        
        entity2::CEntityIOOutput m_OnMoneySpentFail; // 0x748        
        int32_t m_nMoney; // 0x770        
        [[maybe_unused]] std::uint8_t pad_0x774[0x4]; // 0x774
        CUtlString m_strAwardText; // 0x778        
        
        // Datamap fields:
        // int32_t InputSetMoneyAmount; // 0x0
        // void InputAddTeamMoneyTerrorist; // 0x0
        // void InputAddTeamMoneyCT; // 0x0
        // void InputAddMoneyPlayer; // 0x0
        // void InputSpendMoneyFromPlayer; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CGameMoney because it is not a standard-layout class
    static_assert(sizeof(CGameMoney) == 0x780);
};
