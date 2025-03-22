#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/MoveLinearAuthoredPos_t.hpp"
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
    // Size: 0x838
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkIncludeByName "m_vecVelocity"
    // static metadata: MNetworkOverride "m_fFlags CBaseEntity"
    #pragma pack(push, 1)
    class CFuncMoveLinear : public server::CBaseToggle
    {
    public:
        server::MoveLinearAuthoredPos_t m_authoredPosition; // 0x790        
        QAngle m_angMoveEntitySpace; // 0x794        
        Vector m_vecMoveDirParentSpace; // 0x7a0        
        [[maybe_unused]] std::uint8_t pad_0x7ac[0x4]; // 0x7ac
        CUtlSymbolLarge m_soundStart; // 0x7b0        
        CUtlSymbolLarge m_soundStop; // 0x7b8        
        CUtlSymbolLarge m_currentSound; // 0x7c0        
        float m_flBlockDamage; // 0x7c8        
        float m_flStartPosition; // 0x7cc        
        [[maybe_unused]] std::uint8_t pad_0x7d0[0x8]; // 0x7d0
        entity2::CEntityIOOutput m_OnFullyOpen; // 0x7d8        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0x800        
        bool m_bCreateMovableNavMesh; // 0x828        
        bool m_bCreateNavObstacle; // 0x829        
        [[maybe_unused]] std::uint8_t pad_0x82a[0xe];
        
        // Datamap fields:
        // float m_flMoveDistance; // 0x714
        // void CFuncMoveLinearNavObstacleThink; // 0x0
        // void CFuncMoveLinearNavMovableThink; // 0x0
        // void InputOpen; // 0x0
        // void InputClose; // 0x0
        // float InputSetPosition; // 0x0
        // float InputSetSpeed; // 0x0
        // CUtlSymbolLarge InputTeleportToTarget; // 0x0
        // float InputResetPosition; // 0x0
        // float InputSetMoveDistanceFromStart; // 0x0
        // float InputSetMoveDistanceFromEnd; // 0x0
        // void CFuncMoveLinearStopMoveSound; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncMoveLinear because it is not a standard-layout class
    static_assert(sizeof(CFuncMoveLinear) == 0x838);
};
