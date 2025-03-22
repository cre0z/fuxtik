#pragma once
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
    // Size: 0x508
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysicsSpring : public server::CBaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x4c0[0x8]; // 0x4c0
        float m_flFrequency; // 0x4c8        
        float m_flDampingRatio; // 0x4cc        
        float m_flRestLength; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4d4[0x4]; // 0x4d4
        CUtlSymbolLarge m_nameAttachStart; // 0x4d8        
        CUtlSymbolLarge m_nameAttachEnd; // 0x4e0        
        Vector m_start; // 0x4e8        
        Vector m_end; // 0x4f4        
        uint32_t m_teleportTick; // 0x500        
        [[maybe_unused]] std::uint8_t pad_0x504[0x4];
        
        // Datamap fields:
        // void m_pSpringJoint; // 0x4c0
        // float InputSetFrequency; // 0x0
        // float InputSetDampingRatio; // 0x0
        // float InputSetRestLength; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysicsSpring because it is not a standard-layout class
    static_assert(sizeof(CPhysicsSpring) == 0x508);
};
