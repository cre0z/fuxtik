#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CItem.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseFilter;
};

namespace source2sdk::server
{
    class CItemGenericTriggerHelper;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xb30
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CItemGeneric : public server::CItem
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x9c0[0x8]; // 0x9c0
        bool m_bHasTriggerRadius; // 0x9c8        
        bool m_bHasPickupRadius; // 0x9c9        
        [[maybe_unused]] std::uint8_t pad_0x9ca[0x2]; // 0x9ca
        float m_flPickupRadiusSqr; // 0x9cc        
        float m_flTriggerRadiusSqr; // 0x9d0        
        client::GameTime_t m_flLastPickupCheck; // 0x9d4        
        bool m_bPlayerCounterListenerAdded; // 0x9d8        
        bool m_bPlayerInTriggerRadius; // 0x9d9        
        [[maybe_unused]] std::uint8_t pad_0x9da[0x6]; // 0x9da
        // m_hSpawnParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hSpawnParticleEffect;
        char m_hSpawnParticleEffect[0x8]; // 0x9e0        
        CUtlSymbolLarge m_pAmbientSoundEffect; // 0x9e8        
        bool m_bAutoStartAmbientSound; // 0x9f0        
        [[maybe_unused]] std::uint8_t pad_0x9f1[0x7]; // 0x9f1
        CUtlSymbolLarge m_pSpawnScriptFunction; // 0x9f8        
        // m_hPickupParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hPickupParticleEffect;
        char m_hPickupParticleEffect[0x8]; // 0xa00        
        CUtlSymbolLarge m_pPickupSoundEffect; // 0xa08        
        CUtlSymbolLarge m_pPickupScriptFunction; // 0xa10        
        // m_hTimeoutParticleEffect has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_hTimeoutParticleEffect;
        char m_hTimeoutParticleEffect[0x8]; // 0xa18        
        CUtlSymbolLarge m_pTimeoutSoundEffect; // 0xa20        
        CUtlSymbolLarge m_pTimeoutScriptFunction; // 0xa28        
        CUtlSymbolLarge m_pPickupFilterName; // 0xa30        
        // m_hPickupFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hPickupFilter;
        char m_hPickupFilter[0x4]; // 0xa38        
        [[maybe_unused]] std::uint8_t pad_0xa3c[0x4]; // 0xa3c
        entity2::CEntityIOOutput m_OnPickup; // 0xa40        
        entity2::CEntityIOOutput m_OnTimeout; // 0xa68        
        entity2::CEntityIOOutput m_OnTriggerStartTouch; // 0xa90        
        entity2::CEntityIOOutput m_OnTriggerTouch; // 0xab8        
        entity2::CEntityIOOutput m_OnTriggerEndTouch; // 0xae0        
        CUtlSymbolLarge m_pAllowPickupScriptFunction; // 0xb08        
        float m_flPickupRadius; // 0xb10        
        float m_flTriggerRadius; // 0xb14        
        CUtlSymbolLarge m_pTriggerSoundEffect; // 0xb18        
        bool m_bGlowWhenInTrigger; // 0xb20        
        Color m_glowColor; // 0xb21        
        bool m_bUseable; // 0xb25        
        [[maybe_unused]] std::uint8_t pad_0xb26[0x2]; // 0xb26
        // m_hTriggerHelper has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CItemGenericTriggerHelper> m_hTriggerHelper;
        char m_hTriggerHelper[0x4]; // 0xb28        
        [[maybe_unused]] std::uint8_t pad_0xb2c[0x4];
        
        // Datamap fields:
        // void CItemGenericItemGenericTouch; // 0x0
        // void InputStartAmbientSound; // 0x0
        // void InputStopAmbientSound; // 0x0
        // void InputToggleAmbientSound; // 0x0
        // void m_hAmbientSound; // 0x9c0
        // float auto_remove_timeout; // 0x7fffffff
        // float drag_override; // 0x7fffffff
        // float damping_override; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemGeneric because it is not a standard-layout class
    static_assert(sizeof(CItemGeneric) == 0xb30);
};
