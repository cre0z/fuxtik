#pragma once
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"
#include "source2sdk/server/IntervalTimer.hpp"
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
    // Size: 0xb88
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsIncGrenade"
    #pragma pack(push, 1)
    class CMolotovProjectile : public server::CBaseCSGrenadeProjectile
    {
    public:
        // metadata: MNetworkEnable
        bool m_bIsIncGrenade; // 0xa90        
        [[maybe_unused]] std::uint8_t pad_0xa91[0xb]; // 0xa91
        bool m_bDetonated; // 0xa9c        
        [[maybe_unused]] std::uint8_t pad_0xa9d[0x3]; // 0xa9d
        server::IntervalTimer m_stillTimer; // 0xaa0        
        [[maybe_unused]] std::uint8_t pad_0xab0[0xd0]; // 0xab0
        bool m_bHasBouncedOffPlayer; // 0xb80        
        [[maybe_unused]] std::uint8_t pad_0xb81[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMolotovProjectile because it is not a standard-layout class
    static_assert(sizeof(CMolotovProjectile) == 0xb88);
};
