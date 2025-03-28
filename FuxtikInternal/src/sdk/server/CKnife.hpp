#pragma once
#include "source2sdk/server/CCSWeaponBase.hpp"
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
    // Size: 0xea0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CKnife : public server::CCSWeaponBase
    {
    public:
        bool m_bFirstAttack; // 0xe98        
        [[maybe_unused]] std::uint8_t pad_0xe99[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CKnife because it is not a standard-layout class
    static_assert(sizeof(CKnife) == 0xea0);
};
