#pragma once
#include "source2sdk/client/CSPlayerBlockingUseAction_t.hpp"
#include "source2sdk/client/C_CSPlayerPawnBase.hpp"
#include "source2sdk/client/C_EconItemView.hpp"
#include "source2sdk/client/EntitySpottedState_t.hpp"
#include "source2sdk/client/GameTick_t.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/PredictedDamageTag_t.hpp"
#include "source2sdk/client/loadout_slot_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CCSPlayer_ActionTrackingServices;
};

namespace source2sdk::client
{
    class CCSPlayer_BulletServices;
};

namespace source2sdk::client
{
    class CCSPlayer_BuyServices;
};

namespace source2sdk::client
{
    class CCSPlayer_GlowServices;
};

namespace source2sdk::client
{
    class CCSPlayer_HostageServices;
};

namespace source2sdk::client
{
    class C_BulletHitModel;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x23c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CCSPlayer_BulletServices * m_pBulletServices"
    // static metadata: MNetworkVarNames "CCSPlayer_HostageServices * m_pHostageServices"
    // static metadata: MNetworkVarNames "CCSPlayer_BuyServices * m_pBuyServices"
    // static metadata: MNetworkVarNames "CCSPlayer_GlowServices * m_pGlowServices"
    // static metadata: MNetworkVarNames "CCSPlayer_ActionTrackingServices * m_pActionTrackingServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_UseServices m_pUseServices"
    // static metadata: MNetworkIncludeByName "m_pUseServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_ItemServices m_pItemServices"
    // static metadata: MNetworkIncludeByName "m_pItemServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_MovementServices m_pMovementServices"
    // static metadata: MNetworkIncludeByName "m_pMovementServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_WaterServices m_pWaterServices"
    // static metadata: MNetworkIncludeByName "m_pWaterServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_ViewModelServices m_pViewModelServices"
    // static metadata: MNetworkIncludeByName "m_pViewModelServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_CameraServices m_pCameraServices"
    // static metadata: MNetworkIncludeByName "m_pCameraServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_WeaponServices m_pWeaponServices"
    // static metadata: MNetworkIncludeByName "m_pWeaponServices"
    // static metadata: MNetworkIncludeByName "m_ArmorValue"
    // static metadata: MNetworkVarNames "GameTime_t m_flHealthShotBoostExpirationTime"
    // static metadata: MNetworkVarNames "bool m_bHasFemaleVoice"
    // static metadata: MNetworkVarNames "char m_szLastPlaceName"
    // static metadata: MNetworkVarNames "bool m_bInBuyZone"
    // static metadata: MNetworkVarNames "QAngle m_aimPunchAngle"
    // static metadata: MNetworkVarNames "QAngle m_aimPunchAngleVel"
    // static metadata: MNetworkVarNames "int m_aimPunchTickBase"
    // static metadata: MNetworkVarNames "float m_aimPunchTickFraction"
    // static metadata: MNetworkVarNames "bool m_bInHostageRescueZone"
    // static metadata: MNetworkVarNames "bool m_bInBombZone"
    // static metadata: MNetworkVarNames "bool m_bIsBuyMenuOpen"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeOfLastInjury"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextSprayDecalTime"
    // static metadata: MNetworkVarNames "int m_iRetakesOffering"
    // static metadata: MNetworkVarNames "int m_iRetakesOfferingCard"
    // static metadata: MNetworkVarNames "bool m_bRetakesHasDefuseKit"
    // static metadata: MNetworkVarNames "bool m_bRetakesMVPLastRound"
    // static metadata: MNetworkVarNames "int m_iRetakesMVPBoostItem"
    // static metadata: MNetworkVarNames "loadout_slot_t m_RetakesMVPBoostExtraUtility"
    // static metadata: MNetworkVarNames "CEconItemView m_EconGloves"
    // static metadata: MNetworkVarNames "uint8 m_nEconGlovesChanged"
    // static metadata: MNetworkVarNames "int m_nRagdollDamageBone"
    // static metadata: MNetworkVarNames "Vector m_vRagdollDamageForce"
    // static metadata: MNetworkVarNames "Vector m_vRagdollDamagePosition"
    // static metadata: MNetworkVarNames "char m_szRagdollDamageWeaponName"
    // static metadata: MNetworkVarNames "bool m_bRagdollDamageHeadshot"
    // static metadata: MNetworkVarNames "Vector m_vRagdollServerOrigin"
    // static metadata: MNetworkReplayCompatField "m_bClientRagdoll"
    // static metadata: MNetworkVarNames "QAngle m_qDeathEyeAngles"
    // static metadata: MNetworkVarNames "bool m_bLeftHanded"
    // static metadata: MNetworkVarNames "GameTime_t m_fSwitchedHandednessTime"
    // static metadata: MNetworkVarNames "float m_flViewmodelOffsetX"
    // static metadata: MNetworkVarNames "float m_flViewmodelOffsetY"
    // static metadata: MNetworkVarNames "float m_flViewmodelOffsetZ"
    // static metadata: MNetworkVarNames "float m_flViewmodelFOV"
    // static metadata: MNetworkVarNames "uint32 m_vecPlayerPatchEconIndices"
    // static metadata: MNetworkVarNames "Color m_GunGameImmunityColor"
    // static metadata: MNetworkVarNames "bool m_bIsWalking"
    // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
    // static metadata: MNetworkVarNames "bool m_bIsScoped"
    // static metadata: MNetworkVarNames "bool m_bResumeZoom"
    // static metadata: MNetworkVarNames "bool m_bIsDefusing"
    // static metadata: MNetworkVarNames "bool m_bIsGrabbingHostage"
    // static metadata: MNetworkVarNames "CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress"
    // static metadata: MNetworkVarNames "GameTime_t m_flEmitSoundTime"
    // static metadata: MNetworkVarNames "bool m_bInNoDefuseArea"
    // static metadata: MNetworkVarNames "int m_nWhichBombZone"
    // static metadata: MNetworkVarNames "int m_iShotsFired"
    // static metadata: MNetworkVarNames "float m_flFlinchStack"
    // static metadata: MNetworkVarNames "float m_flVelocityModifier"
    // static metadata: MNetworkVarNames "float m_flHitHeading"
    // static metadata: MNetworkVarNames "int m_nHitBodyPart"
    // static metadata: MNetworkVarNames "bool m_bWaitForNoAttack"
    // static metadata: MNetworkVarNames "bool m_bKilledByHeadshot"
    // static metadata: MNetworkVarNames "int32 m_ArmorValue"
    // static metadata: MNetworkVarNames "uint16 m_unCurrentEquipmentValue"
    // static metadata: MNetworkVarNames "uint16 m_unRoundStartEquipmentValue"
    // static metadata: MNetworkVarNames "uint16 m_unFreezetimeEndEquipmentValue"
    // static metadata: MNetworkVarNames "CEntityIndex m_nLastKillerIndex"
    // static metadata: MNetworkVarNames "PredictedDamageTag_t m_PredictedDamageTags"
    #pragma pack(push, 1)
    class C_CSPlayerPawn : public client::C_CSPlayerPawnBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x1460[0x8]; // 0x1460
        // metadata: MNetworkEnable
        client::CCSPlayer_BulletServices* m_pBulletServices; // 0x1468        
        // metadata: MNetworkEnable
        client::CCSPlayer_HostageServices* m_pHostageServices; // 0x1470        
        // metadata: MNetworkEnable
        client::CCSPlayer_BuyServices* m_pBuyServices; // 0x1478        
        // metadata: MNetworkEnable
        client::CCSPlayer_GlowServices* m_pGlowServices; // 0x1480        
        // metadata: MNetworkEnable
        client::CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0x1488        
        // metadata: MNetworkEnable
        client::GameTime_t m_flHealthShotBoostExpirationTime; // 0x1490        
        client::GameTime_t m_flLastFiredWeaponTime; // 0x1494        
        // metadata: MNetworkEnable
        bool m_bHasFemaleVoice; // 0x1498        
        [[maybe_unused]] std::uint8_t pad_0x1499[0x3]; // 0x1499
        float m_flLandingTimeSeconds; // 0x149c        
        float m_flOldFallVelocity; // 0x14a0        
        // metadata: MNetworkEnable
        char m_szLastPlaceName[18]; // 0x14a4        
        bool m_bPrevDefuser; // 0x14b6        
        bool m_bPrevHelmet; // 0x14b7        
        int32_t m_nPrevArmorVal; // 0x14b8        
        int32_t m_nPrevGrenadeAmmoCount; // 0x14bc        
        uint32_t m_unPreviousWeaponHash; // 0x14c0        
        uint32_t m_unWeaponHash; // 0x14c4        
        // metadata: MNetworkEnable
        bool m_bInBuyZone; // 0x14c8        
        bool m_bPreviouslyInBuyZone; // 0x14c9        
        [[maybe_unused]] std::uint8_t pad_0x14ca[0x2]; // 0x14ca
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "32"
        QAngle m_aimPunchAngle; // 0x14cc        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "32"
        QAngle m_aimPunchAngleVel; // 0x14d8        
        // metadata: MNetworkEnable
        int32_t m_aimPunchTickBase; // 0x14e4        
        // metadata: MNetworkEnable
        float m_aimPunchTickFraction; // 0x14e8        
        [[maybe_unused]] std::uint8_t pad_0x14ec[0x4]; // 0x14ec
        // m_aimPunchCache has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<QAngle> m_aimPunchCache;
        char m_aimPunchCache[0x18]; // 0x14f0        
        [[maybe_unused]] std::uint8_t pad_0x1508[0x8]; // 0x1508
        bool m_bInLanding; // 0x1510        
        [[maybe_unused]] std::uint8_t pad_0x1511[0x3]; // 0x1511
        float m_flLandingStartTime; // 0x1514        
        // metadata: MNetworkEnable
        bool m_bInHostageRescueZone; // 0x1518        
        // metadata: MNetworkEnable
        bool m_bInBombZone; // 0x1519        
        // metadata: MNetworkEnable
        bool m_bIsBuyMenuOpen; // 0x151a        
        [[maybe_unused]] std::uint8_t pad_0x151b[0x1]; // 0x151b
        // metadata: MNetworkEnable
        client::GameTime_t m_flTimeOfLastInjury; // 0x151c        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::GameTime_t m_flNextSprayDecalTime; // 0x1520        
        [[maybe_unused]] std::uint8_t pad_0x1524[0x12c]; // 0x1524
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRetakesOfferingChanged"
        int32_t m_iRetakesOffering; // 0x1650        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnRetakesOfferingCardChanged"
        int32_t m_iRetakesOfferingCard; // 0x1654        
        // metadata: MNetworkEnable
        bool m_bRetakesHasDefuseKit; // 0x1658        
        // metadata: MNetworkEnable
        bool m_bRetakesMVPLastRound; // 0x1659        
        [[maybe_unused]] std::uint8_t pad_0x165a[0x2]; // 0x165a
        // metadata: MNetworkEnable
        int32_t m_iRetakesMVPBoostItem; // 0x165c        
        // metadata: MNetworkEnable
        client::loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0x1660        
        [[maybe_unused]] std::uint8_t pad_0x1664[0x1c]; // 0x1664
        bool m_bNeedToReApplyGloves; // 0x1680        
        [[maybe_unused]] std::uint8_t pad_0x1681[0x7]; // 0x1681
        // metadata: MNetworkEnable
        client::C_EconItemView m_EconGloves; // 0x1688        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnEconGlovesChanged"
        uint8_t m_nEconGlovesChanged; // 0x1ad0        
        bool m_bMustSyncRagdollState; // 0x1ad1        
        [[maybe_unused]] std::uint8_t pad_0x1ad2[0x2]; // 0x1ad2
        // metadata: MNetworkEnable
        int32_t m_nRagdollDamageBone; // 0x1ad4        
        // metadata: MNetworkEnable
        Vector m_vRagdollDamageForce; // 0x1ad8        
        // metadata: MNetworkEnable
        Vector m_vRagdollDamagePosition; // 0x1ae4        
        // metadata: MNetworkEnable
        char m_szRagdollDamageWeaponName[64]; // 0x1af0        
        // metadata: MNetworkEnable
        bool m_bRagdollDamageHeadshot; // 0x1b30        
        [[maybe_unused]] std::uint8_t pad_0x1b31[0x3]; // 0x1b31
        // metadata: MNetworkEnable
        Vector m_vRagdollServerOrigin; // 0x1b34        
        [[maybe_unused]] std::uint8_t pad_0x1b40[0x608]; // 0x1b40
        bool m_bLastHeadBoneTransformIsValid; // 0x2148        
        [[maybe_unused]] std::uint8_t pad_0x2149[0x3]; // 0x2149
        client::GameTime_t m_lastLandTime; // 0x214c        
        bool m_bOnGroundLastTick; // 0x2150        
        [[maybe_unused]] std::uint8_t pad_0x2151[0x1b]; // 0x2151
        // metadata: MNetworkEnable
        QAngle m_qDeathEyeAngles; // 0x216c        
        bool m_bSkipOneHeadConstraintUpdate; // 0x2178        
        // metadata: MNetworkEnable
        bool m_bLeftHanded; // 0x2179        
        [[maybe_unused]] std::uint8_t pad_0x217a[0x2]; // 0x217a
        // metadata: MNetworkEnable
        client::GameTime_t m_fSwitchedHandednessTime; // 0x217c        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-2,000000"
        // metadata: MNetworkMaxValue "2,500000"
        float m_flViewmodelOffsetX; // 0x2180        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-2,000000"
        // metadata: MNetworkMaxValue "2,000000"
        float m_flViewmodelOffsetY; // 0x2184        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-2,000000"
        // metadata: MNetworkMaxValue "2,000000"
        float m_flViewmodelOffsetZ; // 0x2188        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "60,000000"
        // metadata: MNetworkMaxValue "68,000000"
        float m_flViewmodelFOV; // 0x218c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RecvProxy_PatchEconIndices"
        uint32_t m_vecPlayerPatchEconIndices[5]; // 0x2190        
        [[maybe_unused]] std::uint8_t pad_0x21a4[0x24]; // 0x21a4
        // metadata: MNetworkEnable
        Color m_GunGameImmunityColor; // 0x21c8        
        [[maybe_unused]] std::uint8_t pad_0x21cc[0x4c]; // 0x21cc
        // m_vecBulletHitModels has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::C_BulletHitModel*> m_vecBulletHitModels;
        char m_vecBulletHitModels[0x18]; // 0x2218        
        // metadata: MNetworkEnable
        bool m_bIsWalking; // 0x2230        
        [[maybe_unused]] std::uint8_t pad_0x2231[0x7]; // 0x2231
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle_precise"
        // metadata: MNetworkChangeCallback "OnThirdPersonHeadingChanged"
        // metadata: MNetworkPriority "32"
        QAngle m_thirdPersonHeading; // 0x2238        
        [[maybe_unused]] std::uint8_t pad_0x2244[0xc]; // 0x2244
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSlopeDropOffsetChanged"
        // metadata: MNetworkPriority "32"
        float m_flSlopeDropOffset; // 0x2250        
        [[maybe_unused]] std::uint8_t pad_0x2254[0xc]; // 0x2254
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnSlopeDropHeightChanged"
        // metadata: MNetworkPriority "32"
        float m_flSlopeDropHeight; // 0x2260        
        [[maybe_unused]] std::uint8_t pad_0x2264[0xc]; // 0x2264
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnHeadConstraintChanged"
        // metadata: MNetworkPriority "32"
        Vector m_vHeadConstraintOffset; // 0x2270        
        [[maybe_unused]] std::uint8_t pad_0x227c[0xc]; // 0x227c
        // metadata: MNetworkEnable
        client::EntitySpottedState_t m_entitySpottedState; // 0x2288        
        // metadata: MNetworkEnable
        bool m_bIsScoped; // 0x22a0        
        // metadata: MNetworkEnable
        bool m_bResumeZoom; // 0x22a1        
        // metadata: MNetworkEnable
        bool m_bIsDefusing; // 0x22a2        
        // metadata: MNetworkEnable
        bool m_bIsGrabbingHostage; // 0x22a3        
        // metadata: MNetworkEnable
        client::CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x22a4        
        // metadata: MNetworkEnable
        client::GameTime_t m_flEmitSoundTime; // 0x22a8        
        // metadata: MNetworkEnable
        bool m_bInNoDefuseArea; // 0x22ac        
        [[maybe_unused]] std::uint8_t pad_0x22ad[0x3]; // 0x22ad
        // metadata: MNetworkEnable
        int32_t m_nWhichBombZone; // 0x22b0        
        // metadata: MNetworkEnable
        int32_t m_iShotsFired; // 0x22b4        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flFlinchStack; // 0x22b8        
        // metadata: MNetworkEnable
        float m_flVelocityModifier; // 0x22bc        
        // metadata: MNetworkEnable
        float m_flHitHeading; // 0x22c0        
        // metadata: MNetworkEnable
        int32_t m_nHitBodyPart; // 0x22c4        
        // metadata: MNetworkEnable
        bool m_bWaitForNoAttack; // 0x22c8        
        [[maybe_unused]] std::uint8_t pad_0x22c9[0x3]; // 0x22c9
        float m_ignoreLadderJumpTime; // 0x22cc        
        [[maybe_unused]] std::uint8_t pad_0x22d0[0x1]; // 0x22d0
        // metadata: MNetworkEnable
        bool m_bKilledByHeadshot; // 0x22d1        
        [[maybe_unused]] std::uint8_t pad_0x22d2[0x2]; // 0x22d2
        // metadata: MNetworkEnable
        int32_t m_ArmorValue; // 0x22d4        
        // metadata: MNetworkEnable
        uint16_t m_unCurrentEquipmentValue; // 0x22d8        
        // metadata: MNetworkEnable
        uint16_t m_unRoundStartEquipmentValue; // 0x22da        
        // metadata: MNetworkEnable
        uint16_t m_unFreezetimeEndEquipmentValue; // 0x22dc        
        [[maybe_unused]] std::uint8_t pad_0x22de[0x2]; // 0x22de
        // metadata: MNetworkEnable
        CEntityIndex m_nLastKillerIndex; // 0x22e0        
        bool m_bOldIsScoped; // 0x22e4        
        bool m_bHasDeathInfo; // 0x22e5        
        [[maybe_unused]] std::uint8_t pad_0x22e6[0x2]; // 0x22e6
        float m_flDeathInfoTime; // 0x22e8        
        Vector m_vecDeathInfoOrigin; // 0x22ec        
        client::GameTime_t m_grenadeParameterStashTime; // 0x22f8        
        bool m_bGrenadeParametersStashed; // 0x22fc        
        [[maybe_unused]] std::uint8_t pad_0x22fd[0x3]; // 0x22fd
        QAngle m_angStashedShootAngles; // 0x2300        
        Vector m_vecStashedGrenadeThrowPosition; // 0x230c        
        Vector m_vecStashedVelocity; // 0x2318        
        QAngle m_angShootAngleHistory[2]; // 0x2324        
        Vector m_vecThrowPositionHistory[2]; // 0x233c        
        Vector m_vecVelocityHistory[2]; // 0x2354        
        [[maybe_unused]] std::uint8_t pad_0x236c[0x4]; // 0x236c
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // metadata: MNetworkChangeCallback "OnPredictedDamageTagsChanged"
        // m_PredictedDamageTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::PredictedDamageTag_t> m_PredictedDamageTags;
        char m_PredictedDamageTags[0x50]; // 0x2370        
        client::GameTick_t m_nPrevHighestReceivedDamageTagTick; // 0x23c0        
        int32_t m_nHighestAppliedDamageTagTick; // 0x23c4        
        
        // Datamap fields:
        // CCSPlayer_ItemServices m_pItemServices; // 0x1100
        // CCSPlayer_UseServices m_pUseServices; // 0x1120
        // CCSPlayer_WaterServices m_pWaterServices; // 0x1118
        // CCSPlayer_MovementServices m_pMovementServices; // 0x1138
        // CCSPlayer_ViewModelServices m_pViewModelServices; // 0x12b8
        // CCSPlayer_WeaponServices m_pWeaponServices; // 0x10f8
        // CCSPlayer_CameraServices m_pCameraServices; // 0x1130
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(C_CSPlayerPawn) == 0x23c8);
};
