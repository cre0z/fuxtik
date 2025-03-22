#pragma once
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/server/WeaponPurchaseTracker_t.hpp"
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
    // Size: 0x2f0
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
        [[maybe_unused]] std::uint8_t pad_0x40[0x1c0]; // 0x40
        // m_hLastWeaponBeforeC4AutoSwitch has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBasePlayerWeapon> m_hLastWeaponBeforeC4AutoSwitch;
        char m_hLastWeaponBeforeC4AutoSwitch[0x4]; // 0x200        
        [[maybe_unused]] std::uint8_t pad_0x204[0x30]; // 0x204
        // metadata: MNetworkEnable
        bool m_bIsRescuing; // 0x234        
        [[maybe_unused]] std::uint8_t pad_0x235[0x3]; // 0x235
        // metadata: MNetworkEnable
        server::WeaponPurchaseTracker_t m_weaponPurchasesThisMatch; // 0x238        
        // metadata: MNetworkEnable
        server::WeaponPurchaseTracker_t m_weaponPurchasesThisRound; // 0x290        
        [[maybe_unused]] std::uint8_t pad_0x2e8[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_ActionTrackingServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_ActionTrackingServices) == 0x2f0);
};
