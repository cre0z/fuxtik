#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CBuoyancyHelper.hpp"
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
    // Size: 0x730
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFuncWater : public server::CBaseModelEntity
    {
    public:
        server::CBuoyancyHelper m_BuoyancyHelper; // 0x710        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncWater because it is not a standard-layout class
    static_assert(sizeof(CFuncWater) == 0x730);
};
