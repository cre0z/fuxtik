#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
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
    // Size: 0xd20
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "float m_gravityScale"
    // static metadata: MNetworkVarNames "float m_linearLimit"
    // static metadata: MNetworkVarNames "float m_linearDamping"
    // static metadata: MNetworkVarNames "float m_angularLimit"
    // static metadata: MNetworkVarNames "float m_angularDamping"
    // static metadata: MNetworkVarNames "float m_linearForce"
    // static metadata: MNetworkVarNames "float m_flFrequency"
    // static metadata: MNetworkVarNames "float m_flDampingRatio"
    // static metadata: MNetworkVarNames "Vector m_vecLinearForcePointAt"
    // static metadata: MNetworkVarNames "bool m_bCollapseToForcePoint"
    // static metadata: MNetworkVarNames "Vector m_vecLinearForcePointAtWorld"
    // static metadata: MNetworkVarNames "Vector m_vecLinearForceDirection"
    // static metadata: MNetworkVarNames "bool m_bConvertToDebrisWhenPossible"
    #pragma pack(push, 1)
    class C_TriggerPhysics : public client::C_BaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        float m_gravityScale; // 0xcd0        
        // metadata: MNetworkEnable
        float m_linearLimit; // 0xcd4        
        // metadata: MNetworkEnable
        float m_linearDamping; // 0xcd8        
        // metadata: MNetworkEnable
        float m_angularLimit; // 0xcdc        
        // metadata: MNetworkEnable
        float m_angularDamping; // 0xce0        
        // metadata: MNetworkEnable
        float m_linearForce; // 0xce4        
        // metadata: MNetworkEnable
        float m_flFrequency; // 0xce8        
        // metadata: MNetworkEnable
        float m_flDampingRatio; // 0xcec        
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAt; // 0xcf0        
        // metadata: MNetworkEnable
        bool m_bCollapseToForcePoint; // 0xcfc        
        [[maybe_unused]] std::uint8_t pad_0xcfd[0x3]; // 0xcfd
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAtWorld; // 0xd00        
        // metadata: MNetworkEnable
        Vector m_vecLinearForceDirection; // 0xd0c        
        // metadata: MNetworkEnable
        bool m_bConvertToDebrisWhenPossible; // 0xd18        
        [[maybe_unused]] std::uint8_t pad_0xd19[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TriggerPhysics because it is not a standard-layout class
    static_assert(sizeof(C_TriggerPhysics) == 0xd20);
};
