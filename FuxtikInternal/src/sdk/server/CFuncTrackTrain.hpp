#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseModelEntity.hpp"
#include "source2sdk/server/TrainOrientationType_t.hpp"
#include "source2sdk/server/TrainVelocityType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CPathTrack;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x860
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CFuncTrackTrain : public server::CBaseModelEntity
    {
    public:
        // m_ppath has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CPathTrack> m_ppath;
        char m_ppath[0x4]; // 0x710        
        float m_length; // 0x714        
        Vector m_vPosPrev; // 0x718        
        QAngle m_angPrev; // 0x724        
        Vector m_controlMins; // 0x730        
        Vector m_controlMaxs; // 0x73c        
        Vector m_lastBlockPos; // 0x748        
        int32_t m_lastBlockTick; // 0x754        
        float m_flVolume; // 0x758        
        float m_flBank; // 0x75c        
        float m_oldSpeed; // 0x760        
        float m_flBlockDamage; // 0x764        
        float m_height; // 0x768        
        float m_maxSpeed; // 0x76c        
        float m_dir; // 0x770        
        [[maybe_unused]] std::uint8_t pad_0x774[0x4]; // 0x774
        CUtlSymbolLarge m_iszSoundMove; // 0x778        
        CUtlSymbolLarge m_iszSoundMovePing; // 0x780        
        CUtlSymbolLarge m_iszSoundStart; // 0x788        
        CUtlSymbolLarge m_iszSoundStop; // 0x790        
        CUtlSymbolLarge m_strPathTarget; // 0x798        
        float m_flMoveSoundMinDuration; // 0x7a0        
        float m_flMoveSoundMaxDuration; // 0x7a4        
        client::GameTime_t m_flNextMoveSoundTime; // 0x7a8        
        float m_flMoveSoundMinPitch; // 0x7ac        
        float m_flMoveSoundMaxPitch; // 0x7b0        
        server::TrainOrientationType_t m_eOrientationType; // 0x7b4        
        server::TrainVelocityType_t m_eVelocityType; // 0x7b8        
        [[maybe_unused]] std::uint8_t pad_0x7bc[0xc]; // 0x7bc
        entity2::CEntityIOOutput m_OnStart; // 0x7c8        
        entity2::CEntityIOOutput m_OnNext; // 0x7f0        
        entity2::CEntityIOOutput m_OnArrivedAtDestinationNode; // 0x818        
        bool m_bManualSpeedChanges; // 0x840        
        [[maybe_unused]] std::uint8_t pad_0x841[0x3]; // 0x841
        float m_flDesiredSpeed; // 0x844        
        client::GameTime_t m_flSpeedChangeTime; // 0x848        
        float m_flAccelSpeed; // 0x84c        
        float m_flDecelSpeed; // 0x850        
        bool m_bAccelToSpeed; // 0x854        
        [[maybe_unused]] std::uint8_t pad_0x855[0x3]; // 0x855
        client::GameTime_t m_flNextMPSoundTime; // 0x858        
        [[maybe_unused]] std::uint8_t pad_0x85c[0x4];
        
        // Datamap fields:
        // int64_t m_soundMoveGuid; // 0x7bc
        // void InputStop; // 0x0
        // void InputStartForward; // 0x0
        // void InputStartBackward; // 0x0
        // void InputToggle; // 0x0
        // void InputResume; // 0x0
        // void InputReverse; // 0x0
        // float InputSetSpeed; // 0x0
        // float InputSetSpeedDir; // 0x0
        // float InputSetSpeedReal; // 0x0
        // float InputSetMaxSpeed; // 0x0
        // float InputSetSpeedDirAccel; // 0x0
        // CUtlSymbolLarge InputMoveToPathNode; // 0x0
        // CUtlSymbolLarge InputTeleportToPathNode; // 0x0
        // void InputLockOrientation; // 0x0
        // void InputUnlockOrientation; // 0x0
        // void CFuncTrackTrainNext; // 0x0
        // void CFuncTrackTrainFind; // 0x0
        // void CFuncTrackTrainNearestPath; // 0x0
        // void CFuncTrackTrainDeadEnd; // 0x0
        // int32_t volume; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CFuncTrackTrain because it is not a standard-layout class
    static_assert(sizeof(CFuncTrackTrain) == 0x860);
};
