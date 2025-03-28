#pragma once
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/EntitySpottedState_t.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class CBasePlayerController;
};

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    class C_CSPlayerPawn;
};

namespace source2sdk::client
{
    class C_Multimeter;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xf70
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bBombTicking"
    // static metadata: MNetworkVarNames "int m_nBombSite"
    // static metadata: MNetworkVarNames "int m_nSourceSoundscapeHash"
    // static metadata: MNetworkVarNames "EntitySpottedState_t m_entitySpottedState"
    // static metadata: MNetworkVarNames "GameTime_t m_flC4Blow"
    // static metadata: MNetworkVarNames "bool m_bCannotBeDefused"
    // static metadata: MNetworkVarNames "bool m_bHasExploded"
    // static metadata: MNetworkVarNames "float m_flTimerLength"
    // static metadata: MNetworkVarNames "bool m_bBeingDefused"
    // static metadata: MNetworkVarNames "float m_flDefuseLength"
    // static metadata: MNetworkVarNames "GameTime_t m_flDefuseCountDown"
    // static metadata: MNetworkVarNames "bool m_bBombDefused"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn> m_hBombDefuser"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity> m_hControlPanel"
    #pragma pack(push, 1)
    class C_PlantedC4 : public client::CBaseAnimGraph
    {
    public:
        // metadata: MNetworkEnable
        bool m_bBombTicking; // 0xed0        
        [[maybe_unused]] std::uint8_t pad_0xed1[0x3]; // 0xed1
        // metadata: MNetworkEnable
        int32_t m_nBombSite; // 0xed4        
        // metadata: MNetworkEnable
        int32_t m_nSourceSoundscapeHash; // 0xed8        
        [[maybe_unused]] std::uint8_t pad_0xedc[0x4]; // 0xedc
        // metadata: MNetworkEnable
        client::EntitySpottedState_t m_entitySpottedState; // 0xee0        
        client::GameTime_t m_flNextGlow; // 0xef8        
        client::GameTime_t m_flNextBeep; // 0xefc        
        // metadata: MNetworkEnable
        client::GameTime_t m_flC4Blow; // 0xf00        
        // metadata: MNetworkEnable
        bool m_bCannotBeDefused; // 0xf04        
        // metadata: MNetworkEnable
        bool m_bHasExploded; // 0xf05        
        [[maybe_unused]] std::uint8_t pad_0xf06[0x2]; // 0xf06
        // metadata: MNetworkEnable
        float m_flTimerLength; // 0xf08        
        // metadata: MNetworkEnable
        bool m_bBeingDefused; // 0xf0c        
        [[maybe_unused]] std::uint8_t pad_0xf0d[0x3]; // 0xf0d
        float m_bTriggerWarning; // 0xf10        
        float m_bExplodeWarning; // 0xf14        
        bool m_bC4Activated; // 0xf18        
        bool m_bTenSecWarning; // 0xf19        
        [[maybe_unused]] std::uint8_t pad_0xf1a[0x2]; // 0xf1a
        // metadata: MNetworkEnable
        float m_flDefuseLength; // 0xf1c        
        // metadata: MNetworkEnable
        client::GameTime_t m_flDefuseCountDown; // 0xf20        
        // metadata: MNetworkEnable
        bool m_bBombDefused; // 0xf24        
        [[maybe_unused]] std::uint8_t pad_0xf25[0x3]; // 0xf25
        // metadata: MNetworkEnable
        // metadata: MNetworkChangeCallback "OnDefuserChanged"
        // m_hBombDefuser has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CSPlayerPawn> m_hBombDefuser;
        char m_hBombDefuser[0x4]; // 0xf28        
        // metadata: MNetworkEnable
        // m_hControlPanel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hControlPanel;
        char m_hControlPanel[0x4]; // 0xf2c        
        // m_hDefuserMultimeter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_Multimeter> m_hDefuserMultimeter;
        char m_hDefuserMultimeter[0x4]; // 0xf30        
        client::GameTime_t m_flNextRadarFlashTime; // 0xf34        
        bool m_bRadarFlash; // 0xf38        
        [[maybe_unused]] std::uint8_t pad_0xf39[0x3]; // 0xf39
        // m_pBombDefuser has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CSPlayerPawn> m_pBombDefuser;
        char m_pBombDefuser[0x4]; // 0xf3c        
        client::GameTime_t m_fLastDefuseTime; // 0xf40        
        [[maybe_unused]] std::uint8_t pad_0xf44[0x4]; // 0xf44
        client::CBasePlayerController* m_pPredictionOwner; // 0xf48        
        Vector m_vecC4ExplodeSpectatePos; // 0xf50        
        QAngle m_vecC4ExplodeSpectateAng; // 0xf5c        
        float m_flC4ExplodeSpectateDuration; // 0xf68        
        [[maybe_unused]] std::uint8_t pad_0xf6c[0x4];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_PlantedC4 because it is not a standard-layout class
    static_assert(sizeof(C_PlantedC4) == 0xf70);
};
