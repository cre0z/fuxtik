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
    // Size: 0x108
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Blender"
    // static metadata: MPropertyDescription "Blends two containers."
    #pragma pack(push, 1)
    class CVoiceContainerBlender : public soundsystem_voicecontainers::CVoiceContainerBase
    {
    public:
        // m_firstSound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_firstSound;
        char m_firstSound[0x8]; // 0xf0        
        // m_secondSound has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCVoiceContainerBase> m_secondSound;
        char m_secondSound[0x8]; // 0xf8        
        float m_flBlendFactor; // 0x100        
        [[maybe_unused]] std::uint8_t pad_0x104[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CVoiceContainerBlender because it is not a standard-layout class
    static_assert(sizeof(CVoiceContainerBlender) == 0x108);
};
