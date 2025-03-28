#pragma once
#include "source2sdk/client/AnimLoopMode_t.hpp"
#include "source2sdk/client/C_BreakableProp.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1158
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "bool m_bUseHitboxesForRenderBox"
    // static metadata: MNetworkVarNames "bool m_bUseAnimGraph"
    #pragma pack(push, 1)
    class C_DynamicProp : public client::C_BreakableProp
    {
    public:
        // metadata: MNetworkEnable
        bool m_bUseHitboxesForRenderBox; // 0x1040        
        // metadata: MNetworkEnable
        bool m_bUseAnimGraph; // 0x1041        
        [[maybe_unused]] std::uint8_t pad_0x1042[0x6]; // 0x1042
        entity2::CEntityIOOutput m_pOutputAnimBegun; // 0x1048        
        entity2::CEntityIOOutput m_pOutputAnimOver; // 0x1070        
        entity2::CEntityIOOutput m_pOutputAnimLoopCycleOver; // 0x1098        
        entity2::CEntityIOOutput m_OnAnimReachedStart; // 0x10c0        
        entity2::CEntityIOOutput m_OnAnimReachedEnd; // 0x10e8        
        CUtlSymbolLarge m_iszIdleAnim; // 0x1110        
        client::AnimLoopMode_t m_nIdleAnimLoopMode; // 0x1118        
        bool m_bRandomizeCycle; // 0x111c        
        bool m_bStartDisabled; // 0x111d        
        bool m_bFiredStartEndOutput; // 0x111e        
        bool m_bForceNpcExclude; // 0x111f        
        bool m_bCreateNonSolid; // 0x1120        
        bool m_bIsOverrideProp; // 0x1121        
        [[maybe_unused]] std::uint8_t pad_0x1122[0x2]; // 0x1122
        int32_t m_iInitialGlowState; // 0x1124        
        int32_t m_nGlowRange; // 0x1128        
        int32_t m_nGlowRangeMin; // 0x112c        
        Color m_glowColor; // 0x1130        
        int32_t m_nGlowTeam; // 0x1134        
        int32_t m_iCachedFrameCount; // 0x1138        
        Vector m_vecCachedRenderMins; // 0x113c        
        Vector m_vecCachedRenderMaxs; // 0x1148        
        [[maybe_unused]] std::uint8_t pad_0x1154[0x4];
        
        // Datamap fields:
        // CUtlSymbolLarge StartingAnim; // 0x7fffffff
        // CUtlSymbolLarge StartingAnimationLoopMode; // 0x7fffffff
        // CUtlSymbolLarge InputSetAnimationLooping; // 0x0
        // CUtlSymbolLarge InputSetAnimationNoResetLooping; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
        // CUtlSymbolLarge InputSetAnimationNotLooping; // 0x0
        // CUtlSymbolLarge InputSetAnimationNoResetNotLooping; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
        // CUtlSymbolLarge InputSetAnimation; // 0x0
        // CUtlSymbolLarge InputSetAnimationNoReset; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimation; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimationLooping; // 0x0
        // CUtlSymbolLarge InputSetIdleAnimationNotLooping; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputEnableCollision; // 0x0
        // void InputDisableCollision; // 0x0
        // float InputSetPlaybackRate; // 0x0
        // void InputStartGlowing; // 0x0
        // void InputStopGlowing; // 0x0
        // Vector InputSetGlowOverride; // 0x0
        // int32_t InputSetGlowRange; // 0x0
        // void C_DynamicPropAnimThink; // 0x0
        // int32_t health; // 0x7fffffff
        // bool HoldAnimation; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_DynamicProp because it is not a standard-layout class
    static_assert(sizeof(C_DynamicProp) == 0x1158);
};
