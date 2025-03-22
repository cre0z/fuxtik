#pragma once
#include "source2sdk/server/CCSGameModeRules.hpp"
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
    // Size: 0x80
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CUtlString m_WeaponSequence"
    #pragma pack(push, 1)
    class CCSGameModeRules_ArmsRace : public server::CCSGameModeRules
    {
    public:
        // metadata: MNetworkEnable
        // m_WeaponSequence has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CNetworkUtlVectorBase<CUtlString> m_WeaponSequence;
        char m_WeaponSequence[0x18]; // 0x30        
        [[maybe_unused]] std::uint8_t pad_0x48[0x38];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CCSGameModeRules_ArmsRace because it is not a standard-layout class
    static_assert(sizeof(CCSGameModeRules_ArmsRace) == 0x80);
};
