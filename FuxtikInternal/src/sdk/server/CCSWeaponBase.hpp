#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/CSWeaponMode.hpp"
#include "source2sdk/client/CSWeaponState_t.hpp"
#include "source2sdk/client/GameTick_t.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/PlayerAnimEvent_t.hpp"
#include "source2sdk/client/WeaponAttackType_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBasePlayerWeapon.hpp"
#include "source2sdk/server/CIronSightController.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCSPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe98
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
    class CCSWeaponBase : public server::CBasePlayerWeapon
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xcb8[0x28]; // 0xcb8
        bool m_bRemoveable; // 0xce0        
        [[maybe_unused]] std::uint8_t pad_0xce1[0x7]; // 0xce1
        // metadata: MNetworkEnable
        float m_flFireSequenceStartTime; // 0xce8        
        // metadata: MNetworkEnable
        int32_t m_nFireSequenceStartTimeChange; // 0xcec        
        int32_t m_nFireSequenceStartTimeAck; // 0xcf0        
        // metadata: MNetworkEnable
        client::PlayerAnimEvent_t m_ePlayerFireEvent; // 0xcf4        
        // metadata: MNetworkEnable
        client::WeaponAttackType_t m_ePlayerFireEventAttackType; // 0xcf8        
        animationsystem::HSequence m_seqIdle; // 0xcfc        
        animationsystem::HSequence m_seqFirePrimary; // 0xd00        
        animationsystem::HSequence m_seqFireSecondary; // 0xd04        
        // m_thirdPersonFireSequences has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animationsystem::HSequence> m_thirdPersonFireSequences;
        char m_thirdPersonFireSequences[0x18]; // 0xd08        
        animationsystem::HSequence m_hCurrentThirdPersonSequence; // 0xd20        
        int32_t m_nSilencerBoneIndex; // 0xd24        
        animationsystem::HSequence m_thirdPersonSequences[7]; // 0xd28        
        [[maybe_unused]] std::uint8_t pad_0xd44[0xc]; // 0xd44
        bool m_bPlayerAmmoStockOnPickup; // 0xd50        
        bool m_bRequireUseToTouch; // 0xd51        
        [[maybe_unused]] std::uint8_t pad_0xd52[0x2]; // 0xd52
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWeaponStateNetworkChange"
        client::CSWeaponState_t m_iState; // 0xd54        
        client::GameTime_t m_flLastTimeInAir; // 0xd58        
        client::GameTime_t m_flLastDeployTime; // 0xd5c        
        int32_t m_nLastEmptySoundCmdNum; // 0xd60        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        uint32_t m_nViewModelIndex; // 0xd64        
        bool m_bReloadsWithClips; // 0xd68        
        [[maybe_unused]] std::uint8_t pad_0xd69[0x1f]; // 0xd69
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalWeaponExclusive"
        // metadata: MNetworkPriority "32"
        client::GameTime_t m_flTimeWeaponIdle; // 0xd88        
        bool m_bFireOnEmpty; // 0xd8c        
        [[maybe_unused]] std::uint8_t pad_0xd8d[0x3]; // 0xd8d
        entity2::CEntityIOOutput m_OnPlayerPickup; // 0xd90        
        // metadata: MNetworkEnable
        client::CSWeaponMode m_weaponMode; // 0xdb8        
        float m_flTurningInaccuracyDelta; // 0xdbc        
        Vector m_vecTurningInaccuracyEyeDirLast; // 0xdc0        
        float m_flTurningInaccuracy; // 0xdcc        
        // metadata: MNetworkEnable
        float m_fAccuracyPenalty; // 0xdd0        
        client::GameTime_t m_flLastAccuracyUpdateTime; // 0xdd4        
        float m_fAccuracySmoothedForZoom; // 0xdd8        
        client::GameTime_t m_fScopeZoomEndTime; // 0xddc        
        // metadata: MNetworkEnable
        int32_t m_iRecoilIndex; // 0xde0        
        // metadata: MNetworkEnable
        float m_flRecoilIndex; // 0xde4        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnWeaponBurstModeNetworkChange"
        bool m_bBurstMode; // 0xde8        
        [[maybe_unused]] std::uint8_t pad_0xde9[0x3]; // 0xde9
        // metadata: MNetworkEnable
        client::GameTick_t m_nPostponeFireReadyTicks; // 0xdec        
        // metadata: MNetworkEnable
        float m_flPostponeFireReadyFrac; // 0xdf0        
        // metadata: MNetworkEnable
        bool m_bInReload; // 0xdf4        
        // metadata: MNetworkEnable
        bool m_bReloadVisuallyComplete; // 0xdf5        
        [[maybe_unused]] std::uint8_t pad_0xdf6[0x2]; // 0xdf6
        // metadata: MNetworkEnable
        client::GameTime_t m_flDroppedAtTime; // 0xdf8        
        // metadata: MNetworkEnable
        bool m_bIsHauledBack; // 0xdfc        
        // metadata: MNetworkEnable
        bool m_bSilencerOn; // 0xdfd        
        [[maybe_unused]] std::uint8_t pad_0xdfe[0x2]; // 0xdfe
        // metadata: MNetworkEnable
        client::GameTime_t m_flTimeSilencerSwitchComplete; // 0xe00        
        // metadata: MNetworkEnable
        int32_t m_iOriginalTeamNumber; // 0xe04        
        // metadata: MNetworkEnable
        int32_t m_iMostRecentTeamNumber; // 0xe08        
        // metadata: MNetworkEnable
        bool m_bDroppedNearBuyZone; // 0xe0c        
        [[maybe_unused]] std::uint8_t pad_0xe0d[0x3]; // 0xe0d
        float m_flNextAttackRenderTimeOffset; // 0xe10        
        [[maybe_unused]] std::uint8_t pad_0xe14[0x14]; // 0xe14
        bool m_bCanBePickedUp; // 0xe28        
        bool m_bUseCanOverrideNextOwnerTouchTime; // 0xe29        
        [[maybe_unused]] std::uint8_t pad_0xe2a[0x2]; // 0xe2a
        client::GameTime_t m_nextOwnerTouchTime; // 0xe2c        
        client::GameTime_t m_nextPrevOwnerTouchTime; // 0xe30        
        [[maybe_unused]] std::uint8_t pad_0xe34[0x4]; // 0xe34
        // metadata: MNetworkEnable
        // m_hPrevOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSPlayerPawn> m_hPrevOwner;
        char m_hPrevOwner[0x4]; // 0xe38        
        // metadata: MNetworkEnable
        client::GameTick_t m_nDropTick; // 0xe3c        
        [[maybe_unused]] std::uint8_t pad_0xe40[0x1c]; // 0xe40
        bool m_donated; // 0xe5c        
        [[maybe_unused]] std::uint8_t pad_0xe5d[0x3]; // 0xe5d
        // metadata: MNetworkEnable
        client::GameTime_t m_fLastShotTime; // 0xe60        
        bool m_bWasOwnedByCT; // 0xe64        
        bool m_bWasOwnedByTerrorist; // 0xe65        
        bool m_bFiredOutOfAmmoEvent; // 0xe66        
        [[maybe_unused]] std::uint8_t pad_0xe67[0x1]; // 0xe67
        int32_t m_numRemoveUnownedWeaponThink; // 0xe68        
        [[maybe_unused]] std::uint8_t pad_0xe6c[0x4]; // 0xe6c
        server::CIronSightController m_IronSightController; // 0xe70        
        // metadata: MNetworkEnable
        int32_t m_iIronSightMode; // 0xe88        
        client::GameTime_t m_flLastLOSTraceFailureTime; // 0xe8c        
        // metadata: MNetworkEnable
        int32_t m_iNumEmptyAttacks; // 0xe90        
        float m_flWatTickOffset; // 0xe94        
        
        // Datamap fields:
        // void CCSWeaponBaseDefaultTouch; // 0x0
        // void CCSWeaponBaseRemoveUnownedWeaponThink; // 0x0
        // void InputToggleCanBePickedUp; // 0x0
        // float InputSetAmmoAmount; // 0x0
        // int32_t InputSetReserveAmmoAmount; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSWeaponBase because it is not a standard-layout class
    static_assert(sizeof(CCSWeaponBase) == 0xe98);
};
