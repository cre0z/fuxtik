#pragma once
#include "source2sdk/server/CBaseCSGrenadeProjectile.hpp"
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
    // Size: 0xa98
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFlashbangProjectile : public server::CBaseCSGrenadeProjectile
    {
    public:
        float m_flTimeToDetonate; // 0xa90        
        uint8_t m_numOpponentsHit; // 0xa94        
        uint8_t m_numTeammatesHit; // 0xa95        
        [[maybe_unused]] std::uint8_t pad_0xa96[0x2];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFlashbangProjectile because it is not a standard-layout class
    static_assert(sizeof(CFlashbangProjectile) == 0xa98);
};
