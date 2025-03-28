#pragma once
#include "source2sdk/client/CSPlayerState.hpp"
#include "source2sdk/client/C_BasePlayerPawn.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CCSPlayerController;
};

namespace source2sdk::client
{
    class CCSPlayer_PingServices;
};

namespace source2sdk::client
{
    class CPlayer_ViewModelServices;
};

namespace source2sdk::client
{
    class C_CSWeaponBase;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1460
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkVarNames "CCSPlayer_PingServices * m_pPingServices"
    // static metadata: MNetworkVarNames "CPlayer_ViewModelServices * m_pViewModelServices"
    // static metadata: MNetworkVarNames "CSPlayerState m_iPlayerState"
    // static metadata: MNetworkVarNames "bool m_bIsRescuing"
    // static metadata: MNetworkVarNames "GameTime_t m_fImmuneToGunGameDamageTime"
    // static metadata: MNetworkVarNames "bool m_bGunGameImmunity"
    // static metadata: MNetworkVarNames "bool m_bHasMovedSinceSpawn"
    // static metadata: MNetworkVarNames "float m_fMolotovUseTime"
    // static metadata: MNetworkVarNames "float m_fMolotovDamageTime"
    // static metadata: MNetworkVarNames "int m_iThrowGrenadeCounter"
    // static metadata: MNetworkVarNames "int m_iProgressBarDuration"
    // static metadata: MNetworkVarNames "float m_flProgressBarStartTime"
    // static metadata: MNetworkVarNames "float m_flFlashMaxAlpha"
    // static metadata: MNetworkVarNames "float m_flFlashDuration"
    // static metadata: MNetworkVarNames "int m_cycleLatch"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerController> m_hOriginalController"
    #pragma pack(push, 1)
    class C_CSPlayerPawnBase : public client::C_BasePlayerPawn
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1298[0x18]; // 0x1298
        // metadata: MNetworkEnable
        client::CCSPlayer_PingServices* m_pPingServices; // 0x12b0        
        // metadata: MNetworkEnable
        client::CPlayer_ViewModelServices* m_pViewModelServices; // 0x12b8        
        float m_fRenderingClipPlane[4]; // 0x12c0        
        int32_t m_nLastClipPlaneSetupFrame; // 0x12d0        
        Vector m_vecLastClipCameraPos; // 0x12d4        
        Vector m_vecLastClipCameraForward; // 0x12e0        
        bool m_bClipHitStaticWorld; // 0x12ec        
        bool m_bCachedPlaneIsValid; // 0x12ed        
        [[maybe_unused]] std::uint8_t pad_0x12ee[0x2]; // 0x12ee
        client::C_CSWeaponBase* m_pClippingWeapon; // 0x12f0        
        client::CSPlayerState m_previousPlayerState; // 0x12f8        
        // metadata: MNetworkEnable
        client::CSPlayerState m_iPlayerState; // 0x12fc        
        // metadata: MNetworkEnable
        bool m_bIsRescuing; // 0x1300        
        [[maybe_unused]] std::uint8_t pad_0x1301[0x3]; // 0x1301
        // metadata: MNetworkEnable
        client::GameTime_t m_fImmuneToGunGameDamageTime; // 0x1304        
        client::GameTime_t m_fImmuneToGunGameDamageTimeLast; // 0x1308        
        // metadata: MNetworkEnable
        bool m_bGunGameImmunity; // 0x130c        
        // metadata: MNetworkEnable
        bool m_bHasMovedSinceSpawn; // 0x130d        
        [[maybe_unused]] std::uint8_t pad_0x130e[0x2]; // 0x130e
        // metadata: MNetworkEnable
        float m_fMolotovUseTime; // 0x1310        
        // metadata: MNetworkEnable
        float m_fMolotovDamageTime; // 0x1314        
        // metadata: MNetworkEnable
        int32_t m_iThrowGrenadeCounter; // 0x1318        
        client::GameTime_t m_flLastSpawnTimeIndex; // 0x131c        
        // metadata: MNetworkEnable
        int32_t m_iProgressBarDuration; // 0x1320        
        // metadata: MNetworkEnable
        float m_flProgressBarStartTime; // 0x1324        
        Vector m_vecIntroStartEyePosition; // 0x1328        
        Vector m_vecIntroStartPlayerForward; // 0x1334        
        client::GameTime_t m_flClientDeathTime; // 0x1340        
        bool m_bScreenTearFrameCaptured; // 0x1344        
        [[maybe_unused]] std::uint8_t pad_0x1345[0x3]; // 0x1345
        float m_flFlashBangTime; // 0x1348        
        float m_flFlashScreenshotAlpha; // 0x134c        
        float m_flFlashOverlayAlpha; // 0x1350        
        bool m_bFlashBuildUp; // 0x1354        
        bool m_bFlashDspHasBeenCleared; // 0x1355        
        bool m_bFlashScreenshotHasBeenGrabbed; // 0x1356        
        [[maybe_unused]] std::uint8_t pad_0x1357[0x1]; // 0x1357
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFlashMaxAlphaChanged"
        float m_flFlashMaxAlpha; // 0x1358        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnFlashDurationChanged"
        float m_flFlashDuration; // 0x135c        
        int32_t m_iHealthBarRenderMaskIndex; // 0x1360        
        float m_flHealthFadeValue; // 0x1364        
        float m_flHealthFadeAlpha; // 0x1368        
        [[maybe_unused]] std::uint8_t pad_0x136c[0xc]; // 0x136c
        float m_flDeathCCWeight; // 0x1378        
        float m_flPrevRoundEndTime; // 0x137c        
        float m_flPrevMatchEndTime; // 0x1380        
        [[maybe_unused]] std::uint8_t pad_0x1384[0x4]; // 0x1384
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle_precise"
        // metadata: MNetworkChangeCallback "playerEyeAnglesChanged"
        // metadata: MNetworkPriority "32"
        QAngle m_angEyeAngles; // 0x1388        
        [[maybe_unused]] std::uint8_t pad_0x1394[0xc]; // 0x1394
        float m_fNextThinkPushAway; // 0x13a0        
        bool m_bShouldAutobuyDMWeapons; // 0x13a4        
        bool m_bShouldAutobuyNow; // 0x13a5        
        [[maybe_unused]] std::uint8_t pad_0x13a6[0x2]; // 0x13a6
        CEntityIndex m_iIDEntIndex; // 0x13a8        
        [[maybe_unused]] std::uint8_t pad_0x13ac[0x4]; // 0x13ac
        client::CountdownTimer m_delayTargetIDTimer; // 0x13b0        
        CEntityIndex m_iTargetItemEntIdx; // 0x13c8        
        CEntityIndex m_iOldIDEntIndex; // 0x13cc        
        client::CountdownTimer m_holdTargetIDTimer; // 0x13d0        
        [[maybe_unused]] std::uint8_t pad_0x13e8[0x4]; // 0x13e8
        float m_flCurrentMusicStartTime; // 0x13ec        
        float m_flMusicRoundStartTime; // 0x13f0        
        bool m_bDeferStartMusicOnWarmup; // 0x13f4        
        [[maybe_unused]] std::uint8_t pad_0x13f5[0x3]; // 0x13f5
        // metadata: MNetworkEnable
        int32_t m_cycleLatch; // 0x13f8        
        float m_serverIntendedCycle; // 0x13fc        
        float m_flLastSmokeOverlayAlpha; // 0x1400        
        float m_flLastSmokeAge; // 0x1404        
        Vector m_vLastSmokeOverlayColor; // 0x1408        
        client::ParticleIndex_t m_nPlayerSmokedFx; // 0x1414        
        client::ParticleIndex_t m_nPlayerInfernoBodyFx; // 0x1418        
        client::ParticleIndex_t m_nPlayerInfernoFootFx; // 0x141c        
        float m_flNextMagDropTime; // 0x1420        
        int32_t m_nLastMagDropAttachmentIndex; // 0x1424        
        Vector m_vecLastAliveLocalVelocity; // 0x1428        
        [[maybe_unused]] std::uint8_t pad_0x1434[0x1c]; // 0x1434
        bool m_bGuardianShouldSprayCustomXMark; // 0x1450        
        [[maybe_unused]] std::uint8_t pad_0x1451[0x7]; // 0x1451
        // metadata: MNetworkEnable
        // m_hOriginalController has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::CCSPlayerController> m_hOriginalController;
        char m_hOriginalController[0x4]; // 0x1458        
        [[maybe_unused]] std::uint8_t pad_0x145c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSPlayerPawnBase because it is not a standard-layout class
    static_assert(sizeof(C_CSPlayerPawnBase) == 0x1460);
};
