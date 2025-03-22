#pragma once
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Enumerator count: 5
    // Alignment: 4
    // Size: 0x4
    enum class NPCFollowFormation_t : std::uint32_t
    {
        // MPropertyFriendlyName "Default"
        Default = 0xffffffff,
        // MPropertyFriendlyName "Close Circle"
        CloseCircle = 0x0,
        // MPropertyFriendlyName "Wide Circle"
        WideCircle = 0x1,
        // MPropertyFriendlyName "Medium Circle"
        MediumCircle = 0x5,
        // MPropertyFriendlyName "Sidekick"
        Sidekick = 0x6,
    };
};
