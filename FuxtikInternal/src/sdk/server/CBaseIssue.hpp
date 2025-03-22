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
    class CVoteController;
};

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x178
    // Has VTable
    // Is Abstract
    #pragma pack(push, 1)
    class CBaseIssue
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x20]; // 0x0
        char m_szTypeString[64]; // 0x20        
        char m_szDetailsString[260]; // 0x60        
        int32_t m_iNumYesVotes; // 0x164        
        int32_t m_iNumNoVotes; // 0x168        
        int32_t m_iNumPotentialVotes; // 0x16c        
        server::CVoteController* m_pVoteController; // 0x170        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CBaseIssue, m_szTypeString) == 0x20);
    static_assert(offsetof(CBaseIssue, m_szDetailsString) == 0x60);
    static_assert(offsetof(CBaseIssue, m_iNumYesVotes) == 0x164);
    static_assert(offsetof(CBaseIssue, m_iNumNoVotes) == 0x168);
    static_assert(offsetof(CBaseIssue, m_iNumPotentialVotes) == 0x16c);
    static_assert(offsetof(CBaseIssue, m_pVoteController) == 0x170);
    
    static_assert(sizeof(CBaseIssue) == 0x178);
};
