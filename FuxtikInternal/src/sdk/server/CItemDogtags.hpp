#pragma once
#include "source2sdk/server/CItem.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CCSPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9c8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CHandle<CCSPlayerPawn> m_OwningPlayer"
    // static metadata: MNetworkVarNames "CHandle<CCSPlayerPawn> m_KillingPlayer"
    #pragma pack(push, 1)
    class CItemDogtags : public server::CItem
    {
    public:
        // metadata: MNetworkEnable
        // m_OwningPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSPlayerPawn> m_OwningPlayer;
        char m_OwningPlayer[0x4]; // 0x9c0        
        // metadata: MNetworkEnable
        // m_KillingPlayer has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSPlayerPawn> m_KillingPlayer;
        char m_KillingPlayer[0x4]; // 0x9c4        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CItemDogtags because it is not a standard-layout class
    static_assert(sizeof(CItemDogtags) == 0x9c8);
};
