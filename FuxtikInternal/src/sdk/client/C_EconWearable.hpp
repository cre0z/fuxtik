#pragma once
#include "source2sdk/client/C_EconEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x15b8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_EconWearable : public client::C_EconEntity
    {
    public:
        int32_t m_nForceSkin; // 0x15b0        
        bool m_bAlwaysAllow; // 0x15b4        
        [[maybe_unused]] std::uint8_t pad_0x15b5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EconWearable because it is not a standard-layout class
    static_assert(sizeof(C_EconWearable) == 0x15b8);
};
