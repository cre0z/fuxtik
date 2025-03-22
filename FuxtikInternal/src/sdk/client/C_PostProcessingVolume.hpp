#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCPostProcessingResource.hpp"
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
    // Size: 0xd20
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "HPostProcessingStrong m_hPostSettings"
    // static metadata: MNetworkVarNames "float m_flFadeDuration"
    // static metadata: MNetworkVarNames "float m_flMinLogExposure"
    // static metadata: MNetworkVarNames "float m_flMaxLogExposure"
    // static metadata: MNetworkVarNames "float m_flMinExposure"
    // static metadata: MNetworkVarNames "float m_flMaxExposure"
    // static metadata: MNetworkVarNames "float m_flExposureCompensation"
    // static metadata: MNetworkVarNames "float m_flExposureFadeSpeedUp"
    // static metadata: MNetworkVarNames "float m_flExposureFadeSpeedDown"
    // static metadata: MNetworkVarNames "float m_flTonemapEVSmoothingRange"
    // static metadata: MNetworkVarNames "bool m_bMaster"
    // static metadata: MNetworkVarNames "bool m_bExposureControl"
    // static metadata: MNetworkVarNames "float m_flRate"
    // static metadata: MNetworkVarNames "float m_flTonemapPercentTarget"
    // static metadata: MNetworkVarNames "float m_flTonemapPercentBrightPixels"
    // static metadata: MNetworkVarNames "float m_flTonemapMinAvgLum"
    #pragma pack(push, 1)
    class C_PostProcessingVolume : public client::C_BaseTrigger
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xcd0[0x10]; // 0xcd0
        // metadata: MNetworkEnable
        // m_hPostSettings has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeCPostProcessingResource> m_hPostSettings;
        char m_hPostSettings[0x8]; // 0xce0        
        // metadata: MNetworkEnable
        float m_flFadeDuration; // 0xce8        
        // metadata: MNetworkEnable
        float m_flMinLogExposure; // 0xcec        
        // metadata: MNetworkEnable
        float m_flMaxLogExposure; // 0xcf0        
        // metadata: MNetworkEnable
        float m_flMinExposure; // 0xcf4        
        // metadata: MNetworkEnable
        float m_flMaxExposure; // 0xcf8        
        // metadata: MNetworkEnable
        float m_flExposureCompensation; // 0xcfc        
        // metadata: MNetworkEnable
        float m_flExposureFadeSpeedUp; // 0xd00        
        // metadata: MNetworkEnable
        float m_flExposureFadeSpeedDown; // 0xd04        
        // metadata: MNetworkEnable
        float m_flTonemapEVSmoothingRange; // 0xd08        
        // metadata: MNetworkEnable
        bool m_bMaster; // 0xd0c        
        // metadata: MNetworkEnable
        bool m_bExposureControl; // 0xd0d        
        [[maybe_unused]] std::uint8_t pad_0xd0e[0x2]; // 0xd0e
        // metadata: MNetworkEnable
        float m_flRate; // 0xd10        
        // metadata: MNetworkEnable
        float m_flTonemapPercentTarget; // 0xd14        
        // metadata: MNetworkEnable
        float m_flTonemapPercentBrightPixels; // 0xd18        
        // metadata: MNetworkEnable
        float m_flTonemapMinAvgLum; // 0xd1c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PostProcessingVolume because it is not a standard-layout class
    static_assert(sizeof(C_PostProcessingVolume) == 0xd20);
};
