#pragma once
#include "source2sdk/resourcesystem/InfoForResourceTypeCVoiceContainerBase.hpp"
#include "source2sdk/soundsystem_voicecontainers/CVoiceContainerBase.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf8
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Default Container"
    // static metadata: MPropertyDescription "Voice Container Default"
    #pragma pack(push, 1)
    class CVoiceContainerDefault : public soundsystem_voicecontainers::CVoiceContainerBase
    {
    public:
        // metadata: MPropertyFriendlyName "Vsnd"
        // metadata: MPropertyDescription "Load the audio content into the kv3 content"
        // m_vsndReference has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_vsndReference;
        char m_vsndReference[0x8]; // 0xf0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoiceContainerDefault because it is not a standard-layout class
    static_assert(sizeof(CVoiceContainerDefault) == 0xf8);
};
