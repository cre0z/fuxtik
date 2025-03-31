#pragma once

#include <cstddef>

namespace Offsets
{
    constexpr std::ptrdiff_t dwLocalPlayerController = 0x1A89E90;
    constexpr std::ptrdiff_t dwLocalPlayerPawn = 0x188CF70;

    constexpr std::ptrdiff_t dwEntityList = 0x1A38800;
    constexpr std::ptrdiff_t dwViewMatrix = 0x1AA45F0;
    constexpr std::ptrdiff_t dwViewAngles = 0x1AAE880;

    constexpr std::ptrdiff_t dwNetworkGameClient = 0x53FCE0;
    constexpr std::ptrdiff_t dwNetworkGameClient_signOnState = 0x228;

    constexpr std::ptrdiff_t m_hPlayerPawn = 0x814;
    constexpr std::ptrdiff_t m_iHealth = 0x344;
    constexpr std::ptrdiff_t m_iTeamNum = 0x3E3;
    constexpr std::ptrdiff_t m_pClippingWeapon = 0x13A0;
    constexpr std::ptrdiff_t m_vOldOrigin = 0x1324;
    constexpr std::ptrdiff_t m_aimPunchAngle = 0x1584;

    constexpr std::ptrdiff_t m_bIsDefusing = 0x23EA;

    constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x1764;
    constexpr std::ptrdiff_t m_iAmmo = 0x60;
    constexpr std::ptrdiff_t m_iClip1 = 0x1678;
    constexpr std::ptrdiff_t m_iClip2 = 0x167C;

    constexpr std::ptrdiff_t m_entitySpottedState = 0x23D0;
    constexpr std::ptrdiff_t m_bSpottedByMask = 0xC;

    constexpr std::ptrdiff_t m_fFlags = 0x3EC;

	namespace Buttons
	{
        constexpr std::ptrdiff_t Attack = 0x1885770;
        constexpr std::ptrdiff_t Attack2 = 0x1885800;
        constexpr std::ptrdiff_t Back = 0x1885A40;
        constexpr std::ptrdiff_t Duck = 0x1885D10;
        constexpr std::ptrdiff_t Forward = 0x18859B0;
		constexpr std::ptrdiff_t Jump = 0x1885C80;
        constexpr std::ptrdiff_t Left = 0x1885AD0;
        constexpr std::ptrdiff_t LookAtWeapon = 0x1AAE3D0;
        constexpr std::ptrdiff_t Reload = 0x18856E0;
        constexpr std::ptrdiff_t Right = 0x1885B60;
        constexpr std::ptrdiff_t ShowScores = 0x1AAE2B0;
        constexpr std::ptrdiff_t Sprint = 0x1885650;
        constexpr std::ptrdiff_t TurnLeft = 0x1885890;
        constexpr std::ptrdiff_t TurnRight = 0x1885920;
        constexpr std::ptrdiff_t Use = 0x1885BF0;
        constexpr std::ptrdiff_t Zoom = 0x1AAE340;
	}

