#pragma once
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/client/GameTick_t.hpp"
#include "source2sdk/server/audioparams_t.hpp"
#include "source2sdk/server/fogplayerparams_t.hpp"
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
    class CColorCorrection;
};

namespace source2sdk::server
{
    class CEnvSoundscapeTriggerable;
};

namespace source2sdk::server
{
    class CPostProcessingVolume;
};

namespace source2sdk::server
{
    class CTonemapController2;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x170
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "QAngle m_vecCsViewPunchAngle"
    // static metadata: MNetworkVarNames "GameTick_t m_nCsViewPunchAngleTick"
    // static metadata: MNetworkVarNames "float32 m_flCsViewPunchAngleTickRatio"
    // static metadata: MNetworkVarNames "fogplayerparams_t m_PlayerFog"
    // static metadata: MNetworkVarNames "CHandle< CColorCorrection> m_hColorCorrectionCtrl"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hViewEntity"
    // static metadata: MNetworkVarNames "CHandle< CTonemapController2> m_hTonemapController"
    // static metadata: MNetworkVarNames "audioparams_t m_audio"
    // static metadata: MNetworkVarNames "CHandle<CPostProcessingVolume> m_PostProcessingVolumes"
    #pragma pack(push, 1)
    class CPlayer_CameraServices : public client::CPlayerPawnComponent
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle_precise"
        QAngle m_vecCsViewPunchAngle; // 0x40        
        // metadata: MNetworkEnable
        client::GameTick_t m_nCsViewPunchAngleTick; // 0x4c        
        // metadata: MNetworkEnable
        float m_flCsViewPunchAngleTickRatio; // 0x50        
        [[maybe_unused]] std::uint8_t pad_0x54[0x4]; // 0x54
        // metadata: MNetworkEnable
        server::fogplayerparams_t m_PlayerFog; // 0x58        
        // metadata: MNetworkEnable
        // m_hColorCorrectionCtrl has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CColorCorrection> m_hColorCorrectionCtrl;
        char m_hColorCorrectionCtrl[0x4]; // 0x98        
        // metadata: MNetworkEnable
        // m_hViewEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewEntity;
        char m_hViewEntity[0x4]; // 0x9c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        // m_hTonemapController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CTonemapController2> m_hTonemapController;
        char m_hTonemapController[0x4]; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa4[0x4]; // 0xa4
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        server::audioparams_t m_audio; // 0xa8        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerAndObserversExclusive"
        // m_PostProcessingVolumes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CHandle<server::CPostProcessingVolume>> m_PostProcessingVolumes;
        char m_PostProcessingVolumes[0x18]; // 0x120        
        float m_flOldPlayerZ; // 0x138        
        float m_flOldPlayerViewOffsetZ; // 0x13c        
        [[maybe_unused]] std::uint8_t pad_0x140[0x18]; // 0x140
        // m_hTriggerSoundscapeList has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CEnvSoundscapeTriggerable>> m_hTriggerSoundscapeList;
        char m_hTriggerSoundscapeList[0x18]; // 0x158        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlayer_CameraServices because it is not a standard-layout class
    static_assert(sizeof(CPlayer_CameraServices) == 0x170);
};
