#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/lerpdata_t.hpp"
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
    // Size: 0x988
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerLerpObject : public server::CBaseTrigger
    {
    public:
        CUtlSymbolLarge m_iszLerpTarget; // 0x8e0        
        // m_hLerpTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLerpTarget;
        char m_hLerpTarget[0x4]; // 0x8e8        
        [[maybe_unused]] std::uint8_t pad_0x8ec[0x4]; // 0x8ec
        CUtlSymbolLarge m_iszLerpTargetAttachment; // 0x8f0        
        modellib::AttachmentHandle_t m_hLerpTargetAttachment; // 0x8f8        
        [[maybe_unused]] std::uint8_t pad_0x8f9[0x3]; // 0x8f9
        float m_flLerpDuration; // 0x8fc        
        bool m_bLerpRestoreMoveType; // 0x900        
        bool m_bSingleLerpObject; // 0x901        
        [[maybe_unused]] std::uint8_t pad_0x902[0x6]; // 0x902
        // m_vecLerpingObjects has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::lerpdata_t> m_vecLerpingObjects;
        char m_vecLerpingObjects[0x18]; // 0x908        
        CUtlSymbolLarge m_iszLerpEffect; // 0x920        
        CUtlSymbolLarge m_iszLerpSound; // 0x928        
        bool m_bAttachTouchingObject; // 0x930        
        [[maybe_unused]] std::uint8_t pad_0x931[0x3]; // 0x931
        // m_hEntityToWaitForDisconnect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEntityToWaitForDisconnect;
        char m_hEntityToWaitForDisconnect[0x4]; // 0x934        
        entity2::CEntityIOOutput m_OnLerpStarted; // 0x938        
        entity2::CEntityIOOutput m_OnLerpFinished; // 0x960        
        
        // Datamap fields:
        // void CTriggerLerpObjectLerpThink; // 0x0
        // void CTriggerLerpObjectUnsetWaitForEntity; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerLerpObject because it is not a standard-layout class
    static_assert(sizeof(CTriggerLerpObject) == 0x988);
};
