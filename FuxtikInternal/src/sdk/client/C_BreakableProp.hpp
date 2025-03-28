#pragma once
#include "source2sdk/client/CBaseProp.hpp"
#include "source2sdk/client/CPropDataComponent.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/PerformanceMode_t.hpp"
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
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_BasePlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1040
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CPropDataComponent::Storage_t m_CPropDataComponent"
    // static metadata: MNetworkVarNames "bool m_noGhostCollision"
    #pragma pack(push, 1)
    class C_BreakableProp : public client::CBaseProp
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "CPropDataComponent"
        // metadata: MNetworkAlias "CPropDataComponent"
        // metadata: MNetworkTypeAlias "CPropDataComponent"
        client::CPropDataComponent m_CPropDataComponent; // 0xf10        
        entity2::CEntityIOOutput m_OnBreak; // 0xf50        
        // m_OnHealthChanged has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OnHealthChanged;
        char m_OnHealthChanged[0x28]; // 0xf78        
        entity2::CEntityIOOutput m_OnTakeDamage; // 0xfa0        
        float m_impactEnergyScale; // 0xfc8        
        int32_t m_iMinHealthDmg; // 0xfcc        
        float m_flPressureDelay; // 0xfd0        
        float m_flDefBurstScale; // 0xfd4        
        Vector m_vDefBurstOffset; // 0xfd8        
        // m_hBreaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hBreaker;
        char m_hBreaker[0x4]; // 0xfe4        
        client::PerformanceMode_t m_PerformanceMode; // 0xfe8        
        client::GameTime_t m_flPreventDamageBeforeTime; // 0xfec        
        bool m_bHasBreakPiecesOrCommands; // 0xff0        
        [[maybe_unused]] std::uint8_t pad_0xff1[0x3]; // 0xff1
        float m_explodeDamage; // 0xff4        
        float m_explodeRadius; // 0xff8        
        [[maybe_unused]] std::uint8_t pad_0xffc[0x4]; // 0xffc
        float m_explosionDelay; // 0x1000        
        [[maybe_unused]] std::uint8_t pad_0x1004[0x4]; // 0x1004
        CUtlSymbolLarge m_explosionBuildupSound; // 0x1008        
        CUtlSymbolLarge m_explosionCustomEffect; // 0x1010        
        CUtlSymbolLarge m_explosionCustomSound; // 0x1018        
        CUtlSymbolLarge m_explosionModifier; // 0x1020        
        // m_hPhysicsAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BasePlayerPawn> m_hPhysicsAttacker;
        char m_hPhysicsAttacker[0x4]; // 0x1028        
        client::GameTime_t m_flLastPhysicsInfluenceTime; // 0x102c        
        float m_flDefaultFadeScale; // 0x1030        
        // m_hLastAttacker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hLastAttacker;
        char m_hLastAttacker[0x4]; // 0x1034        
        // m_hFlareEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hFlareEnt;
        char m_hFlareEnt[0x4]; // 0x1038        
        // metadata: MNetworkEnable
        bool m_noGhostCollision; // 0x103c        
        [[maybe_unused]] std::uint8_t pad_0x103d[0x3];
        
        // Datamap fields:
        // void InputBreak; // 0x0
        // int32_t InputSetHealth; // 0x0
        // int32_t InputAddHealth; // 0x0
        // int32_t InputRemoveHealth; // 0x0
        // void C_BreakablePropBreakThink; // 0x0
        // void C_BreakablePropRampToDefaultFadeScale; // 0x0
        // uint32_t m_nExplosionType; // 0xffc
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BreakableProp because it is not a standard-layout class
    static_assert(sizeof(C_BreakableProp) == 0x1040);
};
