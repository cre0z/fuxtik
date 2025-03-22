#pragma once
#include "source2sdk/client/BloodType.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x4e0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CBlood : public server::CPointEntity
    {
    public:
        QAngle m_vecSprayAngles; // 0x4c0        
        Vector m_vecSprayDir; // 0x4cc        
        float m_flAmount; // 0x4d8        
        client::BloodType m_Color; // 0x4dc        
        
        // Datamap fields:
        // void InputEmitBlood; // 0x0
        // int32_t color; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBlood because it is not a standard-layout class
    static_assert(sizeof(CBlood) == 0x4e0);
};
