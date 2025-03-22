#pragma once
#include "source2sdk/server/CMarkupVolume.hpp"
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
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x750
    // Has VTable
    // Construct disallowed
    // MConstructibleClassBase
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CMarkupVolumeTagged : public server::CMarkupVolume
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x718[0x30]; // 0x718
        bool m_bIsGroup; // 0x748        
        bool m_bGroupByPrefab; // 0x749        
        bool m_bGroupByVolume; // 0x74a        
        bool m_bGroupOtherGroups; // 0x74b        
        bool m_bIsInGroup; // 0x74c        
        [[maybe_unused]] std::uint8_t pad_0x74d[0x3];
        
        // Datamap fields:
        // void m_GroupNames; // 0x718
        // void m_Tags; // 0x730
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMarkupVolumeTagged because it is not a standard-layout class
    static_assert(sizeof(CMarkupVolumeTagged) == 0x750);
};
