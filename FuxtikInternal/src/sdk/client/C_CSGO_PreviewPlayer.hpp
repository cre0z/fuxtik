#pragma once
#include "source2sdk/client/C_CSPlayerPawn.hpp"
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
    // Size: 0x2460
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_CSGO_PreviewPlayer : public client::C_CSPlayerPawn
    {
    public:
        CUtlString m_animgraph; // 0x23c8        
        CGlobalSymbol m_animgraphCharacterModeString; // 0x23d0        
        float m_flInitialModelScale; // 0x23d8        
        [[maybe_unused]] std::uint8_t pad_0x23dc[0x84];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSGO_PreviewPlayer because it is not a standard-layout class
    static_assert(sizeof(C_CSGO_PreviewPlayer) == 0x2460);
};