    namespace C_CSWeaponBase {
        constexpr std::ptrdiff_t m_flFireSequenceStartTime = 0x16DC; // float32
        constexpr std::ptrdiff_t m_nFireSequenceStartTimeChange = 0x16E0; // int32
        constexpr std::ptrdiff_t m_nFireSequenceStartTimeAck = 0x16E4; // int32
        constexpr std::ptrdiff_t m_ePlayerFireEvent = 0x16E8; // PlayerAnimEvent_t
        constexpr std::ptrdiff_t m_ePlayerFireEventAttackType = 0x16EC; // WeaponAttackType_t
        constexpr std::ptrdiff_t m_seqIdle = 0x16F0; // HSequence
        constexpr std::ptrdiff_t m_seqFirePrimary = 0x16F4; // HSequence
        constexpr std::ptrdiff_t m_seqFireSecondary = 0x16F8; // HSequence
        constexpr std::ptrdiff_t m_thirdPersonFireSequences = 0x1700; // CUtlVector<HSequence>
        constexpr std::ptrdiff_t m_hCurrentThirdPersonSequence = 0x1718; // HSequence
        constexpr std::ptrdiff_t m_nSilencerBoneIndex = 0x171C; // int32
        constexpr std::ptrdiff_t m_thirdPersonSequences = 0x1720; // HSequence[7]
        constexpr std::ptrdiff_t m_ClientPreviousWeaponState = 0x1758; // CSWeaponState_t
        constexpr std::ptrdiff_t m_iState = 0x175C; // CSWeaponState_t
        constexpr std::ptrdiff_t m_flCrosshairDistance = 0x1760; // float32
        constexpr std::ptrdiff_t m_iAmmoLastCheck = 0x1764; // int32
        constexpr std::ptrdiff_t m_iAlpha = 0x1768; // int32
        constexpr std::ptrdiff_t m_iScopeTextureID = 0x176C; // int32
        constexpr std::ptrdiff_t m_iCrosshairTextureID = 0x1770; // int32
        constexpr std::ptrdiff_t m_flGunAccuracyPositionDeprecated = 0x1774; // float32
        constexpr std::ptrdiff_t m_nLastEmptySoundCmdNum = 0x1778; // int32
        constexpr std::ptrdiff_t m_nViewModelIndex = 0x177C; // uint32
        constexpr std::ptrdiff_t m_bReloadsWithClips = 0x1780; // bool
        constexpr std::ptrdiff_t m_flTimeWeaponIdle = 0x1784; // GameTime_t
        constexpr std::ptrdiff_t m_bFireOnEmpty = 0x1788; // bool
        constexpr std::ptrdiff_t m_OnPlayerPickup = 0x1790; // CEntityIOOutput
        constexpr std::ptrdiff_t m_weaponMode = 0x17B8; // CSWeaponMode
        constexpr std::ptrdiff_t m_flTurningInaccuracyDelta = 0x17BC; // float32
        constexpr std::ptrdiff_t m_vecTurningInaccuracyEyeDirLast = 0x17C0; // Vector
        constexpr std::ptrdiff_t m_flTurningInaccuracy = 0x17CC; // float32
        constexpr std::ptrdiff_t m_fAccuracyPenalty = 0x17D0; // float32
        constexpr std::ptrdiff_t m_flLastAccuracyUpdateTime = 0x17D4; // GameTime_t
        constexpr std::ptrdiff_t m_fAccuracySmoothedForZoom = 0x17D8; // float32
        constexpr std::ptrdiff_t m_fScopeZoomEndTime = 0x17DC; // GameTime_t
        constexpr std::ptrdiff_t m_iRecoilIndex = 0x17E0; // int32
        constexpr std::ptrdiff_t m_flRecoilIndex = 0x17E4; // float32
        constexpr std::ptrdiff_t m_bBurstMode = 0x17E8; // bool
        constexpr std::ptrdiff_t m_flLastBurstModeChangeTime = 0x17EC; // GameTime_t
        constexpr std::ptrdiff_t m_nPostponeFireReadyTicks = 0x17F0; // GameTick_t
        constexpr std::ptrdiff_t m_flPostponeFireReadyFrac = 0x17F4; // float32
        constexpr std::ptrdiff_t m_bInReload = 0x17F8; // bool
        constexpr std::ptrdiff_t m_bReloadVisuallyComplete = 0x17F9; // bool
        constexpr std::ptrdiff_t m_flDroppedAtTime = 0x17FC; // GameTime_t
        constexpr std::ptrdiff_t m_bIsHauledBack = 0x1800; // bool
        constexpr std::ptrdiff_t m_bSilencerOn = 0x1801; // bool
        constexpr std::ptrdiff_t m_flTimeSilencerSwitchComplete = 0x1804; // GameTime_t
        constexpr std::ptrdiff_t m_iOriginalTeamNumber = 0x1808; // int32
        constexpr std::ptrdiff_t m_iMostRecentTeamNumber = 0x180C; // int32
        constexpr std::ptrdiff_t m_bDroppedNearBuyZone = 0x1810; // bool
        constexpr std::ptrdiff_t m_flNextAttackRenderTimeOffset = 0x1814; // float32
        constexpr std::ptrdiff_t m_bClearWeaponIdentifyingUGC = 0x18B0; // bool
        constexpr std::ptrdiff_t m_bVisualsDataSet = 0x18B1; // bool
        constexpr std::ptrdiff_t m_bOldFirstPersonSpectatedState = 0x18B2; // bool
        constexpr std::ptrdiff_t m_bUIWeapon = 0x18B3; // bool
        constexpr std::ptrdiff_t m_nCustomEconReloadEventId = 0x18B4; // int32
        constexpr std::ptrdiff_t m_nextPrevOwnerUseTime = 0x18C0; // GameTime_t
        constexpr std::ptrdiff_t m_hPrevOwner = 0x18C4; // CHandle<C_CSPlayerPawn>
        constexpr std::ptrdiff_t m_nDropTick = 0x18C8; // GameTick_t
        constexpr std::ptrdiff_t m_donated = 0x18EC; // bool
        constexpr std::ptrdiff_t m_fLastShotTime = 0x18F0; // GameTime_t
        constexpr std::ptrdiff_t m_bWasOwnedByCT = 0x18F4; // bool
        constexpr std::ptrdiff_t m_bWasOwnedByTerrorist = 0x18F5; // bool
        constexpr std::ptrdiff_t m_gunHeat = 0x18F8; // float32
        constexpr std::ptrdiff_t m_smokeAttachments = 0x18FC; // uint32
        constexpr std::ptrdiff_t m_lastSmokeTime = 0x1900; // GameTime_t
        constexpr std::ptrdiff_t m_flNextClientFireBulletTime = 0x1904; // float32
        constexpr std::ptrdiff_t m_flNextClientFireBulletTime_Repredict = 0x1908; // float32
        constexpr std::ptrdiff_t m_IronSightController = 0x19E0; // C_IronSightController
        constexpr std::ptrdiff_t m_iIronSightMode = 0x1A90; // int32
        constexpr std::ptrdiff_t m_flLastLOSTraceFailureTime = 0x1AA0; // GameTime_t
        constexpr std::ptrdiff_t m_iNumEmptyAttacks = 0x1AA4; // int32
        constexpr std::ptrdiff_t m_flLastMagDropRequestTime = 0x1B00; // GameTime_t
        constexpr std::ptrdiff_t m_flWatTickOffset = 0x1B04; // float32
    }

    namespace C_BaseEntity {
        constexpr std::ptrdiff_t m_iHealth = 836;
        constexpr std::ptrdiff_t m_iTeamNum = 995;
        constexpr std::ptrdiff_t m_iIDEntIndex = 5208;

        constexpr std::ptrdiff_t m_vecViewOffset = 0xCB0;

        constexpr std::ptrdiff_t m_pGameSceneNode = 0x328;
    }

    namespace CGameSceneNode {
        constexpr std::ptrdiff_t m_vecAbsOrigin = 0xD0;

        namespace CSkeletonInstance {
            constexpr std::ptrdiff_t m_modelState = 0x170;
        }
    }

    constexpr std::ptrdiff_t m_hMyWeapons = 0x40;
    constexpr std::ptrdiff_t m_hActiveWeapon = 0x58;
    constexpr std::ptrdiff_t m_hLastWeapon = 0x5C;

    constexpr std::ptrdiff_t m_iItemDefinitionIndex = 0x1BA;
    constexpr std::ptrdiff_t m_nFallbackPaintKit = 0x15F8;
    constexpr std::ptrdiff_t m_iItemIDHigh = 0x1D0;
    constexpr std::ptrdiff_t m_flFallbackWear = 0x1600;
}