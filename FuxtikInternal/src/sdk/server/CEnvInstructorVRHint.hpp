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
    // Size: 0x500
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvInstructorVRHint : public server::CPointEntity
    {
    public:
        CUtlSymbolLarge m_iszName; // 0x4c0        
        CUtlSymbolLarge m_iszHintTargetEntity; // 0x4c8        
        int32_t m_iTimeout; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4d4[0x4]; // 0x4d4
        CUtlSymbolLarge m_iszCaption; // 0x4d8        
        CUtlSymbolLarge m_iszStartSound; // 0x4e0        
        int32_t m_iLayoutFileType; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4ec[0x4]; // 0x4ec
        CUtlSymbolLarge m_iszCustomLayoutFile; // 0x4f0        
        int32_t m_iAttachType; // 0x4f8        
        float m_flHeightOffset; // 0x4fc        
        
        // Datamap fields:
        // CUtlSymbolLarge InputShowHint; // 0x0
        // void InputEndHint; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvInstructorVRHint because it is not a standard-layout class
    static_assert(sizeof(CEnvInstructorVRHint) == 0x500);
};
