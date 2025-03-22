#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/client/ScriptedMoveTo_t.hpp"
#include "source2sdk/client/ScriptedOnDeath_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/modellib/MovementGait_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/ScriptedConflictResponse_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseAnimGraph;
};

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x7d0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CScriptedSequence : public server::CBaseEntity
    {
    public:
        CUtlSymbolLarge m_iszEntry; // 0x4c0        
        CUtlSymbolLarge m_iszPreIdle; // 0x4c8        
        CUtlSymbolLarge m_iszPlay; // 0x4d0        
        CUtlSymbolLarge m_iszPostIdle; // 0x4d8        
        CUtlSymbolLarge m_iszModifierToAddOnPlay; // 0x4e0        
        CUtlSymbolLarge m_iszNextScript; // 0x4e8        
        CUtlSymbolLarge m_iszEntity; // 0x4f0        
        CUtlSymbolLarge m_iszSyncGroup; // 0x4f8        
        client::ScriptedMoveTo_t m_nMoveTo; // 0x500        
        modellib::MovementGait_t m_nMoveToGait; // 0x504        
        bool m_bIsPlayingPreIdle; // 0x505        
        bool m_bIsPlayingEntry; // 0x506        
        bool m_bIsPlayingAction; // 0x507        
        bool m_bIsPlayingPostIdle; // 0x508        
        bool m_bDontRotateOther; // 0x509        
        bool m_bIsRepeatable; // 0x50a        
        bool m_bShouldLeaveCorpse; // 0x50b        
        bool m_bStartOnSpawn; // 0x50c        
        bool m_bDisallowInterrupts; // 0x50d        
        bool m_bCanOverrideNPCState; // 0x50e        
        bool m_bDontTeleportAtEnd; // 0x50f        
        bool m_bHighPriority; // 0x510        
        bool m_bHideDebugComplaints; // 0x511        
        bool m_bContinueOnDeath; // 0x512        
        bool m_bLoopPreIdleSequence; // 0x513        
        bool m_bLoopActionSequence; // 0x514        
        bool m_bLoopPostIdleSequence; // 0x515        
        bool m_bSynchPostIdles; // 0x516        
        bool m_bIgnoreLookAt; // 0x517        
        bool m_bIgnoreGravity; // 0x518        
        bool m_bDisableNPCCollisions; // 0x519        
        bool m_bKeepAnimgraphLockedPost; // 0x51a        
        bool m_bDontAddModifiers; // 0x51b        
        float m_flRadius; // 0x51c        
        float m_flRepeat; // 0x520        
        float m_flPlayAnimFadeInTime; // 0x524        
        float m_flMoveInterpTime; // 0x528        
        float m_flAngRate; // 0x52c        
        int32_t m_nNotReadySequenceCount; // 0x530        
        client::GameTime_t m_startTime; // 0x534        
        bool m_bWaitForBeginSequence; // 0x538        
        [[maybe_unused]] std::uint8_t pad_0x539[0x3]; // 0x539
        int32_t m_saved_effects; // 0x53c        
        int32_t m_savedFlags; // 0x540        
        int32_t m_savedCollisionGroup; // 0x544        
        bool m_bInterruptable; // 0x548        
        bool m_sequenceStarted; // 0x549        
        bool m_bPositionRelativeToOtherEntity; // 0x54a        
        [[maybe_unused]] std::uint8_t pad_0x54b[0x1]; // 0x54b
        // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hTargetEnt;
        char m_hTargetEnt[0x4]; // 0x54c        
        // m_hNextCine has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CScriptedSequence> m_hNextCine;
        char m_hNextCine[0x4]; // 0x550        
        bool m_bThinking; // 0x554        
        bool m_bInitiatedSelfDelete; // 0x555        
        bool m_bIsTeleportingDueToMoveTo; // 0x556        
        bool m_bAllowCustomInterruptConditions; // 0x557        
        // m_hForcedTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseAnimGraph> m_hForcedTarget;
        char m_hForcedTarget[0x4]; // 0x558        
        bool m_bDontCancelOtherSequences; // 0x55c        
        bool m_bForceSynch; // 0x55d        
        bool m_bPreventUpdateYawOnFinish; // 0x55e        
        bool m_bEnsureOnNavmeshOnFinish; // 0x55f        
        client::ScriptedOnDeath_t m_onDeathBehavior; // 0x560        
        server::ScriptedConflictResponse_t m_ConflictResponse; // 0x564        
        entity2::CEntityIOOutput m_OnBeginSequence; // 0x568        
        entity2::CEntityIOOutput m_OnActionStartOrLoop; // 0x590        
        entity2::CEntityIOOutput m_OnEndSequence; // 0x5b8        
        entity2::CEntityIOOutput m_OnPostIdleEndSequence; // 0x5e0        
        entity2::CEntityIOOutput m_OnCancelSequence; // 0x608        
        entity2::CEntityIOOutput m_OnCancelFailedSequence; // 0x630        
        entity2::CEntityIOOutput m_OnScriptEvent[8]; // 0x658        
        [[maybe_unused]] std::uint8_t pad_0x798[0x8]; // 0x798
        CTransform m_matOtherToMain; // 0x7a0        
        // m_hInteractionMainEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hInteractionMainEntity;
        char m_hInteractionMainEntity[0x4]; // 0x7c0        
        int32_t m_iPlayerDeathBehavior; // 0x7c4        
        [[maybe_unused]] std::uint8_t pad_0x7c8[0x8];
        
        // Datamap fields:
        // void CScriptedSequenceScriptThink; // 0x0
        // void InputMoveToPosition; // 0x0
        // void InputBeginSequence; // 0x0
        // void InputCancelSequence; // 0x0
        // CUtlSymbolLarge InputSetActionSequence; // 0x0
        // void InputScriptPlayerDeath; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CScriptedSequence because it is not a standard-layout class
    static_assert(sizeof(CScriptedSequence) == 0x7d0);
};
