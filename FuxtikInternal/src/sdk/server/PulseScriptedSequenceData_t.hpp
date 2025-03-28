#pragma once
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
    // Standard-layout class: true
    // Size: 0x30
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    struct PulseScriptedSequenceData_t
    {
    public:
        int32_t m_nActorID; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x04[0x4]; // 0x4
        CUtlString m_szPreIdleSequence; // 0x8        
        CUtlString m_szEntrySequence; // 0x10        
        CUtlString m_szSequence; // 0x18        
        CUtlString m_szExitSequence; // 0x20        
        bool m_bLoopPreIdleSequence; // 0x28        
        bool m_bLoopActionSequence; // 0x29        
        bool m_bLoopPostIdleSequence; // 0x2a        
        bool m_bIgnoreLookAt; // 0x2b        
        [[maybe_unused]] std::uint8_t pad_0x2c[0x4];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(PulseScriptedSequenceData_t, m_nActorID) == 0x0);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_szPreIdleSequence) == 0x8);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_szEntrySequence) == 0x10);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_szSequence) == 0x18);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_szExitSequence) == 0x20);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_bLoopPreIdleSequence) == 0x28);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_bLoopActionSequence) == 0x29);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_bLoopPostIdleSequence) == 0x2a);
    static_assert(offsetof(PulseScriptedSequenceData_t, m_bIgnoreLookAt) == 0x2b);
    
    static_assert(sizeof(PulseScriptedSequenceData_t) == 0x30);
};
