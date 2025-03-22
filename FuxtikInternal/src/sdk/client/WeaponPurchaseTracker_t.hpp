#pragma once
#include "source2sdk/client/WeaponPurchaseCount_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x58
    // Has VTable
    // 
    // static metadata: MNetworkVarNames "WeaponPurchaseCount_t m_weaponPurchases"
    #pragma pack(push, 1)
    struct WeaponPurchaseTracker_t
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // metadata: MNetworkEnable
        // m_weaponPurchases has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // C_UtlVectorEmbeddedNetworkVar<client::WeaponPurchaseCount_t> m_weaponPurchases;
        char m_weaponPurchases[0x50]; // 0x8        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(WeaponPurchaseTracker_t, m_weaponPurchases) == 0x8);
    
    static_assert(sizeof(WeaponPurchaseTracker_t) == 0x58);
};
