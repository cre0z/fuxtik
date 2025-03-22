#pragma once
#include "source2sdk/client/C_BaseFlex.hpp"
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
    class C_CSPlayerPawn;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x10b8
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_fFlags"
    // static metadata: MNetworkIncludeByName "m_vecVelocity"
    // static metadata: MNetworkExcludeByName "m_flexWeight"
    // static metadata: MNetworkExcludeByName "m_blinktoggle"
    // static metadata: MNetworkExcludeByUserGroup "m_flPoseParameter"
    // static metadata: MNetworkExcludeByName "m_nResetEventsParity"
    // static metadata: MNetworkExcludeByUserGroup "overlay_vars"
    // static metadata: MNetworkExcludeByName "m_flAnimTime"
    // static metadata: MNetworkExcludeByUserGroup "m_flCycle"
    // static metadata: MNetworkExcludeByName "m_baseLayer.m_hSequence"
    // static metadata: MNetworkExcludeByName "m_animationController.m_flPlaybackRate"
    // static metadata: MNetworkExcludeByName "m_nNewSequenceParity"
    // static metadata: MNetworkVarNames "bool m_bIsLive"
    // static metadata: MNetworkVarNames "float32 m_DmgRadius"
    // static metadata: MNetworkVarNames "GameTime_t m_flDetonateTime"
    // static metadata: MNetworkVarNames "float32 m_flDamage"
    // static metadata: MNetworkVarNames "CHandle< CCSPlayerPawn > m_hThrower"
    #pragma pack(push, 1)
    class C_BaseGrenade : public client::C_BaseFlex
    {
    public:
        bool m_bHasWarnedAI; // 0x1068        
        bool m_bIsSmokeGrenade; // 0x1069        
        // metadata: MNetworkEnable
        bool m_bIsLive; // 0x106a        
        [[maybe_unused]] std::uint8_t pad_0x106b[0x1]; // 0x106b
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "1024,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_DmgRadius; // 0x106c        
        // metadata: MNetworkEnable
        client::GameTime_t m_flDetonateTime; // 0x1070        
        float m_flWarnAITime; // 0x1074        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "10"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "256,000000"
        // metadata: MNetworkEncodeFlags "1"
        float m_flDamage; // 0x1078        
        [[maybe_unused]] std::uint8_t pad_0x107c[0x4]; // 0x107c
        CUtlSymbolLarge m_iszBounceSound; // 0x1080        
        CUtlString m_ExplosionSound; // 0x1088        
        [[maybe_unused]] std::uint8_t pad_0x1090[0x4]; // 0x1090
        // metadata: MNetworkEnable
        // m_hThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CSPlayerPawn> m_hThrower;
        char m_hThrower[0x4]; // 0x1094        
        [[maybe_unused]] std::uint8_t pad_0x1098[0x14]; // 0x1098
        client::GameTime_t m_flNextAttack; // 0x10ac        
        // m_hOriginalThrower has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_CSPlayerPawn> m_hOriginalThrower;
        char m_hOriginalThrower[0x4]; // 0x10b0        
        [[maybe_unused]] std::uint8_t pad_0x10b4[0x4];
        
        // Datamap fields:
        // int32_t m_nExplosionType; // 0x1090
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_BaseGrenade because it is not a standard-layout class
    static_assert(sizeof(C_BaseGrenade) == 0x10b8);
};
