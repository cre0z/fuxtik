#pragma once
#include "source2sdk/client/CPlayer_WeaponServices.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1370
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flNextAttack"
    // static metadata: MNetworkVarNames "bool m_bIsLookingAtWeapon"
    // static metadata: MNetworkVarNames "bool m_bIsHoldingLookAtWeapon"
    #pragma pack(push, 1)
    class CCSPlayer_WeaponServices : public client::CPlayer_WeaponServices
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xa0[0x18]; // 0xa0
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::GameTime_t m_flNextAttack; // 0xb8        
        // metadata: MNetworkEnable
        bool m_bIsLookingAtWeapon; // 0xbc        
        // metadata: MNetworkEnable
        bool m_bIsHoldingLookAtWeapon; // 0xbd        
        [[maybe_unused]] std::uint8_t pad_0xbe[0x2]; // 0xbe
        uint32_t m_nOldShootPositionHistoryCount; // 0xc0        
        [[maybe_unused]] std::uint8_t pad_0xc4[0x394]; // 0xc4
        uint32_t m_nOldInputHistoryCount; // 0x458        
        [[maybe_unused]] std::uint8_t pad_0x45c[0xf14];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_WeaponServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_WeaponServices) == 0x1370);
};
