#pragma once
#include "source2sdk/particles/CParticleFunctionInitializer.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::particles
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x268
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class C_INIT_RtEnvCull : public particles::CParticleFunctionInitializer
    {
    public:
        // metadata: MPropertyFriendlyName "test direction"
        // metadata: MVectorIsCoordinate
        Vector m_vecTestDir; // 0x1c0        
        // metadata: MPropertyFriendlyName "cull normal"
        // metadata: MVectorIsCoordinate
        Vector m_vecTestNormal; // 0x1cc        
        // metadata: MPropertyFriendlyName "use velocity for test direction"
        bool m_bUseVelocity; // 0x1d8        
        // metadata: MPropertyFriendlyName "cull on miss"
        bool m_bCullOnMiss; // 0x1d9        
        // metadata: MPropertyFriendlyName "velocity test adjust lifespan"
        bool m_bLifeAdjust; // 0x1da        
        // metadata: MPropertyFriendlyName "ray trace environment name"
        char m_RtEnvName[128]; // 0x1db        
        [[maybe_unused]] std::uint8_t pad_0x25b[0x1]; // 0x25b
        // metadata: MPropertyFriendlyName "ray trace environment cp"
        int32_t m_nRTEnvCP; // 0x25c        
        // metadata: MPropertyFriendlyName "rt env control point component"
        // metadata: MPropertyAttributeChoiceName "vector_component"
        int32_t m_nComponent; // 0x260        
        [[maybe_unused]] std::uint8_t pad_0x264[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_INIT_RtEnvCull because it is not a standard-layout class
    static_assert(sizeof(C_INIT_RtEnvCull) == 0x268);
};
