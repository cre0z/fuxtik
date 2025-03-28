#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/magnetted_objects_t.hpp"
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
    // Size: 0x978
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysMagnet : public server::CBaseAnimGraph
    {
    public:
        entity2::CEntityIOOutput m_OnMagnetAttach; // 0x8e8        
        entity2::CEntityIOOutput m_OnMagnetDetach; // 0x910        
        float m_massScale; // 0x938        
        float m_forceLimit; // 0x93c        
        float m_torqueLimit; // 0x940        
        [[maybe_unused]] std::uint8_t pad_0x944[0x4]; // 0x944
        // m_MagnettedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::magnetted_objects_t> m_MagnettedEntities;
        char m_MagnettedEntities[0x18]; // 0x948        
        bool m_bActive; // 0x960        
        bool m_bHasHitSomething; // 0x961        
        [[maybe_unused]] std::uint8_t pad_0x962[0x2]; // 0x962
        float m_flTotalMass; // 0x964        
        float m_flRadius; // 0x968        
        client::GameTime_t m_flNextSuckTime; // 0x96c        
        int32_t m_iMaxObjectsAttached; // 0x970        
        [[maybe_unused]] std::uint8_t pad_0x974[0x4];
        
        // Datamap fields:
        // void InputToggle; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysMagnet because it is not a standard-layout class
    static_assert(sizeof(CPhysMagnet) == 0x978);
};
