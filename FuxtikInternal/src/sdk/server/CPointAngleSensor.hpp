#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
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
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x588
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPointAngleSensor : public server::CPointEntity
    {
    public:
        bool m_bDisabled; // 0x4c0        
        [[maybe_unused]] std::uint8_t pad_0x4c1[0x7]; // 0x4c1
        CUtlSymbolLarge m_nLookAtName; // 0x4c8        
        // m_hTargetEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEntity;
        char m_hTargetEntity[0x4]; // 0x4d0        
        // m_hLookAtEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hLookAtEntity;
        char m_hLookAtEntity[0x4]; // 0x4d4        
        float m_flDuration; // 0x4d8        
        float m_flDotTolerance; // 0x4dc        
        client::GameTime_t m_flFacingTime; // 0x4e0        
        bool m_bFired; // 0x4e4        
        [[maybe_unused]] std::uint8_t pad_0x4e5[0x3]; // 0x4e5
        entity2::CEntityIOOutput m_OnFacingLookat; // 0x4e8        
        entity2::CEntityIOOutput m_OnNotFacingLookat; // 0x510        
        // m_TargetDir has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<Vector> m_TargetDir;
        char m_TargetDir[0x28]; // 0x538        
        // m_FacingPercentage has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_FacingPercentage;
        char m_FacingPercentage[0x28]; // 0x560        
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
        // void InputTest; // 0x0
        // CUtlSymbolLarge InputSetTargetEntity; // 0x0
        // float tolerance; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointAngleSensor because it is not a standard-layout class
    static_assert(sizeof(CPointAngleSensor) == 0x588);
};
