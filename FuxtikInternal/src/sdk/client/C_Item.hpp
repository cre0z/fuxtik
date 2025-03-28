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
    // Size: 0x16b0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_Item : public client::C_EconEntity
    {
    public:
        char m_pReticleHintTextName[256]; // 0x15b0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Item because it is not a standard-layout class
    static_assert(sizeof(C_Item) == 0x16b0);
};
