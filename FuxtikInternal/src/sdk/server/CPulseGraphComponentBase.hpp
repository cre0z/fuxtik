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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x28
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CPulseGraphComponentBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x8]; // 0x0
        // m_hOwner has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOwner;
        char m_hOwner[0x4]; // 0x8        
        bool m_bActivated; // 0xc        
        [[maybe_unused]] std::uint8_t pad_0x0d[0x3]; // 0xd
        CUtlSymbolLarge m_sNameFixupStaticPrefix; // 0x10        
        CUtlSymbolLarge m_sNameFixupParent; // 0x18        
        CUtlSymbolLarge m_sNameFixupLocal; // 0x20        
        
        // Datamap fields:
        // void CPulseGraphComponentBaseCallPulse_OnThink; // 0x0
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CPulseGraphComponentBase, m_hOwner) == 0x8);
    static_assert(offsetof(CPulseGraphComponentBase, m_bActivated) == 0xc);
    static_assert(offsetof(CPulseGraphComponentBase, m_sNameFixupStaticPrefix) == 0x10);
    static_assert(offsetof(CPulseGraphComponentBase, m_sNameFixupParent) == 0x18);
    static_assert(offsetof(CPulseGraphComponentBase, m_sNameFixupLocal) == 0x20);
    
    static_assert(sizeof(CPulseGraphComponentBase) == 0x28);
};
