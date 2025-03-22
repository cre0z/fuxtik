#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CPointEntity.hpp"
#include "source2sdk/server/SoundFlags_t.hpp"
#include "source2sdk/server/SoundTypes_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CBaseFilter;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x680
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvMicrophone : public server::CPointEntity
    {
    public:
        bool m_bDisabled; // 0x4c0        
        [[maybe_unused]] std::uint8_t pad_0x4c1[0x3]; // 0x4c1
        // m_hMeasureTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hMeasureTarget;
        char m_hMeasureTarget[0x4]; // 0x4c4        
        server::SoundTypes_t m_nSoundType; // 0x4c8        
        server::SoundFlags_t m_nSoundFlags; // 0x4ca        
        float m_flSensitivity; // 0x4cc        
        float m_flSmoothFactor; // 0x4d0        
        float m_flMaxRange; // 0x4d4        
        CUtlSymbolLarge m_iszSpeakerName; // 0x4d8        
        // m_hSpeaker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hSpeaker;
        char m_hSpeaker[0x4]; // 0x4e0        
        bool m_bAvoidFeedback; // 0x4e4        
        [[maybe_unused]] std::uint8_t pad_0x4e5[0x3]; // 0x4e5
        int32_t m_iSpeakerDSPPreset; // 0x4e8        
        [[maybe_unused]] std::uint8_t pad_0x4ec[0x4]; // 0x4ec
        CUtlSymbolLarge m_iszListenFilter; // 0x4f0        
        // m_hListenFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hListenFilter;
        char m_hListenFilter[0x4]; // 0x4f8        
        [[maybe_unused]] std::uint8_t pad_0x4fc[0x4]; // 0x4fc
        // m_SoundLevel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_SoundLevel;
        char m_SoundLevel[0x28]; // 0x500        
        entity2::CEntityIOOutput m_OnRoutedSound; // 0x528        
        entity2::CEntityIOOutput m_OnHeardSound; // 0x550        
        char m_szLastSound[256]; // 0x578        
        int32_t m_iLastRoutedFrame; // 0x678        
        [[maybe_unused]] std::uint8_t pad_0x67c[0x4];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // CUtlSymbolLarge InputSetSpeakerName; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvMicrophone because it is not a standard-layout class
    static_assert(sizeof(CEnvMicrophone) == 0x680);
};
