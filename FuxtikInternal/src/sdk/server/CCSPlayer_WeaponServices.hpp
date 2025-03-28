#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/server/CPlayer_WeaponServices.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBasePlayerWeapon;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1380
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "GameTime_t m_flNextAttack"
    // static metadata: MNetworkVarNames "bool m_bIsLookingAtWeapon"
    // static metadata: MNetworkVarNames "bool m_bIsHoldingLookAtWeapon"
    #pragma pack(push, 1)
    class CCSPlayer_WeaponServices : public server::CPlayer_WeaponServices
    {
    public:
        // metadata: MNetworkEnable
        // metadata: MNetworkUserGroup "LocalPlayerExclusive"
        client::GameTime_t m_flNextAttack; // 0xa8        
        // metadata: MNetworkEnable
        bool m_bIsLookingAtWeapon; // 0xac        
        // metadata: MNetworkEnable
        bool m_bIsHoldingLookAtWeapon; // 0xad        
        [[maybe_unused]] std::uint8_t pad_0xae[0x2]; // 0xae
        // m_hSavedWeapon has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerWeapon> m_hSavedWeapon;
        char m_hSavedWeapon[0x4]; // 0xb0        
        int32_t m_nTimeToMelee; // 0xb4        
        int32_t m_nTimeToSecondary; // 0xb8        
        int32_t m_nTimeToPrimary; // 0xbc        
        int32_t m_nTimeToSniperRifle; // 0xc0        
        bool m_bIsBeingGivenItem; // 0xc4        
        bool m_bIsPickingUpItemWithUse; // 0xc5        
        bool m_bPickedUpWeapon; // 0xc6        
        bool m_bDisableAutoDeploy; // 0xc7        
        bool m_bIsPickingUpGroundWeapon; // 0xc8        
        [[maybe_unused]] std::uint8_t pad_0xc9[0x3]; // 0xc9
        uint32_t m_nOldShootPositionHistoryCount; // 0xcc        
        [[maybe_unused]] std::uint8_t pad_0xd0[0x398]; // 0xd0
        uint32_t m_nOldInputHistoryCount; // 0x468        
        [[maybe_unused]] std::uint8_t pad_0x46c[0xf14];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_WeaponServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_WeaponServices) == 0x1380);
};
