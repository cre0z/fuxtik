#pragma once
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
    // Size: 0x4e0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPointHurt : public server::CPointEntity
    {
    public:
        int32_t m_nDamage; // 0x4c0        
        int32_t m_bitsDamageType; // 0x4c4        
        float m_flRadius; // 0x4c8        
        float m_flDelay; // 0x4cc        
        CUtlSymbolLarge m_strTarget; // 0x4d0        
        // m_pActivator has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_pActivator;
        char m_pActivator[0x4]; // 0x4d8        
        [[maybe_unused]] std::uint8_t pad_0x4dc[0x4];
        
        // Datamap fields:
        // void CPointHurtHurtThink; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputToggle; // 0x0
        // void InputHurt; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointHurt because it is not a standard-layout class
    static_assert(sizeof(CPointHurt) == 0x4e0);
};
