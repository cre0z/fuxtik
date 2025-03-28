#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    // Size: 0x510
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysExplosion : public server::CPointEntity
    {
    public:
        bool m_bExplodeOnSpawn; // 0x4c0        
        [[maybe_unused]] std::uint8_t pad_0x4c1[0x3]; // 0x4c1
        float m_flMagnitude; // 0x4c4        
        float m_flDamage; // 0x4c8        
        float m_radius; // 0x4cc        
        CUtlSymbolLarge m_targetEntityName; // 0x4d0        
        float m_flInnerRadius; // 0x4d8        
        float m_flPushScale; // 0x4dc        
        bool m_bConvertToDebrisWhenPossible; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e1[0x7]; // 0x4e1
        entity2::CEntityIOOutput m_OnPushedPlayer; // 0x4e8        
        
        // Datamap fields:
        // void InputExplode; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysExplosion because it is not a standard-layout class
    static_assert(sizeof(CPhysExplosion) == 0x510);
};
