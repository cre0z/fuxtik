#pragma once
#include "source2sdk/server/CEconEntity.hpp"
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
    // Size: 0xc78
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEconWearable : public server::CEconEntity
    {
    public:
        int32_t m_nForceSkin; // 0xc70        
        bool m_bAlwaysAllow; // 0xc74        
        [[maybe_unused]] std::uint8_t pad_0xc75[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEconWearable because it is not a standard-layout class
    static_assert(sizeof(CEconWearable) == 0xc78);
};
