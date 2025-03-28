#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CRotButton.hpp"
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
    // Size: 0x9e0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CMomentaryRotButton : public server::CRotButton
    {
    public:
        // m_Position has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_Position;
        char m_Position[0x28]; // 0x8e0        
        entity2::CEntityIOOutput m_OnUnpressed; // 0x908        
        entity2::CEntityIOOutput m_OnFullyOpen; // 0x930        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0x958        
        entity2::CEntityIOOutput m_OnReachedPosition; // 0x980        
        int32_t m_lastUsed; // 0x9a8        
        QAngle m_start; // 0x9ac        
        QAngle m_end; // 0x9b8        
        float m_IdealYaw; // 0x9c4        
        CUtlSymbolLarge m_sNoise; // 0x9c8        
        bool m_bUpdateTarget; // 0x9d0        
        [[maybe_unused]] std::uint8_t pad_0x9d1[0x3]; // 0x9d1
        int32_t m_direction; // 0x9d4        
        float m_returnSpeed; // 0x9d8        
        float m_flStartPosition; // 0x9dc        
        
        // Datamap fields:
        // bool m_bSolidBsp; // 0x7e8
        // void CMomentaryRotButtonUseMoveDone; // 0x0
        // void CMomentaryRotButtonReturnMoveDone; // 0x0
        // void CMomentaryRotButtonSetPositionMoveDone; // 0x0
        // void CMomentaryRotButtonUpdateThink; // 0x0
        // float InputSetPosition; // 0x0
        // float InputSetPositionImmediately; // 0x0
        // void InputDisableUpdateTarget; // 0x0
        // void InputEnableUpdateTarget; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMomentaryRotButton because it is not a standard-layout class
    static_assert(sizeof(CMomentaryRotButton) == 0x9e0);
};
