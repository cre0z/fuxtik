#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x528
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvFireSensor : public server::CBaseEntity
    {
    public:
        bool m_bEnabled; // 0x4c0        
        bool m_bHeatAtLevel; // 0x4c1        
        [[maybe_unused]] std::uint8_t pad_0x4c2[0x2]; // 0x4c2
        float m_radius; // 0x4c4        
        float m_targetLevel; // 0x4c8        
        float m_targetTime; // 0x4cc        
        float m_levelTime; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4d4[0x4]; // 0x4d4
        entity2::CEntityIOOutput m_OnHeatLevelStart; // 0x4d8        
        entity2::CEntityIOOutput m_OnHeatLevelEnd; // 0x500        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvFireSensor because it is not a standard-layout class
    static_assert(sizeof(CEnvFireSensor) == 0x528);
};
