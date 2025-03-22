#pragma once
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
    // Size: 0x4d0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvViewPunch : public server::CPointEntity
    {
    public:
        float m_flRadius; // 0x4c0        
        QAngle m_angViewPunch; // 0x4c4        
        
        // Datamap fields:
        // void InputViewPunch; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvViewPunch because it is not a standard-layout class
    static_assert(sizeof(CEnvViewPunch) == 0x4d0);
};
