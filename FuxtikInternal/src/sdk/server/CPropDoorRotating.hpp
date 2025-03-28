#pragma once
#include "source2sdk/server/CBasePropDoor.hpp"
#include "source2sdk/server/PropDoorRotatingOpenDirection_e.hpp"
#include "source2sdk/server/PropDoorRotatingSpawnPos_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CEntityBlocker;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xea8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPropDoorRotating : public server::CBasePropDoor
    {
    public:
        Vector m_vecAxis; // 0xe10        
        float m_flDistance; // 0xe1c        
        server::PropDoorRotatingSpawnPos_t m_eSpawnPosition; // 0xe20        
        server::PropDoorRotatingOpenDirection_e m_eOpenDirection; // 0xe24        
        server::PropDoorRotatingOpenDirection_e m_eCurrentOpenDirection; // 0xe28        
        float m_flAjarAngle; // 0xe2c        
        QAngle m_angRotationAjarDeprecated; // 0xe30        
        QAngle m_angRotationClosed; // 0xe3c        
        QAngle m_angRotationOpenForward; // 0xe48        
        QAngle m_angRotationOpenBack; // 0xe54        
        QAngle m_angGoal; // 0xe60        
        Vector m_vecForwardBoundsMin; // 0xe6c        
        Vector m_vecForwardBoundsMax; // 0xe78        
        Vector m_vecBackBoundsMin; // 0xe84        
        Vector m_vecBackBoundsMax; // 0xe90        
        bool m_bAjarDoorShouldntAlwaysOpen; // 0xe9c        
        [[maybe_unused]] std::uint8_t pad_0xe9d[0x3]; // 0xe9d
        // m_hEntityBlocker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CEntityBlocker> m_hEntityBlocker;
        char m_hEntityBlocker[0x4]; // 0xea0        
        [[maybe_unused]] std::uint8_t pad_0xea4[0x4];
        
        // Datamap fields:
        // float InputSetRotationDistance; // 0x0
        // float InputSetSpeed; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPropDoorRotating because it is not a standard-layout class
    static_assert(sizeof(CPropDoorRotating) == 0xea8);
};
