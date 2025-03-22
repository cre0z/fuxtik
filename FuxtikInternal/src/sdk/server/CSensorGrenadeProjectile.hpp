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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xaa0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CSensorGrenadeProjectile : public server::CBaseCSGrenadeProjectile
    {
    public:
        client::GameTime_t m_fExpireTime; // 0xa90        
        client::GameTime_t m_fNextDetectPlayerSound; // 0xa94        
        // m_hDisplayGrenade has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hDisplayGrenade;
        char m_hDisplayGrenade[0x4]; // 0xa98        
        [[maybe_unused]] std::uint8_t pad_0xa9c[0x4];
        
        // Datamap fields:
        // void CSensorGrenadeProjectileThink_Arm; // 0x0
        // void CSensorGrenadeProjectileThink_Remove; // 0x0
        // void CSensorGrenadeProjectileSensorThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSensorGrenadeProjectile because it is not a standard-layout class
    static_assert(sizeof(CSensorGrenadeProjectile) == 0xaa0);
};
