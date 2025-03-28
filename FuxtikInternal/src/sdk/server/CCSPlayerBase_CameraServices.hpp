#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_CameraServices.hpp"
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
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "uint32 m_iFOV"
    // static metadata: MNetworkVarNames "uint32 m_iFOVStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flFOVTime"
    // static metadata: MNetworkVarNames "float32 m_flFOVRate"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hZoomOwner"
    #pragma pack(push, 1)
    class CCSPlayerBase_CameraServices : public server::CPlayer_CameraServices
    {
    public:
        // metadata: MNetworkEnable
        uint32_t m_iFOV; // 0x170        
        // metadata: MNetworkEnable
        uint32_t m_iFOVStart; // 0x174        
        // metadata: MNetworkEnable
        client::GameTime_t m_flFOVTime; // 0x178        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flFOVRate; // 0x17c        
        // metadata: MNetworkEnable
        // m_hZoomOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hZoomOwner;
        char m_hZoomOwner[0x4]; // 0x180        
        [[maybe_unused]] std::uint8_t pad_0x184[0x4]; // 0x184
        // m_hTriggerFogList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTriggerFogList;
        char m_hTriggerFogList[0x18]; // 0x188        
        // m_hLastFogTrigger has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastFogTrigger;
        char m_hLastFogTrigger[0x4]; // 0x1a0        
        [[maybe_unused]] std::uint8_t pad_0x1a4[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerBase_CameraServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerBase_CameraServices) == 0x1a8);
};
