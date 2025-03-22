#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/CSWeaponMode.hpp"
#include "source2sdk/client/CSWeaponState_t.hpp"
#include "source2sdk/client/C_BasePlayerWeapon.hpp"
#include "source2sdk/client/C_IronSightController.hpp"
#include "source2sdk/client/GameTick_t.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/PlayerAnimEvent_t.hpp"
#include "source2sdk/client/WeaponAttackType_t.hpp"
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
    class C_CSPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a70
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkExcludeByName "m_flTimeWeaponIdle"
    // static metadata: MNetworkVarNames "float m_flFireSequenceStartTime"
    // static metadata: MNetworkVarNames "int m_nFireSequenceStartTimeChange"
    // static metadata: MNetworkVarNames "PlayerAnimEvent_t m_ePlayerFireEvent"
    // static metadata: MNetworkVarNames "WeaponAttackType_t m_ePlayerFireEventAttackType"
    // static metadata: MNetworkVarNames "CSWeaponState_t m_iState"
    // static metadata: MNetworkVarNames "uint32 m_nViewModelIndex"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeWeaponIdle"
    // static metadata: MNetworkVarNames "CSWeaponMode m_weaponMode"
    // static metadata: MNetworkVarNames "float m_fAccuracyPenalty"
    // static metadata: MNetworkVarNames "int m_iRecoilIndex"
    // static metadata: MNetworkVarNames "float m_flRecoilIndex"
    // static metadata: MNetworkVarNames "bool m_bBurstMode"
    // static metadata: MNetworkVarNames "GameTick_t m_nPostponeFireReadyTicks"
    // static metadata: MNetworkVarNames "float m_flPostponeFireReadyFrac"
    // static metadata: MNetworkVarNames "bool m_bInReload"
    // static metadata: MNetworkVarNames "bool m_bReloadVisuallyComplete"
    // static metadata: MNetworkVarNames "GameTime_t m_flDroppedAtTime"
    // static metadata: MNetworkVarNames "bool m_bIsHauledBack"
    // static metadata: MNetworkVarNames "bool m_bSilencerOn"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeSilencerSwitchComplete"
    // static metadata: MNetworkVarNames "int m_iOriginalTeamNumber"
    // static metadata: MNetworkVarNames "int m_iMostRecentTeamNumber"
    // static metadata: MNetworkVarNames "bool m_bDroppedNearBuyZone"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hPrevOwner"
    // static metadata: MNetworkVarNames "GameTick_t m_nDropTick"
    // static metadata: MNetworkVarNames "GameTime_t m_fLastShotTime"
    // static metadata: MNetworkVarNames "int m_iIronSightMode"
    // static metadata: MNetworkVarNames "int m_iNumEmptyAttacks"
    #pragma pack(push, 1)
    class C_CSWeaponBase : public client::C_BasePlayerWeapon
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x15e8[0x3c]; // 0x15e8
        // metadata: MNetworkEnable
        float m_flFireSequenceStartTime; // 0x1624        
        // metadata: MNetworkEnable
        int32_t m_nFireSequenceStartTimeChange; // 0x1628        
        int32_t m_nFireSequenceStartTimeAck; // 0x162c        
        // metadata: MNetworkEnable
        client::PlayerAnimEvent_t m_ePlayerFireEvent; // 0x1630        
        // metadata: MNetworkEnable
        client::WeaponAttackType_t m_ePlayerFireEventAttackType; // 0x1634        
        animationsystem::HSequence m_seqIdle; // 0x1638        
        animationsystem::HSequence m_seqFirePrimary; // 0x163c        
        animationsystem::HSequence m_seqFireSecondary; // 0x1640        
        [[maybe_unused]] std::uint8_t pad_0x1644[0x4]; // 0x1644
        // m_thirdPersonFireSequences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::HSequence> m_thirdPersonFireSequences;
        char m_thirdPersonFireSequences[0x18]; // 0x1648        
        animationsystem::HSequence m_hCurrentThirdPersonSequence; // 0x1660        
        int32_t m_nSilencerBoneIndex; // 0x1664        
        animationsystem::HSequence m_thirdPersonSequences[7]; // 0x1668        
        [[maybe_unused]] std::uint8_t pad_0x1684[0x1c]; // 0x1684
        client::CSWeaponState_t m_ClientPreviousWeaponState; // 0x16a0        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWeaponStateNetworkChange"
        client::CSWeaponState_t m_iState; // 0x16a4        
        float m_flCrosshairDistance; // 0x16a8        
        int32_t m_iAmmoLastCheck; // 0x16ac        
        int32_t m_iAlpha; // 0x16b0        
        int32_t m_iScopeTextureID; // 0x16b4        
        int32_t m_iCrosshairTextureID; // 0x16b8        
        float m_flGunAccuracyPositionDeprecated; // 0x16bc        
        int32_t m_nLastEmptySoundCmdNum; // 0x16c0        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        uint32_t m_nViewModelIndex; // 0x16c4        
        bool m_bReloadsWithClips; // 0x16c8        
        [[maybe_unused]] std::uint8_t pad_0x16c9[0x3]; // 0x16c9
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        // metadata: MNetworkPriority "32"
        client::GameTime_t m_flTimeWeaponIdle; // 0x16cc        
        bool m_bFireOnEmpty; // 0x16d0        
        [[maybe_unused]] std::uint8_t pad_0x16d1[0x7]; // 0x16d1
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0x16d8        
        // metadata: MNetworkEnable
        client::CSWeaponMode m_weaponMode; // 0x1700        
        float m_flTurningInaccuracyDelta; // 0x1704        
        Vector m_vecTurningInaccuracyEyeDirLast; // 0x1708        
        float m_flTurningInaccuracy; // 0x1714        
        // metadata: MNetworkEnable
        float m_fAccuracyPenalty; // 0x1718        
        client::GameTime_t m_flLastAccuracyUpdateTime; // 0x171c        
        float m_fAccuracySmoothedForZoom; // 0x1720        
        client::GameTime_t m_fScopeZoomEndTime; // 0x1724        
        // metadata: MNetworkEnable
        int32_t m_iRecoilIndex; // 0x1728        
        // metadata: MNetworkEnable
        float m_flRecoilIndex; // 0x172c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
        bool m_bBurstMode; // 0x1730        
        [[maybe_unused]] std::uint8_t pad_0x1731[0x3]; // 0x1731
        client::GameTime_t m_flLastBurstModeChangeTime; // 0x1734        
        // metadata: MNetworkEnable
        client::GameTick_t m_nPostponeFireReadyTicks; // 0x1738        
        // metadata: MNetworkEnable
        float m_flPostponeFireReadyFrac; // 0x173c        
        // metadata: MNetworkEnable
        bool m_bInReload; // 0x1740        
        // metadata: MNetworkEnable
        bool m_bReloadVisuallyComplete; // 0x1741        
        [[maybe_unused]] std::uint8_t pad_0x1742[0x2]; // 0x1742
        // metadata: MNetworkEnable
        client::GameTime_t m_flDroppedAtTime; // 0x1744        
        // metadata: MNetworkEnable
        bool m_bIsHauledBack; // 0x1748        
        // metadata: MNetworkEnable
        bool m_bSilencerOn; // 0x1749        
        [[maybe_unused]] std::uint8_t pad_0x174a[0x2]; // 0x174a
        // metadata: MNetworkEnable
        client::GameTime_t m_flTimeSilencerSwitchComplete; // 0x174c        
        // metadata: MNetworkEnable
        int32_t m_iOriginalTeamNumber; // 0x1750        
        // metadata: MNetworkEnable
        int32_t m_iMostRecentTeamNumber; // 0x1754        
        // metadata: MNetworkEnable
        bool m_bDroppedNearBuyZone; // 0x1758        
        [[maybe_unused]] std::uint8_t pad_0x1759[0x3]; // 0x1759
        float m_flNextAttackRenderTimeOffset; // 0x175c        
        [[maybe_unused]] std::uint8_t pad_0x1760[0x98]; // 0x1760
        bool m_bClearWeaponIdentifyingUGC; // 0x17f8        
        bool m_bVisualsDataSet; // 0x17f9        
        bool m_bOldFirstPersonSpectatedState; // 0x17fa        
        bool m_bUIWeapon; // 0x17fb        
        int32_t m_nCustomEconReloadEventId; // 0x17fc        
        [[maybe_unused]] std::uint8_t pad_0x1800[0x8]; // 0x1800
        // metadata: MNetworkEnable
        // m_hPrevOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CSPlayerPawn> m_hPrevOwner;
        char m_hPrevOwner[0x4]; // 0x1808        
        // metadata: MNetworkEnable
        client::GameTick_t m_nDropTick; // 0x180c        
        [[maybe_unused]] std::uint8_t pad_0x1810[0x1c]; // 0x1810
        bool m_donated; // 0x182c        
        [[maybe_unused]] std::uint8_t pad_0x182d[0x3]; // 0x182d
        // metadata: MNetworkEnable
        client::GameTime_t m_fLastShotTime; // 0x1830        
        bool m_bWasOwnedByCT; // 0x1834        
        bool m_bWasOwnedByTerrorist; // 0x1835        
        [[maybe_unused]] std::uint8_t pad_0x1836[0x2]; // 0x1836
        float m_gunHeat; // 0x1838        
        uint32_t m_smokeAttachments; // 0x183c        
        client::GameTime_t m_lastSmokeTime; // 0x1840        
        float m_flNextClientFireBulletTime; // 0x1844        
        float m_flNextClientFireBulletTime_Repredict; // 0x1848        
        [[maybe_unused]] std::uint8_t pad_0x184c[0xd4]; // 0x184c
        client::C_IronSightController m_IronSightController; // 0x1920        
        // metadata: MNetworkEnable
        int32_t m_iIronSightMode; // 0x19d0        
        [[maybe_unused]] std::uint8_t pad_0x19d4[0xc]; // 0x19d4
        client::GameTime_t m_flLastLOSTraceFailureTime; // 0x19e0        
        // metadata: MNetworkEnable
        int32_t m_iNumEmptyAttacks; // 0x19e4        
        [[maybe_unused]] std::uint8_t pad_0x19e8[0x78]; // 0x19e8
        client::GameTime_t m_flLastMagDropRequestTime; // 0x1a60        
        float m_flWatTickOffset; // 0x1a64        
        [[maybe_unused]] std::uint8_t pad_0x1a68[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSWeaponBase because it is not a standard-layout class
    static_assert(sizeof(C_CSWeaponBase) == 0x1a70);
};
