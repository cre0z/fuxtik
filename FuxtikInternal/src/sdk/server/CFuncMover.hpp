#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/SolidType_t.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/CFuncMover__Move_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CMoverPathNode;
};

namespace source2sdk::server
{
    class CPathMover;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x788
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFuncMover : public server::CBaseModelEntity
    {
    public:
        CUtlSymbolLarge m_iszPathName; // 0x710        
        // m_hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPathMover> m_hPathMover;
        char m_hPathMover[0x4]; // 0x718        
        [[maybe_unused]] std::uint8_t pad_0x71c[0x4]; // 0x71c
        CUtlSymbolLarge m_iszPathNodeStart; // 0x720        
        server::CFuncMover__Move_t m_eMoveType; // 0x728        
        bool m_bIsReversing; // 0x72c        
        [[maybe_unused]] std::uint8_t pad_0x72d[0x3]; // 0x72d
        Vector m_vTarget; // 0x730        
        float m_flStartSpeed; // 0x73c        
        float m_flPathLocation; // 0x740        
        float m_flT; // 0x744        
        int32_t m_nCurrentNodeIndex; // 0x748        
        int32_t m_nPreviousNodeIndex; // 0x74c        
        bool m_bFixedOrientation; // 0x750        
        bool m_bFixedPitch; // 0x751        
        client::SolidType_t m_eSolidType; // 0x752        
        bool m_bIsMoving; // 0x753        
        float m_flTimeToReachMaxSpeed; // 0x754        
        float m_flTimeToReachZeroSpeed; // 0x758        
        client::GameTime_t m_flTimeMovementStart; // 0x75c        
        client::GameTime_t m_flTimeMovementStop; // 0x760        
        // m_hStopAtNode has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CMoverPathNode> m_hStopAtNode;
        char m_hStopAtNode[0x4]; // 0x764        
        float m_flPathLocationToBeginStop; // 0x768        
        bool m_bMatchPathNodeUp; // 0x76c        
        bool m_bFacePlayer; // 0x76d        
        [[maybe_unused]] std::uint8_t pad_0x76e[0x2]; // 0x76e
        client::GameTime_t m_flTimeStartRoll; // 0x770        
        Vector m_vOriginalUp; // 0x774        
        float m_flTimeToRollToNewUp; // 0x780        
        [[maybe_unused]] std::uint8_t pad_0x784[0x4];
        
        // Datamap fields:
        // void InputStartForward; // 0x0
        // void InputStartReverse; // 0x0
        // void InputStop; // 0x0
        // void InputToggle; // 0x0
        // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
        // CUtlSymbolLarge InputMoveToPathNode; // 0x0
        // CUtlSymbolLarge InputTransitionToPathNode; // 0x0
        // float InputSetSpeed; // 0x0
        // float InputSetSpeedImmediate; // 0x0
        // float InputSetTimeToReachMaxSpeed; // 0x0
        // void CFuncMoverMove; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncMover because it is not a standard-layout class
    static_assert(sizeof(CFuncMover) == 0x788);
};
