#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Size: 0x790
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerBrush : public server::CBaseModelEntity
    {
    public:
        entity2::CEntityIOOutput m_OnStartTouch; // 0x710        
        entity2::CEntityIOOutput m_OnEndTouch; // 0x738        
        entity2::CEntityIOOutput m_OnUse; // 0x760        
        int32_t m_iInputFilter; // 0x788        
        int32_t m_iDontMessageParent; // 0x78c        
        
        // Datamap fields:
        // void InputDisable; // 0x0
        // void InputEnable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerBrush because it is not a standard-layout class
    static_assert(sizeof(CTriggerBrush) == 0x790);
};
