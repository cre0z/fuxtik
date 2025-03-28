#pragma once
#include "source2sdk/client/C_Sprite.hpp"
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
    // Size: 0xde8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_FireSprite : public client::C_Sprite
    {
    public:
        Vector m_vecMoveDir; // 0xdd8        
        bool m_bFadeFromAbove; // 0xde4        
        [[maybe_unused]] std::uint8_t pad_0xde5[0x3];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_FireSprite because it is not a standard-layout class
    static_assert(sizeof(C_FireSprite) == 0xde8);
};
