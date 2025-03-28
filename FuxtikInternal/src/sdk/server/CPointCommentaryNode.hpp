#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
    // Size: 0x9e0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "string_t m_iszCommentaryFile"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hViewPosition"
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "float32 m_flStartTimeInCommentary"
    // static metadata: MNetworkVarNames "string_t m_iszTitle"
    // static metadata: MNetworkVarNames "string_t m_iszSpeakers"
    // static metadata: MNetworkVarNames "int m_iNodeNumber"
    // static metadata: MNetworkVarNames "int m_iNodeNumberMax"
    // static metadata: MNetworkVarNames "bool m_bListenedTo"
    #pragma pack(push, 1)
    class CPointCommentaryNode : public server::CBaseAnimGraph
    {
    public:
        CUtlSymbolLarge m_iszPreCommands; // 0x8e8        
        CUtlSymbolLarge m_iszPostCommands; // 0x8f0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszCommentaryFile; // 0x8f8        
        CUtlSymbolLarge m_iszViewTarget; // 0x900        
        // m_hViewTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewTarget;
        char m_hViewTarget[0x4]; // 0x908        
        // m_hViewTargetAngles has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewTargetAngles;
        char m_hViewTargetAngles[0x4]; // 0x90c        
        CUtlSymbolLarge m_iszViewPosition; // 0x910        
        // metadata: MNetworkEnable
        // m_hViewPosition has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewPosition;
        char m_hViewPosition[0x4]; // 0x918        
        // m_hViewPositionMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hViewPositionMover;
        char m_hViewPositionMover[0x4]; // 0x91c        
        bool m_bPreventMovement; // 0x920        
        bool m_bUnderCrosshair; // 0x921        
        bool m_bUnstoppable; // 0x922        
        [[maybe_unused]] std::uint8_t pad_0x923[0x1]; // 0x923
        client::GameTime_t m_flFinishedTime; // 0x924        
        Vector m_vecFinishOrigin; // 0x928        
        QAngle m_vecOriginalAngles; // 0x934        
        QAngle m_vecFinishAngles; // 0x940        
        bool m_bPreventChangesWhileMoving; // 0x94c        
        bool m_bDisabled; // 0x94d        
        [[maybe_unused]] std::uint8_t pad_0x94e[0x2]; // 0x94e
        Vector m_vecTeleportOrigin; // 0x950        
        client::GameTime_t m_flAbortedPlaybackAt; // 0x95c        
        entity2::CEntityIOOutput m_pOnCommentaryStarted; // 0x960        
        entity2::CEntityIOOutput m_pOnCommentaryStopped; // 0x988        
        // metadata: MNetworkEnable
        bool m_bActive; // 0x9b0        
        [[maybe_unused]] std::uint8_t pad_0x9b1[0x3]; // 0x9b1
        // metadata: MNetworkEnable
        client::GameTime_t m_flStartTime; // 0x9b4        
        // metadata: MNetworkEnable
        float m_flStartTimeInCommentary; // 0x9b8        
        [[maybe_unused]] std::uint8_t pad_0x9bc[0x4]; // 0x9bc
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszTitle; // 0x9c0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_iszSpeakers; // 0x9c8        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumber; // 0x9d0        
        // metadata: MNetworkEnable
        int32_t m_iNodeNumberMax; // 0x9d4        
        // metadata: MNetworkEnable
        bool m_bListenedTo; // 0x9d8        
        [[maybe_unused]] std::uint8_t pad_0x9d9[0x7];
        
        // Datamap fields:
        // void InputStartCommentary; // 0x0
        // void InputStartUnstoppableCommentary; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void CPointCommentaryNodeSpinThink; // 0x0
        // void CPointCommentaryNodeUpdateViewThink; // 0x0
        // void CPointCommentaryNodeUpdateViewPostThink; // 0x0
        // void CPointCommentaryNodeAcculumatePlayTimeThink; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointCommentaryNode because it is not a standard-layout class
    static_assert(sizeof(CPointCommentaryNode) == 0x9e0);
};
