#pragma once
#include "source2sdk/client/CPlayerPawnComponent.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: unknown
    // Alignment: 0x4
    // Standard-layout class: false
    // Size: 0x48
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int32 m_totalHitsOnServer"
    #pragma pack(push, 1)
    class CCSPlayer_BulletServices : public client::CPlayerPawnComponent
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_totalHitsOnServer; // 0x40        
        [[maybe_unused]] std::uint8_t pad_0x44[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSPlayer_BulletServices because it is not a standard-layout class
    static_assert(sizeof(CCSPlayer_BulletServices) == 0x48);
};
