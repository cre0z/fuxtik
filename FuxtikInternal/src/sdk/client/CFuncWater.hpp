#pragma once
#include "source2sdk/client/CBuoyancyHelper.hpp"
#include "source2sdk/client/C_BaseModelEntity.hpp"
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
    // Size: 0xce8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFuncWater : public client::C_BaseModelEntity
    {
    public:
        client::CBuoyancyHelper m_BuoyancyHelper; // 0xcc8        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncWater because it is not a standard-layout class
    static_assert(sizeof(CFuncWater) == 0xce8);
};
