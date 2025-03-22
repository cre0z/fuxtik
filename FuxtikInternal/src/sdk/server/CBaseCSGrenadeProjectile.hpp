#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CBaseGrenade.hpp"
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
    // Size: 0xa90
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_vInitialPosition"
    // static metadata: MNetworkVarNames "Vector m_vInitialVelocity"
    // static metadata: MNetworkVarNames "int m_nBounces"
    // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_nExplodeEffectIndex"
    // static metadata: MNetworkVarNames "int m_nExplodeEffectTickBegin"
    // static metadata: MNetworkVarNames "Vector m_vecExplodeEffectOrigin"
    #pragma pack(push, 1)
    class CBaseCSGrenadeProjectile : public server::CBaseGrenade
    {
    public:
        // metadata: MNetworkEnable
        Vector m_vInitialPosition; // 0xa20        
        // metadata: MNetworkEnable
        Vector m_vInitialVelocity; // 0xa2c        
        // metadata: MNetworkEnable
        int32_t m_nBounces; // 0xa38        
        [[maybe_unused]] std::uint8_t pad_0xa3c[0x4]; // 0xa3c
        // metadata: MNetworkEnable
        // m_nExplodeEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_nExplodeEffectIndex;
        char m_nExplodeEffectIndex[0x8]; // 0xa40        
        // metadata: MNetworkEnable
        int32_t m_nExplodeEffectTickBegin; // 0xa48        
        // metadata: MNetworkEnable
        Vector m_vecExplodeEffectOrigin; // 0xa4c        
        client::GameTime_t m_flSpawnTime; // 0xa58        
        uint8_t m_unOGSExtraFlags; // 0xa5c        
        bool m_bDetonationRecorded; // 0xa5d        
        uint16_t m_nItemIndex; // 0xa5e        
        Vector m_vecOriginalSpawnLocation; // 0xa60        
        client::GameTime_t m_flLastBounceSoundTime; // 0xa6c        
        RotationVector m_vecGrenadeSpin; // 0xa70        
        Vector m_vecLastHitSurfaceNormal; // 0xa7c        
        int32_t m_nTicksAtZeroVelocity; // 0xa88        
        bool m_bHasEverHitPlayer; // 0xa8c        
        bool m_bClearFromPlayers; // 0xa8d        
        [[maybe_unused]] std::uint8_t pad_0xa8e[0x2];
        
        // Static fields:
        static float &Get_s_flThinkInterval() {return *reinterpret_cast<float*>(interfaces::g_schema->FindTypeScopeForModule("server.dll")->FindDeclaredClass("CBaseCSGrenadeProjectile")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseCSGrenadeProjectile because it is not a standard-layout class
    static_assert(sizeof(CBaseCSGrenadeProjectile) == 0xa90);
};
