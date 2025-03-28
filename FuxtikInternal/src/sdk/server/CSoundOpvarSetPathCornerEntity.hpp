#pragma once
#include "source2sdk/server/CSoundOpvarSetPointEntity.hpp"
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
    // Size: 0x690
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CSoundOpvarSetPathCornerEntity : public server::CSoundOpvarSetPointEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x668[0x18]; // 0x668
        float m_flDistMinSqr; // 0x680        
        float m_flDistMaxSqr; // 0x684        
        CUtlSymbolLarge m_iszPathCornerEntityName; // 0x688        
        
        // Datamap fields:
        // void CSoundOpvarSetPathCornerEntitySetOpvarThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSoundOpvarSetPathCornerEntity because it is not a standard-layout class
    static_assert(sizeof(CSoundOpvarSetPathCornerEntity) == 0x690);
};
