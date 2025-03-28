#pragma once
#include "source2sdk/client/C_PredictedViewModel.hpp"
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
    // Size: 0x1000
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkOverride "m_hWeapon"
    // static metadata: MNetworkVarNames "bool m_bShouldIgnoreOffsetAndAccuracy"
    // static metadata: MNetworkVarNames "uint32 m_nWeaponParity"
    #pragma pack(push, 1)
    class C_CSGOViewModel : public client::C_PredictedViewModel
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xf60[0x8]; // 0xf60
        // metadata: MNetworkEnable
        bool m_bShouldIgnoreOffsetAndAccuracy; // 0xf68        
        [[maybe_unused]] std::uint8_t pad_0xf69[0x3]; // 0xf69
        // metadata: MNetworkEnable
        uint32_t m_nWeaponParity; // 0xf6c        
        uint32_t m_nOldWeaponParity; // 0xf70        
        CEntityIndex m_nLastKnownAssociatedWeaponEntIndex; // 0xf74        
        bool m_bNeedToQueueHighResComposite; // 0xf78        
        [[maybe_unused]] std::uint8_t pad_0xf79[0x4f]; // 0xf79
        QAngle m_vLoweredWeaponOffset; // 0xfc8        
        [[maybe_unused]] std::uint8_t pad_0xfd4[0x2c];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_CSGOViewModel because it is not a standard-layout class
    static_assert(sizeof(C_CSGOViewModel) == 0x1000);
};
