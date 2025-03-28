#pragma once
#include "source2sdk/client/C_BaseCSGrenadeProjectile.hpp"
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
    // Size: 0x1178
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsIncGrenade"
    #pragma pack(push, 1)
    class C_MolotovProjectile : public client::C_BaseCSGrenadeProjectile
    {
    public:
        // metadata: MNetworkEnable
        bool m_bIsIncGrenade; // 0x1150        
        [[maybe_unused]] std::uint8_t pad_0x1151[0x27];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_MolotovProjectile because it is not a standard-layout class
    static_assert(sizeof(C_MolotovProjectile) == 0x1178);
};
