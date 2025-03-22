#pragma once
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
    class CBaseFilter;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x568
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CNavLinkAreaEntity : public server::CPointEntity
    {
    public:
        float m_flWidth; // 0x4c0        
        Vector m_vLocatorOffset; // 0x4c4        
        QAngle m_qLocatorAnglesOffset; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4dc[0x4]; // 0x4dc
        CUtlSymbolLarge m_strMovementForward; // 0x4e0        
        CUtlSymbolLarge m_strMovementReverse; // 0x4e8        
        int32_t m_nNavLinkIdForward; // 0x4f0        
        int32_t m_nNavLinkIdReverse; // 0x4f4        
        bool m_bEnabled; // 0x4f8        
        [[maybe_unused]] std::uint8_t pad_0x4f9[0x7]; // 0x4f9
        CUtlSymbolLarge m_strFilterName; // 0x500        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hFilter;
        char m_hFilter[0x4]; // 0x508        
        [[maybe_unused]] std::uint8_t pad_0x50c[0x4]; // 0x50c
        entity2::CEntityIOOutput m_OnNavLinkStart; // 0x510        
        entity2::CEntityIOOutput m_OnNavLinkFinish; // 0x538        
        bool m_bIsTerminus; // 0x560        
        [[maybe_unused]] std::uint8_t pad_0x561[0x7];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CNavLinkAreaEntity because it is not a standard-layout class
    static_assert(sizeof(CNavLinkAreaEntity) == 0x568);
};
