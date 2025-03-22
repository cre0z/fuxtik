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
    // Size: 0x530
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvInstructorHint : public server::CPointEntity
    {
    public:
        CUtlSymbolLarge m_iszName; // 0x4c0        
        CUtlSymbolLarge m_iszReplace_Key; // 0x4c8        
        CUtlSymbolLarge m_iszHintTargetEntity; // 0x4d0        
        int32_t m_iTimeout; // 0x4d8        
        int32_t m_iDisplayLimit; // 0x4dc        
        CUtlSymbolLarge m_iszIcon_Onscreen; // 0x4e0        
        CUtlSymbolLarge m_iszIcon_Offscreen; // 0x4e8        
        CUtlSymbolLarge m_iszCaption; // 0x4f0        
        CUtlSymbolLarge m_iszActivatorCaption; // 0x4f8        
        Color m_Color; // 0x500        
        float m_fIconOffset; // 0x504        
        float m_fRange; // 0x508        
        uint8_t m_iPulseOption; // 0x50c        
        uint8_t m_iAlphaOption; // 0x50d        
        uint8_t m_iShakeOption; // 0x50e        
        bool m_bStatic; // 0x50f        
        bool m_bNoOffscreen; // 0x510        
        bool m_bForceCaption; // 0x511        
        [[maybe_unused]] std::uint8_t pad_0x512[0x2]; // 0x512
        int32_t m_iInstanceType; // 0x514        
        bool m_bSuppressRest; // 0x518        
        [[maybe_unused]] std::uint8_t pad_0x519[0x7]; // 0x519
        CUtlSymbolLarge m_iszBinding; // 0x520        
        bool m_bAllowNoDrawTarget; // 0x528        
        bool m_bAutoStart; // 0x529        
        bool m_bLocalPlayerOnly; // 0x52a        
        [[maybe_unused]] std::uint8_t pad_0x52b[0x5];
        
        // Datamap fields:
        // CUtlSymbolLarge InputShowHint; // 0x0
        // void InputEndHint; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvInstructorHint because it is not a standard-layout class
    static_assert(sizeof(CEnvInstructorHint) == 0x530);
};
