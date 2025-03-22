#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/client/TimedEvent.hpp"
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
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class C_Precipitation : public client::C_BaseTrigger
    {
    public:
        float m_flDensity; // 0xcd0        
        [[maybe_unused]] std::uint8_t pad_0xcd4[0xc]; // 0xcd4
        float m_flParticleInnerDist; // 0xce0        
        [[maybe_unused]] std::uint8_t pad_0xce4[0x4]; // 0xce4
        char* m_pParticleDef; // 0xce8        
        [[maybe_unused]] std::uint8_t pad_0xcf0[0x20]; // 0xcf0
        client::TimedEvent m_tParticlePrecipTraceTimer[1]; // 0xd10        
        bool m_bActiveParticlePrecipEmitter[1]; // 0xd18        
        bool m_bParticlePrecipInitialized; // 0xd19        
        bool m_bHasSimulatedSinceLastSceneObjectUpdate; // 0xd1a        
        [[maybe_unused]] std::uint8_t pad_0xd1b[0x1]; // 0xd1b
        int32_t m_nAvailableSheetSequencesMaxIndex; // 0xd1c        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Precipitation because it is not a standard-layout class
    static_assert(sizeof(C_Precipitation) == 0xd20);
};
