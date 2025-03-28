#pragma once
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/client/WeaponPurchaseTracker_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BasePlayerWeapon;
};

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf8
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsRescuing"
    // static metadata: MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisMatch"
    // static metadata: MNetworkVarNames "WeaponPurchaseTracker_t m_weaponPurchasesThisRound"
    #pragma pack(push, 1)
    class CCSPlayer_ActionTrackingServices : public client::CPlayerPawnComponent
    {
    public:
        // m_hLastWeaponBeforeC4AutoSwitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BasePlayerWeapon> m_hLastWeaponBeforeC4AutoSwitch;
        char m_hLastWeaponBeforeC4AutoSwitch[0x4]; // 0x40        
        // metadata: MNetworkEnable
        bool m_bIsRescuing; // 0x44        
        [[maybe_unused]] std::uint8_t pad_0x45[0x3]; // 0x45
        // metadata: MNetworkEnable
        client::WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x48        
        // metadata: MNetworkEnable
        client::WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0xa0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_ActionTrackingServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_ActionTrackingServices) == 0xf8);
};
