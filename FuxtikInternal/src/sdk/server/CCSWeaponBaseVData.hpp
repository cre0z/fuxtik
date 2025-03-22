#pragma once
#include "source2sdk/client/CFiringModeFloat.hpp"
#include "source2sdk/client/CFiringModeInt.hpp"
#include "source2sdk/client/CSWeaponCategory.hpp"
#include "source2sdk/client/CSWeaponSilencerType.hpp"
#include "source2sdk/client/CSWeaponType.hpp"
#include "source2sdk/client/gear_slot_t.hpp"
#include "source2sdk/client/loadout_slot_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBasePlayerWeaponVData.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xdc8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertySuppressBaseClassField
    // static metadata: MPropertySuppressBaseClassField
    #pragma pack(push, 1)
    class CCSWeaponBaseVData : public server::CBasePlayerWeaponVData
    {
    public:
        client::CSWeaponType m_WeaponType; // 0x250        
        client::CSWeaponCategory m_WeaponCategory; // 0x254        
        // metadata: MPropertyStartGroup "Visuals"
        // m_szViewModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_szViewModel;
        char m_szViewModel[0xe0]; // 0x258        
        // m_szPlayerModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_szPlayerModel;
        char m_szPlayerModel[0xe0]; // 0x338        
        // m_szWorldDroppedModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_szWorldDroppedModel;
        char m_szWorldDroppedModel[0xe0]; // 0x418        
        // m_szAimsightLensMaskModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_szAimsightLensMaskModel;
        char m_szAimsightLensMaskModel[0xe0]; // 0x4f8        
        // m_szMagazineModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_szMagazineModel;
        char m_szMagazineModel[0xe0]; // 0x5d8        
        // m_szHeatEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szHeatEffect;
        char m_szHeatEffect[0xe0]; // 0x6b8        
        // m_szEjectBrassEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szEjectBrassEffect;
        char m_szEjectBrassEffect[0xe0]; // 0x798        
        // m_szMuzzleFlashParticleAlt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashParticleAlt;
        char m_szMuzzleFlashParticleAlt[0xe0]; // 0x878        
        // m_szMuzzleFlashThirdPersonParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashThirdPersonParticle;
        char m_szMuzzleFlashThirdPersonParticle[0xe0]; // 0x958        
        // m_szMuzzleFlashThirdPersonParticleAlt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashThirdPersonParticleAlt;
        char m_szMuzzleFlashThirdPersonParticleAlt[0xe0]; // 0xa38        
        // metadata: MPropertyDescription "Effect to actually fire into the world from this weapon"
        // m_szTracerParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szTracerParticle;
        char m_szTracerParticle[0xe0]; // 0xb18        
        // metadata: MPropertyStartGroup "HUD Positions"
        // metadata: MPropertyFriendlyName "HUD Bucket"
        // metadata: MPropertyDescription "Which 'column' to display this weapon in the HUD"
        client::gear_slot_t m_GearSlot; // 0xbf8        
        int32_t m_GearSlotPosition; // 0xbfc        
        // metadata: MPropertyFriendlyName "HUD Bucket Position"
        // metadata: MPropertyDescription "Default team (non Terrorist or Counter-Terrorist) 'row' to display this weapon in the HUD."
        client::loadout_slot_t m_DefaultLoadoutSlot; // 0xc00        
        [[maybe_unused]] std::uint8_t pad_0xc04[0x4]; // 0xc04
        CUtlString m_sWrongTeamMsg; // 0xc08        
        // metadata: MPropertyStartGroup "In-Game Data"
        int32_t m_nPrice; // 0xc10        
        int32_t m_nKillAward; // 0xc14        
        int32_t m_nPrimaryReserveAmmoMax; // 0xc18        
        int32_t m_nSecondaryReserveAmmoMax; // 0xc1c        
        bool m_bMeleeWeapon; // 0xc20        
        bool m_bHasBurstMode; // 0xc21        
        bool m_bIsRevolver; // 0xc22        
        bool m_bCannotShootUnderwater; // 0xc23        
        [[maybe_unused]] std::uint8_t pad_0xc24[0x4]; // 0xc24
        // metadata: MPropertyFriendlyName "In-Code weapon name"
        CGlobalSymbol m_szName; // 0xc28        
        // metadata: MPropertyFriendlyName "Player Animation Extension"
        CUtlString m_szAnimExtension; // 0xc30        
        client::CSWeaponSilencerType m_eSilencerType; // 0xc38        
        int32_t m_nCrosshairMinDistance; // 0xc3c        
        int32_t m_nCrosshairDeltaDistance; // 0xc40        
        bool m_bIsFullAuto; // 0xc44        
        [[maybe_unused]] std::uint8_t pad_0xc45[0x3]; // 0xc45
        int32_t m_nNumBullets; // 0xc48        
        // metadata: MPropertyStartGroup "Firing Mode Data"
        client::CFiringModeFloat m_flCycleTime; // 0xc4c        
        client::CFiringModeFloat m_flMaxSpeed; // 0xc54        
        client::CFiringModeFloat m_flSpread; // 0xc5c        
        client::CFiringModeFloat m_flInaccuracyCrouch; // 0xc64        
        client::CFiringModeFloat m_flInaccuracyStand; // 0xc6c        
        client::CFiringModeFloat m_flInaccuracyJump; // 0xc74        
        client::CFiringModeFloat m_flInaccuracyLand; // 0xc7c        
        client::CFiringModeFloat m_flInaccuracyLadder; // 0xc84        
        client::CFiringModeFloat m_flInaccuracyFire; // 0xc8c        
        client::CFiringModeFloat m_flInaccuracyMove; // 0xc94        
        client::CFiringModeFloat m_flRecoilAngle; // 0xc9c        
        client::CFiringModeFloat m_flRecoilAngleVariance; // 0xca4        
        client::CFiringModeFloat m_flRecoilMagnitude; // 0xcac        
        client::CFiringModeFloat m_flRecoilMagnitudeVariance; // 0xcb4        
        client::CFiringModeInt m_nTracerFrequency; // 0xcbc        
        float m_flInaccuracyJumpInitial; // 0xcc4        
        float m_flInaccuracyJumpApex; // 0xcc8        
        float m_flInaccuracyReload; // 0xccc        
        // metadata: MPropertyStartGroup "Firing"
        int32_t m_nRecoilSeed; // 0xcd0        
        int32_t m_nSpreadSeed; // 0xcd4        
        float m_flTimeToIdleAfterFire; // 0xcd8        
        float m_flIdleInterval; // 0xcdc        
        float m_flAttackMovespeedFactor; // 0xce0        
        float m_flHeatPerShot; // 0xce4        
        float m_flInaccuracyPitchShift; // 0xce8        
        float m_flInaccuracyAltSoundThreshold; // 0xcec        
        float m_flBotAudibleRange; // 0xcf0        
        [[maybe_unused]] std::uint8_t pad_0xcf4[0x4]; // 0xcf4
        CUtlString m_szUseRadioSubtitle; // 0xcf8        
        // metadata: MPropertyStartGroup "Zooming"
        bool m_bUnzoomsAfterShot; // 0xd00        
        bool m_bHideViewModelWhenZoomed; // 0xd01        
        [[maybe_unused]] std::uint8_t pad_0xd02[0x2]; // 0xd02
        int32_t m_nZoomLevels; // 0xd04        
        int32_t m_nZoomFOV1; // 0xd08        
        int32_t m_nZoomFOV2; // 0xd0c        
        float m_flZoomTime0; // 0xd10        
        float m_flZoomTime1; // 0xd14        
        float m_flZoomTime2; // 0xd18        
        // metadata: MPropertyStartGroup "Iron Sights"
        float m_flIronSightPullUpSpeed; // 0xd1c        
        float m_flIronSightPutDownSpeed; // 0xd20        
        float m_flIronSightFOV; // 0xd24        
        float m_flIronSightPivotForward; // 0xd28        
        float m_flIronSightLooseness; // 0xd2c        
        QAngle m_angPivotAngle; // 0xd30        
        Vector m_vecIronSightEyePos; // 0xd3c        
        // metadata: MPropertyStartGroup "Damage"
        int32_t m_nDamage; // 0xd48        
        float m_flHeadshotMultiplier; // 0xd4c        
        float m_flArmorRatio; // 0xd50        
        float m_flPenetration; // 0xd54        
        float m_flRange; // 0xd58        
        float m_flRangeModifier; // 0xd5c        
        float m_flFlinchVelocityModifierLarge; // 0xd60        
        float m_flFlinchVelocityModifierSmall; // 0xd64        
        // metadata: MPropertyStartGroup "Recovery"
        float m_flRecoveryTimeCrouch; // 0xd68        
        float m_flRecoveryTimeStand; // 0xd6c        
        float m_flRecoveryTimeCrouchFinal; // 0xd70        
        float m_flRecoveryTimeStandFinal; // 0xd74        
        int32_t m_nRecoveryTransitionStartBullet; // 0xd78        
        int32_t m_nRecoveryTransitionEndBullet; // 0xd7c        
        // metadata: MPropertyStartGroup "Grenade Data"
        float m_flThrowVelocity; // 0xd80        
        Vector m_vSmokeColor; // 0xd84        
        CGlobalSymbol m_szAnimClass; // 0xd90        
        [[maybe_unused]] std::uint8_t pad_0xd98[0x30];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSWeaponBaseVData because it is not a standard-layout class
    static_assert(sizeof(CCSWeaponBaseVData) == 0xdc8);
};
