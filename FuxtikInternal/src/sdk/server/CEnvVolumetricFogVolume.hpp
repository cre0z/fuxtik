#pragma once
#include "source2sdk/server/CBaseEntity.hpp"
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
    // Size: 0x508
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
    class CEnvVolumetricFogVolume : public server::CBaseEntity
    {
    public:
        // metadata: MNetworkEnable
        bool m_bActive; // 0x4c0        
        [[maybe_unused]] std::uint8_t pad_0x4c1[0x3]; // 0x4c1
        // metadata: MNetworkEnable
        Vector m_vBoxMins; // 0x4c4        
        // metadata: MNetworkEnable
        Vector m_vBoxMaxs; // 0x4d0        
        // metadata: MNetworkEnable
        bool m_bStartDisabled; // 0x4dc        
        [[maybe_unused]] std::uint8_t pad_0x4dd[0x3]; // 0x4dd
        // metadata: MNetworkEnable
        float m_flStrength; // 0x4e0        
        // metadata: MNetworkEnable
        int32_t m_nFalloffShape; // 0x4e4        
        // metadata: MNetworkEnable
        float m_flFalloffExponent; // 0x4e8        
        // metadata: MNetworkEnable
        float m_flHeightFogDepth; // 0x4ec        
        // metadata: MNetworkEnable
        float m_fHeightFogEdgeWidth; // 0x4f0        
        // metadata: MNetworkEnable
        float m_fIndirectLightStrength; // 0x4f4        
        // metadata: MNetworkEnable
        float m_fSunLightStrength; // 0x4f8        
        // metadata: MNetworkEnable
        float m_fNoiseStrength; // 0x4fc        
        // metadata: MNetworkEnable
        bool m_bOverrideIndirectLightStrength; // 0x500        
        // metadata: MNetworkEnable
        bool m_bOverrideSunLightStrength; // 0x501        
        // metadata: MNetworkEnable
        bool m_bOverrideNoiseStrength; // 0x502        
        [[maybe_unused]] std::uint8_t pad_0x503[0x5];
        
        // Datamap fields:
        // bool InputEnable; // 0x0
        // bool InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvVolumetricFogVolume because it is not a standard-layout class
    static_assert(sizeof(CEnvVolumetricFogVolume) == 0x508);
};
