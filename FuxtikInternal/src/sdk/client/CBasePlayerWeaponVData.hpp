#pragma once
#include "source2sdk/client/AmmoIndex_t.hpp"
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/ItemFlagTypes_t.hpp"
#include "source2sdk/client/RumbleEffect_t.hpp"
#include "source2sdk/client/WeaponSound_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x250
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CBasePlayerWeaponVData : public client::CEntitySubclassVDataBase
    {
    public:
        // metadata: MPropertyDescription "Model used on the ground or held by an entity"
        // metadata: MPropertyGroupName "Visuals"
        // m_szWorldModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeCModel>> m_szWorldModel;
        char m_szWorldModel[0xe0]; // 0x28        
        // metadata: MPropertyDescription "Was the weapon was built right-handed?"
        // metadata: MPropertyGroupName "Visuals"
        bool m_bBuiltRightHanded; // 0x108        
        // metadata: MPropertyDescription "Allows flipping the model, regardless of whether it is built left or right handed"
        // metadata: MPropertyGroupName "Visuals"
        bool m_bAllowFlipping; // 0x109        
        [[maybe_unused]] std::uint8_t pad_0x10a[0x6]; // 0x10a
        // metadata: MPropertyGroupName "Visuals"
        // metadata: MPropertyDescription "Attachment to fire bullets from"
        // metadata: MPropertyAttributeEditor "VDataModelAttachment( m_szWorldModel )"
        CUtlString m_sMuzzleAttachment; // 0x110        
        // metadata: MPropertyDescription "Effect when firing this weapon"
        // metadata: MPropertyGroupName "Visuals"
        // m_szMuzzleFlashParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CResourceNameTyped<CWeakHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_szMuzzleFlashParticle;
        char m_szMuzzleFlashParticle[0xe0]; // 0x118        
        client::ItemFlagTypes_t m_iFlags; // 0x1f8        
        // metadata: MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
        // metadata: MPropertyGroupName "Ammo"
        // metadata: MPropertyCustomFGDType "string"
        client::AmmoIndex_t m_nPrimaryAmmoType; // 0x1f9        
        // metadata: MPropertyAttributeEditor "VDataChoice( scripts/ammo.vdata )"
        // metadata: MPropertyGroupName "Ammo"
        // metadata: MPropertyCustomFGDType "string"
        client::AmmoIndex_t m_nSecondaryAmmoType; // 0x1fa        
        [[maybe_unused]] std::uint8_t pad_0x1fb[0x1]; // 0x1fb
        // metadata: MPropertyFriendlyName "Primary Clip Size"
        // metadata: MPropertyDescription "How many bullets this gun can fire before it reloads (0 if no clip)"
        // metadata: MPropertyAttributeRange "0 255"
        // metadata: MPropertyGroupName "Ammo"
        int32_t m_iMaxClip1; // 0x1fc        
        // metadata: MPropertyFriendlyName "Secondary Clip Size"
        // metadata: MPropertyDescription "How many secondary bullets this gun can fire before it reloads (0 if no clip)"
        // metadata: MPropertyGroupName "Ammo"
        // metadata: MPropertyAttributeRange "0 255"
        int32_t m_iMaxClip2; // 0x200        
        // metadata: MPropertyDescription "Primary Initial Clip (-1 means use clip size)"
        // metadata: MPropertyGroupName "Ammo"
        // metadata: MPropertyAttributeRange "-1 255"
        int32_t m_iDefaultClip1; // 0x204        
        // metadata: MPropertyDescription "Secondary Initial Clip (-1 means use clip size)"
        // metadata: MPropertyGroupName "Ammo"
        // metadata: MPropertyAttributeRange "-1 255"
        int32_t m_iDefaultClip2; // 0x208        
        // metadata: MPropertyDescription "This value used to determine this weapon's importance in autoselection"
        // metadata: MPropertyGroupName "UI"
        int32_t m_iWeight; // 0x20c        
        // metadata: MPropertyFriendlyName "Safe To Auto-Switch To"
        // metadata: MPropertyDescription "Whether this weapon is safe to automatically switch to (should be false for eg. explosives that can the player may accidentally hurt themselves with)"
        // metadata: MPropertyGroupName "UI"
        bool m_bAutoSwitchTo; // 0x210        
        // metadata: MPropertyFriendlyName "Safe To Auto-Switch Away From"
        // metadata: MPropertyGroupName "UI"
        bool m_bAutoSwitchFrom; // 0x211        
        [[maybe_unused]] std::uint8_t pad_0x212[0x2]; // 0x212
        // metadata: MPropertyGroupName "UI"
        client::RumbleEffect_t m_iRumbleEffect; // 0x214        
        // metadata: MPropertyDescription "Should both primary and secondary attacks be cooled down together (so cooling down primary attack would cooldown both primary + secondary attacks)?"
        bool m_bLinkedCooldowns; // 0x218        
        [[maybe_unused]] std::uint8_t pad_0x219[0x7]; // 0x219
        // m_aShootSounds has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlOrderedMap<client::WeaponSound_t,CSoundEventName> m_aShootSounds;
        char m_aShootSounds[0x28]; // 0x220        
        // metadata: MPropertyFriendlyName "HUD Bucket"
        // metadata: MPropertyDescription "Which 'column' to display this weapon in the HUD"
        // metadata: MPropertyGroupName "UI"
        int32_t m_iSlot; // 0x248        
        // metadata: MPropertyFriendlyName "HUD Bucket Position"
        // metadata: MPropertyDescription "Which 'row' to display this weapon in the HUD"
        // metadata: MPropertyGroupName "UI"
        int32_t m_iPosition; // 0x24c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBasePlayerWeaponVData because it is not a standard-layout class
    static_assert(sizeof(CBasePlayerWeaponVData) == 0x250);
};
