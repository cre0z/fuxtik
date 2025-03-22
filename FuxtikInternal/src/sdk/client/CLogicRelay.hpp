#pragma once
#include "source2sdk/client/CLogicalEntity.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Size: 0x5a0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CLogicRelay : public client::CLogicalEntity
    {
    public:
        entity2::CEntityIOOutput m_OnTrigger; // 0x548        
        entity2::CEntityIOOutput m_OnSpawn; // 0x570        
        bool m_bDisabled; // 0x598        
        bool m_bWaitForRefire; // 0x599        
        bool m_bTriggerOnce; // 0x59a        
        bool m_bFastRetrigger; // 0x59b        
        bool m_bPassthoughCaller; // 0x59c        
        [[maybe_unused]] std::uint8_t pad_0x59d[0x3];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputEnableRefire; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
        // void InputTrigger; // 0x0
        // void InputCancelPending; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CLogicRelay because it is not a standard-layout class
    static_assert(sizeof(CLogicRelay) == 0x5a0);
};
