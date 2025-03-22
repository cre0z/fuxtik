#pragma once
#include "source2sdk/client/C_CSWeaponBase.hpp"
#include "source2sdk/client/CountdownTimer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1a90
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CountdownTimer m_SequenceCompleteTimer"
    // static metadata: MNetworkVarNames "bool m_bRedraw"
    #pragma pack(push, 1)
    class C_WeaponBaseItem : public client::C_CSWeaponBase
    {
    public:
        // metadata: MNetworkEnable
        client::CountdownTimer m_SequenceCompleteTimer; // 0x1a70        
        // metadata: MNetworkEnable
        bool m_bRedraw; // 0x1a88        
        [[maybe_unused]] std::uint8_t pad_0x1a89[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_WeaponBaseItem because it is not a standard-layout class
    static_assert(sizeof(C_WeaponBaseItem) == 0x1a90);
};
