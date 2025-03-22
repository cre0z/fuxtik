#pragma once
#include "source2sdk/server/CCSWeaponBase.hpp"
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
    // Size: 0xeb8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "int m_zoomLevel"
    // static metadata: MNetworkVarNames "int m_iBurstShotsRemaining"
    // static metadata: MNetworkVarNames "bool m_bNeedsBoltAction"
    #pragma pack(push, 1)
    class CCSWeaponBaseGun : public server::CCSWeaponBase
    {
    public:
        // metadata: MNetworkEnable
        int32_t m_zoomLevel; // 0xe98        
        // metadata: MNetworkEnable
        int32_t m_iBurstShotsRemaining; // 0xe9c        
        [[maybe_unused]] std::uint8_t pad_0xea0[0x8]; // 0xea0
        int32_t m_silencedModelIndex; // 0xea8        
        bool m_inPrecache; // 0xeac        
        // metadata: MNetworkEnable
        bool m_bNeedsBoltAction; // 0xead        
        bool m_bSkillReloadAvailable; // 0xeae        
        bool m_bSkillReloadLiftedReloadKey; // 0xeaf        
        bool m_bSkillBoltInterruptAvailable; // 0xeb0        
        bool m_bSkillBoltLiftedFireKey; // 0xeb1        
        [[maybe_unused]] std::uint8_t pad_0xeb2[0x6];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSWeaponBaseGun because it is not a standard-layout class
    static_assert(sizeof(CCSWeaponBaseGun) == 0xeb8);
};
