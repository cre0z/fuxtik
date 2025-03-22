#pragma once
#include "source2sdk/server/CPlayer_ItemServices.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x48
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bHasDefuser"
    // static metadata: MNetworkVarNames "bool m_bHasHelmet"
    // static metadata: MNetworkVarNames "bool m_bHasHeavyArmor"
    #pragma pack(push, 1)
    class CCSPlayer_ItemServices : public server::CPlayer_ItemServices
    {
    public:
        // metadata: MNetworkEnable
        bool m_bHasDefuser; // 0x40        
        // metadata: MNetworkEnable
        bool m_bHasHelmet; // 0x41        
        // metadata: MNetworkEnable
        bool m_bHasHeavyArmor; // 0x42        
        [[maybe_unused]] std::uint8_t pad_0x43[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_ItemServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_ItemServices) == 0x48);
};
