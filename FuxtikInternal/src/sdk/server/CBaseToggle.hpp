#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/TOGGLE_STATE.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

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
    class CBaseToggle : public server::CBaseModelEntity
    {
    public:
        server::TOGGLE_STATE m_toggle_state; // 0x710        
        float m_flMoveDistance; // 0x714        
        float m_flWait; // 0x718        
        float m_flLip; // 0x71c        
        bool m_bAlwaysFireBlockedOutputs; // 0x720        
        [[maybe_unused]] std::uint8_t pad_0x721[0x3]; // 0x721
        Vector m_vecPosition1; // 0x724        
        Vector m_vecPosition2; // 0x730        
        QAngle m_vecMoveAng; // 0x73c        
        QAngle m_vecAngle1; // 0x748        
        QAngle m_vecAngle2; // 0x754        
        float m_flHeight; // 0x760        
        // m_hActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hActivator;
        char m_hActivator[0x4]; // 0x764        
        Vector m_vecFinalDest; // 0x768        
        QAngle m_vecFinalAngle; // 0x774        
        int32_t m_movementType; // 0x780        
        [[maybe_unused]] std::uint8_t pad_0x784[0x4]; // 0x784
        CUtlSymbolLarge m_sMaster; // 0x788        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseToggle because it is not a standard-layout class
    static_assert(sizeof(CBaseToggle) == 0x790);
};
