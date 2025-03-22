#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x580
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
    class C_VoteController : public client::C_BaseEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x548[0x10]; // 0x548
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RecvProxy_VoteType"
        int32_t m_iActiveIssueIndex; // 0x558        
        // metadata: MNetworkEnable
        int32_t m_iOnlyTeamToVote; // 0x55c        
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "RecvProxy_VoteOption"
        int32_t m_nVoteOptionCount[5]; // 0x560        
        // metadata: MNetworkEnable
        int32_t m_nPotentialVotes; // 0x574        
        bool m_bVotesDirty; // 0x578        
        bool m_bTypeDirty; // 0x579        
        // metadata: MNetworkEnable
        bool m_bIsYesNoVote; // 0x57a        
        [[maybe_unused]] std::uint8_t pad_0x57b[0x5];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_VoteController because it is not a standard-layout class
    static_assert(sizeof(C_VoteController) == 0x580);
};
