#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/server/CBeam.hpp"
#include "source2sdk/server/Touch_t.hpp"
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
    // Size: 0x858
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CEnvBeam : public server::CBeam
    {
    public:
        int32_t m_active; // 0x7b0        
        [[maybe_unused]] std::uint8_t pad_0x7b4[0x4]; // 0x7b4
        // m_spriteTexture has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIMaterial2> m_spriteTexture;
        char m_spriteTexture[0x8]; // 0x7b8        
        CUtlSymbolLarge m_iszStartEntity; // 0x7c0        
        CUtlSymbolLarge m_iszEndEntity; // 0x7c8        
        float m_life; // 0x7d0        
        float m_boltWidth; // 0x7d4        
        float m_noiseAmplitude; // 0x7d8        
        int32_t m_speed; // 0x7dc        
        float m_restrike; // 0x7e0        
        [[maybe_unused]] std::uint8_t pad_0x7e4[0x4]; // 0x7e4
        CUtlSymbolLarge m_iszSpriteName; // 0x7e8        
        int32_t m_frameStart; // 0x7f0        
        Vector m_vEndPointWorld; // 0x7f4        
        Vector m_vEndPointRelative; // 0x800        
        float m_radius; // 0x80c        
        server::Touch_t m_TouchType; // 0x810        
        [[maybe_unused]] std::uint8_t pad_0x814[0x4]; // 0x814
        CUtlSymbolLarge m_iFilterName; // 0x818        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hFilter;
        char m_hFilter[0x4]; // 0x820        
        [[maybe_unused]] std::uint8_t pad_0x824[0x4]; // 0x824
        CUtlSymbolLarge m_iszDecal; // 0x828        
        entity2::CEntityIOOutput m_OnTouchedByEntity; // 0x830        
        
        // Datamap fields:
        // int32_t m_nClipStyle; // 0x794
        // void CEnvBeamStrikeThink; // 0x0
        // void CEnvBeamUpdateThink; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputToggle; // 0x0
        // void InputStrikeOnce; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEnvBeam because it is not a standard-layout class
    static_assert(sizeof(CEnvBeam) == 0x858);
};
