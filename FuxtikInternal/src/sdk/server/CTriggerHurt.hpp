#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x980
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CTriggerHurt : public server::CBaseTrigger
    {
    public:
        float m_flOriginalDamage; // 0x8e0        
        float m_flDamage; // 0x8e4        
        float m_flDamageCap; // 0x8e8        
        client::GameTime_t m_flLastDmgTime; // 0x8ec        
        float m_flForgivenessDelay; // 0x8f0        
        int32_t m_bitsDamageInflict; // 0x8f4        
        int32_t m_damageModel; // 0x8f8        
        bool m_bNoDmgForce; // 0x8fc        
        [[maybe_unused]] std::uint8_t pad_0x8fd[0x3]; // 0x8fd
        Vector m_vDamageForce; // 0x900        
        bool m_thinkAlways; // 0x90c        
        [[maybe_unused]] std::uint8_t pad_0x90d[0x3]; // 0x90d
        float m_hurtThinkPeriod; // 0x910        
        [[maybe_unused]] std::uint8_t pad_0x914[0x4]; // 0x914
        entity2::CEntityIOOutput m_OnHurt; // 0x918        
        entity2::CEntityIOOutput m_OnHurtPlayer; // 0x940        
        // m_hurtEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hurtEntities;
        char m_hurtEntities[0x18]; // 0x968        
        
        // Datamap fields:
        // void CTriggerHurtRadiationThink; // 0x0
        // void CTriggerHurtHurtThink; // 0x0
        // void CTriggerHurtNavThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerHurt because it is not a standard-layout class
    static_assert(sizeof(CTriggerHurt) == 0x980);
};
