#pragma once
#include "source2sdk/client/CPlayer_CameraServices.hpp"
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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x228
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "uint32 m_iFOV"
    // static metadata: MNetworkVarNames "uint32 m_iFOVStart"
    // static metadata: MNetworkVarNames "GameTime_t m_flFOVTime"
    // static metadata: MNetworkVarNames "float32 m_flFOVRate"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hZoomOwner"
    #pragma pack(push, 1)
    class CCSPlayerBase_CameraServices : public client::CPlayer_CameraServices
    {
    public:
        // metadata: MNetworkEnable
        uint32_t m_iFOV; // 0x210        
        // metadata: MNetworkEnable
        uint32_t m_iFOVStart; // 0x214        
        // metadata: MNetworkEnable
        client::GameTime_t m_flFOVTime; // 0x218        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flFOVRate; // 0x21c        
        // metadata: MNetworkEnable
        // m_hZoomOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hZoomOwner;
        char m_hZoomOwner[0x4]; // 0x220        
        float m_flLastShotFOV; // 0x224        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerBase_CameraServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerBase_CameraServices) == 0x228);
};
