#pragma once
#include "source2sdk/client/AmmoTypeInfo_t.hpp"
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
    // Size: 0x50
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct GameAmmoTypeInfo_t : public client::AmmoTypeInfo_t
    {
    public:
        int32_t m_nBuySize; // 0x38        
        int32_t m_nCost; // 0x3c        
        [[maybe_unused]] std::uint8_t pad_0x40[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in GameAmmoTypeInfo_t because it is not a standard-layout class
    static_assert(sizeof(GameAmmoTypeInfo_t) == 0x50);
};
