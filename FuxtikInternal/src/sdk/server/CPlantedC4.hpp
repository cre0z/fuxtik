#pragma once
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
#include "source2sdk/server/EntitySpottedState_t.hpp"
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
    class CCSPlayerPawn;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x9e8
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bBombTicking"
    // static metadata: MNetworkVarNames "GameTime_t m_flC4Blow"
    // static metadata: MNetworkVarNames "int m_nBombSite"
    // static metadata: MNetworkVarNames "int m_nSourceSoundscapeHash"
    // static metadata: MNetworkVarNames "bool m_bCannotBeDefused"
    // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
    // static metadata: MNetworkVarNames "bool m_bHasExploded"
    // static metadata: MNetworkVarNames "float m_flTimerLength"
    // static metadata: MNetworkVarNames "bool m_bBeingDefused"
    // static metadata: MNetworkVarNames "float m_flDefuseLength"
    // static metadata: MNetworkVarNames "GameTime_t m_flDefuseCountDown"
    // static metadata: MNetworkVarNames "bool m_bBombDefused"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hBombDefuser"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hControlPanel"
    #pragma pack(push, 1)
    class CPlantedC4 : public server::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        bool m_bBombTicking; // 0x8e8        
        [[maybe_unused]] std::uint8_t pad_0x8e9[0x3]; // 0x8e9
        // metadata: MNetworkEnable
        client::GameTime_t m_flC4Blow; // 0x8ec        
        // metadata: MNetworkEnable
        int32_t m_nBombSite; // 0x8f0        
        // metadata: MNetworkEnable
        int32_t m_nSourceSoundscapeHash; // 0x8f4        
        entity2::CEntityIOOutput m_OnBombDefused; // 0x8f8        
        entity2::CEntityIOOutput m_OnBombBeginDefuse; // 0x920        
        entity2::CEntityIOOutput m_OnBombDefuseAborted; // 0x948        
        // metadata: MNetworkEnable
        bool m_bCannotBeDefused; // 0x970        
        [[maybe_unused]] std::uint8_t pad_0x971[0x7]; // 0x971
        // metadata: MNetworkEnable
        server::EntitySpottedState_t m_entitySpottedState; // 0x978        
        int32_t m_nSpotRules; // 0x990        
        bool m_bTrainingPlacedByPlayer; // 0x994        
        // metadata: MNetworkEnable
        bool m_bHasExploded; // 0x995        
        [[maybe_unused]] std::uint8_t pad_0x996[0x2]; // 0x996
        // metadata: MNetworkEnable
        float m_flTimerLength; // 0x998        
        // metadata: MNetworkEnable
        bool m_bBeingDefused; // 0x99c        
        [[maybe_unused]] std::uint8_t pad_0x99d[0x7]; // 0x99d
        client::GameTime_t m_fLastDefuseTime; // 0x9a4        
        [[maybe_unused]] std::uint8_t pad_0x9a8[0x4]; // 0x9a8
        // metadata: MNetworkEnable
        float m_flDefuseLength; // 0x9ac        
        // metadata: MNetworkEnable
        client::GameTime_t m_flDefuseCountDown; // 0x9b0        
        // metadata: MNetworkEnable
        bool m_bBombDefused; // 0x9b4        
        [[maybe_unused]] std::uint8_t pad_0x9b5[0x3]; // 0x9b5
        // metadata: MNetworkEnable
        // m_hBombDefuser has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CCSPlayerPawn> m_hBombDefuser;
        char m_hBombDefuser[0x4]; // 0x9b8        
        // metadata: MNetworkEnable
        // m_hControlPanel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hControlPanel;
        char m_hControlPanel[0x4]; // 0x9bc        
        int32_t m_iProgressBarTime; // 0x9c0        
        bool m_bVoiceAlertFired; // 0x9c4        
        bool m_bVoiceAlertPlayed[4]; // 0x9c5        
        [[maybe_unused]] std::uint8_t pad_0x9c9[0x3]; // 0x9c9
        client::GameTime_t m_flNextBotBeepTime; // 0x9cc        
        [[maybe_unused]] std::uint8_t pad_0x9d0[0x4]; // 0x9d0
        QAngle m_angCatchUpToPlayerEye; // 0x9d4        
        client::GameTime_t m_flLastSpinDetectionTime; // 0x9e0        
        [[maybe_unused]] std::uint8_t pad_0x9e4[0x4];
        
        // Datamap fields:
        // void CPlantedC4C4Think; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPlantedC4 because it is not a standard-layout class
    static_assert(sizeof(CPlantedC4) == 0x9e8);
};
