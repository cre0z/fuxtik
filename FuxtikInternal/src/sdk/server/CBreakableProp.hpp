#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseProp.hpp"
#include "source2sdk/server/CPropDataComponent.hpp"
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
    class CBasePlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa80
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    // static metadata: MNetworkVarNames "bool m_noGhostCollision"
    #pragma pack(push, 1)
    class CBreakableProp : public server::CBaseProp
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x928[0x8]; // 0x928
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        server::CPropDataComponent m_CPropDataComponent; // 0x930        
        entity2::CEntityIOOutput m_OnBreak; // 0x970        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0x998        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0x9c0        
        float m_impactEnergyScale; // 0x9e8        
        int32_t m_iMinHealthDmg; // 0x9ec        
        QAngle m_preferredCarryAngles; // 0x9f0        
        float m_flPressureDelay; // 0x9fc        
        float m_flDefBurstScale; // 0xa00        
        Vector m_vDefBurstOffset; // 0xa04        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xa10        
        client::PerformanceMode_t m_PerformanceMode; // 0xa14        
        client::GameTime_t m_flPreventDamageBeforeTime; // 0xa18        
        bool m_bHasBreakPiecesOrCommands; // 0xa1c        
        [[maybe_unused]] std::uint8_t pad_0xa1d[0x3]; // 0xa1d
        float m_explodeDamage; // 0xa20        
        float m_explodeRadius; // 0xa24        
        [[maybe_unused]] std::uint8_t pad_0xa28[0x4]; // 0xa28
        float m_explosionDelay; // 0xa2c        
        CUtlSymbolLarge m_explosionBuildupSound; // 0xa30        
        CUtlSymbolLarge m_explosionCustomEffect; // 0xa38        
        CUtlSymbolLarge m_explosionCustomSound; // 0xa40        
        CUtlSymbolLarge m_explosionModifier; // 0xa48        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0xa50        
        client::GameTime_t m_flLastPhysicsInfluenceTime; // 0xa54        
        bool m_bOriginalBlockLOS; // 0xa58        
        [[maybe_unused]] std::uint8_t pad_0xa59[0x3]; // 0xa59
        float m_flDefaultFadeScale; // 0xa5c        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0xa60        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFlareEnt;
        char m_hFlareEnt[0x4]; // 0xa64        
        bool m_bUsePuntSound; // 0xa68        
        [[maybe_unused]] std::uint8_t pad_0xa69[0x7]; // 0xa69
        CUtlSymbolLarge m_iszPuntSound; // 0xa70        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0xa78        
        [[maybe_unused]] std::uint8_t pad_0xa79[0x7];
        
        // Datamap fields:
        // void InputBreak; // 0x0
        // int32_t InputSetHealth; // 0x0
        // int32_t InputAddHealth; // 0x0
        // int32_t InputRemoveHealth; // 0x0
        // bool InputSetNavIgnore; // 0x0
        // void InputEnablePuntSound; // 0x0
        // void InputDisablePuntSound; // 0x0
        // void CBreakablePropBreakThink; // 0x0
        // void CBreakablePropRampToDefaultFadeScale; // 0x0
        // uint32_t m_nExplosionType; // 0xa28
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBreakableProp because it is not a standard-layout class
    static_assert(sizeof(CBreakableProp) == 0xa80);
};
