#pragma once
#include "source2sdk/client/CSPlayerBlockingUseAction_t.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/loadout_slot_t.hpp"
#include "source2sdk/server/CCSPlayerPawnBase.hpp"
#include "source2sdk/server/CEconItemView.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
#include "source2sdk/server/PredictedDamageTag_t.hpp"
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
    class CCSBot;
};

namespace source2sdk::server
{
    class CCSPlayer_ActionTrackingServices;
};

namespace source2sdk::server
{
    class CCSPlayer_BulletServices;
};

namespace source2sdk::server
{
    class CCSPlayer_BuyServices;
};

namespace source2sdk::server
{
    class CCSPlayer_DamageReactServices;
};

namespace source2sdk::server
{
    class CCSPlayer_HostageServices;
};

namespace source2sdk::server
{
    class CCSPlayer_RadioServices;
};

namespace source2sdk::server
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x1a10
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_WeaponServices m_pWeaponServices"
    // static metadata: MNetworkIncludeByName "m_pWeaponServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_ItemServices m_pItemServices"
    // static metadata: MNetworkIncludeByName "m_pItemServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_UseServices m_pUseServices"
    // static metadata: MNetworkIncludeByName "m_pUseServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_WaterServices m_pWaterServices"
    // static metadata: MNetworkIncludeByName "m_pWaterServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_MovementServices m_pMovementServices"
    // static metadata: MNetworkIncludeByName "m_pMovementServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_ViewModelServices m_pViewModelServices"
    // static metadata: MNetworkIncludeByName "m_pViewModelServices"
    // static metadata: MNetworkVarTypeOverride "CCSPlayer_CameraServices m_pCameraServices"
    // static metadata: MNetworkIncludeByName "m_pCameraServices"
    // static metadata: MNetworkVarNames "CCSPlayer_BulletServices * m_pBulletServices"
    // static metadata: MNetworkVarNames "CCSPlayer_HostageServices * m_pHostageServices"
    // static metadata: MNetworkVarNames "CCSPlayer_BuyServices * m_pBuyServices"
    // static metadata: MNetworkVarNames "CCSPlayer_ActionTrackingServices * m_pActionTrackingServices"
    // static metadata: MNetworkVarNames "bool m_bHasFemaleVoice"
    // static metadata: MNetworkVarNames "char m_szLastPlaceName"
    // static metadata: MNetworkVarNames "bool m_bInBuyZone"
    // static metadata: MNetworkVarNames "bool m_bInHostageRescueZone"
    // static metadata: MNetworkVarNames "bool m_bInBombZone"
    // static metadata: MNetworkVarNames "int m_iRetakesOffering"
    // static metadata: MNetworkVarNames "int m_iRetakesOfferingCard"
    // static metadata: MNetworkVarNames "bool m_bRetakesHasDefuseKit"
    // static metadata: MNetworkVarNames "bool m_bRetakesMVPLastRound"
    // static metadata: MNetworkVarNames "int m_iRetakesMVPBoostItem"
    // static metadata: MNetworkVarNames "loadout_slot_t m_RetakesMVPBoostExtraUtility"
    // static metadata: MNetworkVarNames "GameTime_t m_flHealthShotBoostExpirationTime"
    // static metadata: MNetworkVarNames "QAngle m_aimPunchAngle"
    // static metadata: MNetworkVarNames "QAngle m_aimPunchAngleVel"
    // static metadata: MNetworkVarNames "int m_aimPunchTickBase"
    // static metadata: MNetworkVarNames "float m_aimPunchTickFraction"
    // static metadata: MNetworkVarNames "bool m_bIsBuyMenuOpen"
    // static metadata: MNetworkVarNames "GameTime_t m_flTimeOfLastInjury"
    // static metadata: MNetworkVarNames "GameTime_t m_flNextSprayDecalTime"
    // static metadata: MNetworkVarNames "int m_nRagdollDamageBone"
    // static metadata: MNetworkVarNames "Vector m_vRagdollDamageForce"
    // static metadata: MNetworkVarNames "Vector m_vRagdollDamagePosition"
    // static metadata: MNetworkVarNames "char m_szRagdollDamageWeaponName"
    // static metadata: MNetworkVarNames "bool m_bRagdollDamageHeadshot"
    // static metadata: MNetworkVarNames "Vector m_vRagdollServerOrigin"
    // static metadata: MNetworkVarNames "CEconItemView m_EconGloves"
    // static metadata: MNetworkVarNames "uint8 m_nEconGlovesChanged"
    // static metadata: MNetworkVarNames "QAngle m_qDeathEyeAngles"
    // static metadata: MNetworkVarNames "bool m_bLeftHanded"
    // static metadata: MNetworkVarNames "GameTime_t m_fSwitchedHandednessTime"
    // static metadata: MNetworkVarNames "float m_flViewmodelOffsetX"
    // static metadata: MNetworkVarNames "float m_flViewmodelOffsetY"
    // static metadata: MNetworkVarNames "float m_flViewmodelOffsetZ"
    // static metadata: MNetworkVarNames "float m_flViewmodelFOV"
    // static metadata: MNetworkVarNames "bool m_bIsWalking"
    // static metadata: MNetworkVarNames "CEntityIndex m_nLastKillerIndex"
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
    // static metadata: MNetworkVarNames "QAngle m_thirdPersonHeading"
    // static metadata: MNetworkVarNames "float m_flSlopeDropOffset"
    // static metadata: MNetworkVarNames "float m_flSlopeDropHeight"
    // static metadata: MNetworkVarNames "Vector m_vHeadConstraintOffset"
    // static metadata: MNetworkVarNames "int32 m_ArmorValue"
    // static metadata: MNetworkVarNames "uint16 m_unCurrentEquipmentValue"
    // static metadata: MNetworkVarNames "uint16 m_unRoundStartEquipmentValue"
    // static metadata: MNetworkVarNames "uint16 m_unFreezetimeEndEquipmentValue"
    // static metadata: MNetworkVarNames "uint32 m_vecPlayerPatchEconIndices"
    // static metadata: MNetworkVarNames "Color m_GunGameImmunityColor"
    // static metadata: MNetworkVarNames "PredictedDamageTag_t m_PredictedDamageTags"
    #pragma pack(push, 1)
    class CCSPlayerPawn : public server::CCSPlayerPawnBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xd10[0x8]; // 0xd10
        // metadata: MNetworkEnable
        server::CCSPlayer_BulletServices* m_pBulletServices; // 0xd18        
        // metadata: MNetworkEnable
        server::CCSPlayer_HostageServices* m_pHostageServices; // 0xd20        
        // metadata: MNetworkEnable
        server::CCSPlayer_BuyServices* m_pBuyServices; // 0xd28        
        // metadata: MNetworkEnable
        server::CCSPlayer_ActionTrackingServices* m_pActionTrackingServices; // 0xd30        
        server::CCSPlayer_RadioServices* m_pRadioServices; // 0xd38        
        server::CCSPlayer_DamageReactServices* m_pDamageReactServices; // 0xd40        
        uint16_t m_nCharacterDefIndex; // 0xd48        
        // metadata: MNetworkEnable
        bool m_bHasFemaleVoice; // 0xd4a        
        [[maybe_unused]] std::uint8_t pad_0xd4b[0x5]; // 0xd4b
        CUtlString m_strVOPrefix; // 0xd50        
        // metadata: MNetworkEnable
        char m_szLastPlaceName[18]; // 0xd58        
        [[maybe_unused]] std::uint8_t pad_0xd6a[0xae]; // 0xd6a
        bool m_bInHostageResetZone; // 0xe18        
        // metadata: MNetworkEnable
        bool m_bInBuyZone; // 0xe19        
        [[maybe_unused]] std::uint8_t pad_0xe1a[0x6]; // 0xe1a
        // m_TouchingBuyZones has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_TouchingBuyZones;
        char m_TouchingBuyZones[0x18]; // 0xe20        
        bool m_bWasInBuyZone; // 0xe38        
        // metadata: MNetworkEnable
        bool m_bInHostageRescueZone; // 0xe39        
        // metadata: MNetworkEnable
        bool m_bInBombZone; // 0xe3a        
        bool m_bWasInHostageRescueZone; // 0xe3b        
        // metadata: MNetworkEnable
        int32_t m_iRetakesOffering; // 0xe3c        
        // metadata: MNetworkEnable
        int32_t m_iRetakesOfferingCard; // 0xe40        
        // metadata: MNetworkEnable
        bool m_bRetakesHasDefuseKit; // 0xe44        
        // metadata: MNetworkEnable
        bool m_bRetakesMVPLastRound; // 0xe45        
        [[maybe_unused]] std::uint8_t pad_0xe46[0x2]; // 0xe46
        // metadata: MNetworkEnable
        int32_t m_iRetakesMVPBoostItem; // 0xe48        
        // metadata: MNetworkEnable
        client::loadout_slot_t m_RetakesMVPBoostExtraUtility; // 0xe4c        
        // metadata: MNetworkEnable
        client::GameTime_t m_flHealthShotBoostExpirationTime; // 0xe50        
        float m_flLandingTimeSeconds; // 0xe54        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "32"
        QAngle m_aimPunchAngle; // 0xe58        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "32"
        QAngle m_aimPunchAngleVel; // 0xe64        
        // metadata: MNetworkEnable
        int32_t m_aimPunchTickBase; // 0xe70        
        // metadata: MNetworkEnable
        float m_aimPunchTickFraction; // 0xe74        
        // m_aimPunchCache has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<QAngle> m_aimPunchCache;
        char m_aimPunchCache[0x18]; // 0xe78        
        // metadata: MNetworkEnable
        bool m_bIsBuyMenuOpen; // 0xe90        
        [[maybe_unused]] std::uint8_t pad_0xe91[0x63f]; // 0xe91
        CTransform m_xLastHeadBoneTransform; // 0x14d0        
        bool m_bLastHeadBoneTransformIsValid; // 0x14f0        
        [[maybe_unused]] std::uint8_t pad_0x14f1[0x3]; // 0x14f1
        client::GameTime_t m_lastLandTime; // 0x14f4        
        bool m_bOnGroundLastTick; // 0x14f8        
        [[maybe_unused]] std::uint8_t pad_0x14f9[0x3]; // 0x14f9
        int32_t m_iPlayerLocked; // 0x14fc        
        [[maybe_unused]] std::uint8_t pad_0x1500[0x4]; // 0x1500
        // metadata: MNetworkEnable
        client::GameTime_t m_flTimeOfLastInjury; // 0x1504        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::GameTime_t m_flNextSprayDecalTime; // 0x1508        
        bool m_bNextSprayDecalTimeExpedited; // 0x150c        
        [[maybe_unused]] std::uint8_t pad_0x150d[0x3]; // 0x150d
        // metadata: MNetworkEnable
        int32_t m_nRagdollDamageBone; // 0x1510        
        // metadata: MNetworkEnable
        Vector m_vRagdollDamageForce; // 0x1514        
        // metadata: MNetworkEnable
        Vector m_vRagdollDamagePosition; // 0x1520        
        // metadata: MNetworkEnable
        char m_szRagdollDamageWeaponName[64]; // 0x152c        
        // metadata: MNetworkEnable
        bool m_bRagdollDamageHeadshot; // 0x156c        
        [[maybe_unused]] std::uint8_t pad_0x156d[0x3]; // 0x156d
        // metadata: MNetworkEnable
        Vector m_vRagdollServerOrigin; // 0x1570        
        [[maybe_unused]] std::uint8_t pad_0x157c[0x4]; // 0x157c
        // metadata: MNetworkEnable
        server::CEconItemView m_EconGloves; // 0x1580        
        // metadata: MNetworkEnable
        uint8_t m_nEconGlovesChanged; // 0x17f8        
        [[maybe_unused]] std::uint8_t pad_0x17f9[0x3]; // 0x17f9
        // metadata: MNetworkEnable
        QAngle m_qDeathEyeAngles; // 0x17fc        
        bool m_bSkipOneHeadConstraintUpdate; // 0x1808        
        // metadata: MNetworkEnable
        bool m_bLeftHanded; // 0x1809        
        [[maybe_unused]] std::uint8_t pad_0x180a[0x2]; // 0x180a
        // metadata: MNetworkEnable
        client::GameTime_t m_fSwitchedHandednessTime; // 0x180c        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-2,000000"
        // metadata: MNetworkMaxValue "2,500000"
        float m_flViewmodelOffsetX; // 0x1810        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-2,000000"
        // metadata: MNetworkMaxValue "2,000000"
        float m_flViewmodelOffsetY; // 0x1814        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "-2,000000"
        // metadata: MNetworkMaxValue "2,000000"
        float m_flViewmodelOffsetZ; // 0x1818        
        // metadata: MNetworkEnable
        // metadata: MNetworkMinValue "60,000000"
        // metadata: MNetworkMaxValue "68,000000"
        float m_flViewmodelFOV; // 0x181c        
        // metadata: MNetworkEnable
        bool m_bIsWalking; // 0x1820        
        [[maybe_unused]] std::uint8_t pad_0x1821[0x3]; // 0x1821
        float m_fLastGivenDefuserTime; // 0x1824        
        float m_fLastGivenBombTime; // 0x1828        
        float m_flDealtDamageToEnemyMostRecentTimestamp; // 0x182c        
        uint32_t m_iDisplayHistoryBits; // 0x1830        
        float m_flLastAttackedTeammate; // 0x1834        
        client::GameTime_t m_allowAutoFollowTime; // 0x1838        
        bool m_bResetArmorNextSpawn; // 0x183c        
        [[maybe_unused]] std::uint8_t pad_0x183d[0x3]; // 0x183d
        // metadata: MNetworkEnable
        CEntityIndex m_nLastKillerIndex; // 0x1840        
        [[maybe_unused]] std::uint8_t pad_0x1844[0x4]; // 0x1844
        // metadata: MNetworkEnable
        server::EntitySpottedState_t m_entitySpottedState; // 0x1848        
        int32_t m_nSpotRules; // 0x1860        
        // metadata: MNetworkEnable
        bool m_bIsScoped; // 0x1864        
        // metadata: MNetworkEnable
        bool m_bResumeZoom; // 0x1865        
        // metadata: MNetworkEnable
        bool m_bIsDefusing; // 0x1866        
        // metadata: MNetworkEnable
        bool m_bIsGrabbingHostage; // 0x1867        
        // metadata: MNetworkEnable
        client::CSPlayerBlockingUseAction_t m_iBlockingUseActionInProgress; // 0x1868        
        // metadata: MNetworkEnable
        client::GameTime_t m_flEmitSoundTime; // 0x186c        
        // metadata: MNetworkEnable
        bool m_bInNoDefuseArea; // 0x1870        
        [[maybe_unused]] std::uint8_t pad_0x1871[0x3]; // 0x1871
        CEntityIndex m_iBombSiteIndex; // 0x1874        
        // metadata: MNetworkEnable
        int32_t m_nWhichBombZone; // 0x1878        
        bool m_bInBombZoneTrigger; // 0x187c        
        bool m_bWasInBombZoneTrigger; // 0x187d        
        [[maybe_unused]] std::uint8_t pad_0x187e[0x2]; // 0x187e
        // metadata: MNetworkEnable
        int32_t m_iShotsFired; // 0x1880        
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        float m_flFlinchStack; // 0x1884        
        // metadata: MNetworkEnable
        float m_flVelocityModifier; // 0x1888        
        // metadata: MNetworkEnable
        float m_flHitHeading; // 0x188c        
        // metadata: MNetworkEnable
        int32_t m_nHitBodyPart; // 0x1890        
        Vector m_vecTotalBulletForce; // 0x1894        
        // metadata: MNetworkEnable
        bool m_bWaitForNoAttack; // 0x18a0        
        [[maybe_unused]] std::uint8_t pad_0x18a1[0x3]; // 0x18a1
        float m_ignoreLadderJumpTime; // 0x18a4        
        // metadata: MNetworkEnable
        bool m_bKilledByHeadshot; // 0x18a8        
        [[maybe_unused]] std::uint8_t pad_0x18a9[0x3]; // 0x18a9
        int32_t m_LastHitBox; // 0x18ac        
        int32_t m_LastHealth; // 0x18b0        
        [[maybe_unused]] std::uint8_t pad_0x18b4[0x4]; // 0x18b4
        server::CCSBot* m_pBot; // 0x18b8        
        bool m_bBotAllowActive; // 0x18c0        
        [[maybe_unused]] std::uint8_t pad_0x18c1[0x3]; // 0x18c1
        // metadata: MNetworkEnable
        // metadata: MNetworkEncoder "qangle_precise"
        // metadata: MNetworkPriority "32"
        QAngle m_thirdPersonHeading; // 0x18c4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        float m_flSlopeDropOffset; // 0x18d0        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        float m_flSlopeDropHeight; // 0x18d4        
        // metadata: MNetworkEnable
        // metadata: MNetworkPriority "32"
        Vector m_vHeadConstraintOffset; // 0x18d8        
        int32_t m_nLastPickupPriority; // 0x18e4        
        float m_flLastPickupPriorityTime; // 0x18e8        
        // metadata: MNetworkEnable
        int32_t m_ArmorValue; // 0x18ec        
        // metadata: MNetworkEnable
        uint16_t m_unCurrentEquipmentValue; // 0x18f0        
        // metadata: MNetworkEnable
        uint16_t m_unRoundStartEquipmentValue; // 0x18f2        
        // metadata: MNetworkEnable
        uint16_t m_unFreezetimeEndEquipmentValue; // 0x18f4        
        [[maybe_unused]] std::uint8_t pad_0x18f6[0x2]; // 0x18f6
        int32_t m_iLastWeaponFireUsercmd; // 0x18f8        
        bool m_bIsSpawning; // 0x18fc        
        [[maybe_unused]] std::uint8_t pad_0x18fd[0xb]; // 0x18fd
        int32_t m_iDeathFlags; // 0x1908        
        bool m_bHasDeathInfo; // 0x190c        
        [[maybe_unused]] std::uint8_t pad_0x190d[0x3]; // 0x190d
        float m_flDeathInfoTime; // 0x1910        
        Vector m_vecDeathInfoOrigin; // 0x1914        
        // metadata: MNetworkEnable
        uint32_t m_vecPlayerPatchEconIndices[5]; // 0x1920        
        // metadata: MNetworkEnable
        Color m_GunGameImmunityColor; // 0x1934        
        client::GameTime_t m_grenadeParameterStashTime; // 0x1938        
        bool m_bGrenadeParametersStashed; // 0x193c        
        [[maybe_unused]] std::uint8_t pad_0x193d[0x3]; // 0x193d
        QAngle m_angStashedShootAngles; // 0x1940        
        Vector m_vecStashedGrenadeThrowPosition; // 0x194c        
        Vector m_vecStashedVelocity; // 0x1958        
        QAngle m_angShootAngleHistory[2]; // 0x1964        
        Vector m_vecThrowPositionHistory[2]; // 0x197c        
        Vector m_vecVelocityHistory[2]; // 0x1994        
        [[maybe_unused]] std::uint8_t pad_0x19ac[0x4]; // 0x19ac
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        // m_PredictedDamageTags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVectorEmbeddedNetworkVar<server::PredictedDamageTag_t> m_PredictedDamageTags;
        char m_PredictedDamageTags[0x50]; // 0x19b0        
        int32_t m_nHighestAppliedDamageTagTick; // 0x1a00        
        [[maybe_unused]] std::uint8_t pad_0x1a04[0xc];
        
        // Datamap fields:
        // CCSPlayer_WeaponServices m_pWeaponServices; // 0xa08
        // CCSPlayer_ItemServices m_pItemServices; // 0xa10
        // CCSPlayer_UseServices m_pUseServices; // 0xa30
        // CCSPlayer_WaterServices m_pWaterServices; // 0xa28
        // CCSPlayer_MovementServices m_pMovementServices; // 0xa48
        // CCSPlayer_ViewModelServices m_pViewModelServices; // 0xc08
        // CCSPlayer_CameraServices m_pCameraServices; // 0xa40
        // void CCSPlayerPawnCheckStuffThink; // 0x0
        // void CCSPlayerPawnPushawayThink; // 0x0
        // void RescueZoneTouch; // 0x0
        // bool bot; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayerPawn because it is not a standard-layout class
    static_assert(sizeof(CCSPlayerPawn) == 0x1a10);
};
