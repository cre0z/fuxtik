#pragma once
#include "source2sdk/soundsystem_voicecontainers/CVSound.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem_voicecontainers
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem_voicecontainers
{
    class CVoiceContainerAnalysisBase;
};

namespace source2sdk::soundsystem_voicecontainers
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0xf0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MVDataRoot
    // static metadata: MVDataNodeType "1"
    // static metadata: MFgdFromSchemaEditablePolymorphicThisClass
    // static metadata: MVDataFileExtension
    // static metadata: MPropertyFriendlyName "VSND Container"
    // static metadata: MPropertyDescription "Voice Container Base"
    #pragma pack(push, 1)
    class CVoiceContainerBase
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x00[0x20]; // 0x0
        // metadata: MPropertySuppressField
        soundsystem_voicecontainers::CVSound m_vSound; // 0x20        
        [[maybe_unused]] std::uint8_t pad_0xa0[0x30]; // 0xa0
        // metadata: MPropertyFriendlyName "Enable Analyzers"
        bool m_bHideAnalyzers; // 0xd0        
        [[maybe_unused]] std::uint8_t pad_0xd1[0x7]; // 0xd1
        // metadata: MPropertyFriendlyName "Container Analyzers"
        // metadata: MPropertySuppressExpr "m_bHideAnalyzers == false"
        // m_analysisContainers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<soundsystem_voicecontainers::CVoiceContainerAnalysisBase*> m_analysisContainers;
        char m_analysisContainers[0x18]; // 0xd8        
        
        // Static fields:
        static bool &Get_bAudioFinishedPlaying() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CVoiceContainerBase")->GetStaticFields()[0]->m_pInstance);};
        static bool &Get_bAudioStillPlaying() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("!GlobalTypes")->FindDeclaredClass("CVoiceContainerBase")->GetStaticFields()[1]->m_pInstance);};
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CVoiceContainerBase, m_vSound) == 0x20);
    static_assert(offsetof(CVoiceContainerBase, m_bHideAnalyzers) == 0xd0);
    static_assert(offsetof(CVoiceContainerBase, m_analysisContainers) == 0xd8);
    
    static_assert(sizeof(CVoiceContainerBase) == 0xf0);
};
