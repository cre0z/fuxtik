#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseIssue;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x670
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_iActiveIssueIndex"
    // static metadata: MNetworkVarNames "int m_iOnlyTeamToVote"
    // static metadata: MNetworkVarNames "int m_nVoteOptionCount"
    // static metadata: MNetworkVarNames "int m_nPotentialVotes"
    // static metadata: MNetworkVarNames "bool m_bIsYesNoVote"
    #pragma pack(push, 1)
    class CVoteController : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_iActiveIssueIndex; // 0x4c0        
        // metadata: MNetworkEnable
        int32_t m_iOnlyTeamToVote; // 0x4c4        
        // metadata: MNetworkEnable
        int32_t m_nVoteOptionCount[5]; // 0x4c8        
        // metadata: MNetworkEnable
        int32_t m_nPotentialVotes; // 0x4dc        
        // metadata: MNetworkEnable
        bool m_bIsYesNoVote; // 0x4e0        
        [[maybe_unused]] std::uint8_t pad_0x4e1[0x7]; // 0x4e1
        server::CountdownTimer m_acceptingVotesTimer; // 0x4e8        
        server::CountdownTimer m_executeCommandTimer; // 0x500        
        server::CountdownTimer m_resetVoteTimer; // 0x518        
        int32_t m_nVotesCast[64]; // 0x530        
        CPlayerSlot m_playerHoldingVote; // 0x630        
        CPlayerSlot m_playerOverrideForVote; // 0x634        
        int32_t m_nHighestCountIndex; // 0x638        
        [[maybe_unused]] std::uint8_t pad_0x63c[0x4]; // 0x63c
        // m_potentialIssues has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::CBaseIssue*> m_potentialIssues;
        char m_potentialIssues[0x18]; // 0x640        
        // m_VoteOptions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<char*> m_VoteOptions;
        char m_VoteOptions[0x18]; // 0x658        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoteController because it is not a standard-layout class
    static_assert(sizeof(CVoteController) == 0x670);
};
