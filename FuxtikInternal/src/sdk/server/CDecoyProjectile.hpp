#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"
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
    // Size: 0xab8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_nDecoyShotTick"
    #pragma pack(push, 1)
    class CDecoyProjectile : public server::CBaseCSGrenadeProjectile
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa90[0x8]; // 0xa90
        // metadata: MNetworkEnable
        int32_t m_nDecoyShotTick; // 0xa98        
        int32_t m_shotsRemaining; // 0xa9c        
        client::GameTime_t m_fExpireTime; // 0xaa0        
        [[maybe_unused]] std::uint8_t pad_0xaa4[0xc]; // 0xaa4
        uint16_t m_decoyWeaponDefIndex; // 0xab0        
        [[maybe_unused]] std::uint8_t pad_0xab2[0x6];
        
        // Datamap fields:
        // void CDecoyProjectileThink_Detonate; // 0x0
        // void CDecoyProjectileGunfireThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDecoyProjectile because it is not a standard-layout class
    static_assert(sizeof(CDecoyProjectile) == 0xab8);
};
