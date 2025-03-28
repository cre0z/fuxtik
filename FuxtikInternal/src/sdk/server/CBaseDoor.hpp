#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/server/FuncDoorSpawnPos_t.hpp"
#include "source2sdk/server/locksound_t.hpp"
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
    // Size: 0x998
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bIsUsable"
    #pragma pack(push, 1)
    class CBaseDoor : public server::CBaseToggle
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x790[0x10]; // 0x790
        QAngle m_angMoveEntitySpace; // 0x7a0        
        Vector m_vecMoveDirParentSpace; // 0x7ac        
        server::locksound_t m_ls; // 0x7b8        
        bool m_bForceClosed; // 0x7d8        
        bool m_bDoorGroup; // 0x7d9        
        bool m_bLocked; // 0x7da        
        bool m_bIgnoreDebris; // 0x7db        
        server::FuncDoorSpawnPos_t m_eSpawnPosition; // 0x7dc        
        float m_flBlockDamage; // 0x7e0        
        [[maybe_unused]] std::uint8_t pad_0x7e4[0x4]; // 0x7e4
        CUtlSymbolLarge m_NoiseMoving; // 0x7e8        
        CUtlSymbolLarge m_NoiseArrived; // 0x7f0        
        CUtlSymbolLarge m_NoiseMovingClosed; // 0x7f8        
        CUtlSymbolLarge m_NoiseArrivedClosed; // 0x800        
        CUtlSymbolLarge m_ChainTarget; // 0x808        
        entity2::CEntityIOOutput m_OnBlockedClosing; // 0x810        
        entity2::CEntityIOOutput m_OnBlockedOpening; // 0x838        
        entity2::CEntityIOOutput m_OnUnblockedClosing; // 0x860        
        entity2::CEntityIOOutput m_OnUnblockedOpening; // 0x888        
        entity2::CEntityIOOutput m_OnFullyClosed; // 0x8b0        
        entity2::CEntityIOOutput m_OnFullyOpen; // 0x8d8        
        entity2::CEntityIOOutput m_OnClose; // 0x900        
        entity2::CEntityIOOutput m_OnOpen; // 0x928        
        entity2::CEntityIOOutput m_OnLockedUse; // 0x950        
        bool m_bLoopMoveSound; // 0x978        
        [[maybe_unused]] std::uint8_t pad_0x979[0x17]; // 0x979
        bool m_bCreateNavObstacle; // 0x990        
        bool m_isChaining; // 0x991        
        // metadata: MNetworkEnable
        bool m_bIsUsable; // 0x992        
        [[maybe_unused]] std::uint8_t pad_0x993[0x5];
        
        // Datamap fields:
        // void m_nMovingSoundGUID; // 0x97c
        //  m_ls.sLockedSound; // 0x7c0
        //  m_ls.sUnlockedSound; // 0x7c8
        // void InputOpen; // 0x0
        // void InputClose; // 0x0
        // void InputToggle; // 0x0
        // void InputLock; // 0x0
        // void InputUnlock; // 0x0
        // float InputSetSpeed; // 0x0
        // float InputSetToggleState; // 0x0
        // void CBaseDoorDoorTouch; // 0x0
        // void CBaseDoorDoorGoUp; // 0x0
        // void CBaseDoorDoorGoDown; // 0x0
        // void CBaseDoorDoorHitTop; // 0x0
        // void CBaseDoorDoorHitBottom; // 0x0
        // void CBaseDoorMovingSoundThink; // 0x0
        // void CBaseDoorCloseAreaPortalsThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseDoor because it is not a standard-layout class
    static_assert(sizeof(CBaseDoor) == 0x998);
};
