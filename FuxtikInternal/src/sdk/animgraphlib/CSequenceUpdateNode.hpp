#pragma once
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/animgraphlib/CLeafUpdateNode.hpp"
#include "source2sdk/animgraphlib/CParamSpanUpdater.hpp"
#include "source2sdk/animgraphlib/TagSpan_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: animgraphlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::animgraphlib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xa8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSequenceUpdateNode : public animgraphlib::CLeafUpdateNode
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x58[0x8]; // 0x58
        animgraphlib::CParamSpanUpdater m_paramSpans; // 0x60        
        // m_tags has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<animgraphlib::TagSpan_t> m_tags;
        char m_tags[0x18]; // 0x78        
        [[maybe_unused]] std::uint8_t pad_0x90[0x4]; // 0x90
        animationsystem::HSequence m_hSequence; // 0x94        
        float m_playbackSpeed; // 0x98        
        float m_duration; // 0x9c        
        bool m_bLoop; // 0xa0        
        [[maybe_unused]] std::uint8_t pad_0xa1[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSequenceUpdateNode because it is not a standard-layout class
    static_assert(sizeof(CSequenceUpdateNode) == 0xa8);
};
