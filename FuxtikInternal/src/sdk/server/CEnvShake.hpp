#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/server/CPhysicsShake.hpp"
#include "source2sdk/server/CPointEntity.hpp"
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
    // Size: 0x510
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvShake : public server::CPointEntity
    {
    public:
        CUtlSymbolLarge m_limitToEntity; // 0x4c0        
        float m_Amplitude; // 0x4c8        
        float m_Frequency; // 0x4cc        
        float m_Duration; // 0x4d0        
        float m_Radius; // 0x4d4        
        client::GameTime_t m_stopTime; // 0x4d8        
        client::GameTime_t m_nextShake; // 0x4dc        
        float m_currentAmp; // 0x4e0        
        Vector m_maxForce; // 0x4e4        
        [[maybe_unused]] std::uint8_t pad_0x4f0[0x8]; // 0x4f0
        server::CPhysicsShake m_shakeCallback; // 0x4f8        
        
        // Datamap fields:
        // void m_pShakeController; // 0x4f0
        // void InputStartShake; // 0x0
        // void InputStopShake; // 0x0
        // float InputAmplitude; // 0x0
        // float InputFrequency; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvShake because it is not a standard-layout class
    static_assert(sizeof(CEnvShake) == 0x510);
};
