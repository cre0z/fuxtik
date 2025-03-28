#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x590
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "Vector m_vBoxMins"
    // static metadata: MNetworkVarNames "Vector m_vBoxMaxs"
    // static metadata: MNetworkVarNames "bool m_bStartDisabled"
    // static metadata: MNetworkVarNames "float m_flStrength"
    // static metadata: MNetworkVarNames "int m_nFalloffShape"
    // static metadata: MNetworkVarNames "float m_flFalloffExponent"
    // static metadata: MNetworkVarNames "float m_flHeightFogDepth"
    // static metadata: MNetworkVarNames "float m_fHeightFogEdgeWidth"
    // static metadata: MNetworkVarNames "float m_fIndirectLightStrength"
    // static metadata: MNetworkVarNames "float m_fSunLightStrength"
    // static metadata: MNetworkVarNames "float m_fNoiseStrength"
    // static metadata: MNetworkVarNames "bool m_bOverrideIndirectLightStrength"
    // static metadata: MNetworkVarNames "bool m_bOverrideSunLightStrength"
    // static metadata: MNetworkVarNames "bool m_bOverrideNoiseStrength"
    #pragma pack(push, 1)
    class C_EnvVolumetricFogVolume : public client::C_BaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bActive; // 0x548        
        [[maybe_unused]] std::uint8_t pad_0x549[0x3]; // 0x549
        // metadata: MNetworkEnable
        Vector m_vBoxMins; // 0x54c        
        // metadata: MNetworkEnable
        Vector m_vBoxMaxs; // 0x558        
        // metadata: MNetworkEnable
        bool m_bStartDisabled; // 0x564        
        [[maybe_unused]] std::uint8_t pad_0x565[0x3]; // 0x565
        // metadata: MNetworkEnable
        float m_flStrength; // 0x568        
        // metadata: MNetworkEnable
        int32_t m_nFalloffShape; // 0x56c        
        // metadata: MNetworkEnable
        float m_flFalloffExponent; // 0x570        
        // metadata: MNetworkEnable
        float m_flHeightFogDepth; // 0x574        
        // metadata: MNetworkEnable
        float m_fHeightFogEdgeWidth; // 0x578        
        // metadata: MNetworkEnable
        float m_fIndirectLightStrength; // 0x57c        
        // metadata: MNetworkEnable
        float m_fSunLightStrength; // 0x580        
        // metadata: MNetworkEnable
        float m_fNoiseStrength; // 0x584        
        // metadata: MNetworkEnable
        bool m_bOverrideIndirectLightStrength; // 0x588        
        // metadata: MNetworkEnable
        bool m_bOverrideSunLightStrength; // 0x589        
        // metadata: MNetworkEnable
        bool m_bOverrideNoiseStrength; // 0x58a        
        [[maybe_unused]] std::uint8_t pad_0x58b[0x5];
        
        // Datamap fields:
        // bool InputEnable; // 0x0
        // bool InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EnvVolumetricFogVolume because it is not a standard-layout class
    static_assert(sizeof(C_EnvVolumetricFogVolume) == 0x590);
};
