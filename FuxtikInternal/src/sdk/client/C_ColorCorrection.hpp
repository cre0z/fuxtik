#pragma once
#include "source2sdk/client/C_BaseEntity.hpp"
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
    // Size: 0x790
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkVarNames "float32 m_MinFalloff"
    // static metadata: MNetworkVarNames "float32 m_MaxFalloff"
    // static metadata: MNetworkVarNames "float32 m_flFadeInDuration"
    // static metadata: MNetworkVarNames "float32 m_flFadeOutDuration"
    // static metadata: MNetworkVarNames "float32 m_flMaxWeight"
    // static metadata: MNetworkVarNames "float32 m_flCurWeight"
    // static metadata: MNetworkVarNames "char m_netlookupFilename"
    // static metadata: MNetworkVarNames "bool m_bEnabled"
    // static metadata: MNetworkVarNames "bool m_bMaster"
    // static metadata: MNetworkVarNames "bool m_bClientSide"
    // static metadata: MNetworkVarNames "bool m_bExclusive"
    #pragma pack(push, 1)
    class C_ColorCorrection : public client::C_BaseEntity
    {
    public:
        Vector m_vecOrigin; // 0x548        
        // metadata: MNetworkEnable
        float m_MinFalloff; // 0x554        
        // metadata: MNetworkEnable
        float m_MaxFalloff; // 0x558        
        // metadata: MNetworkEnable
        float m_flFadeInDuration; // 0x55c        
        // metadata: MNetworkEnable
        float m_flFadeOutDuration; // 0x560        
        // metadata: MNetworkEnable
        float m_flMaxWeight; // 0x564        
        // metadata: MNetworkEnable
        float m_flCurWeight; // 0x568        
        // metadata: MNetworkEnable
        char m_netlookupFilename[512]; // 0x56c        
        // metadata: MNetworkEnable
        bool m_bEnabled; // 0x76c        
        // metadata: MNetworkEnable
        bool m_bMaster; // 0x76d        
        // metadata: MNetworkEnable
        bool m_bClientSide; // 0x76e        
        // metadata: MNetworkEnable
        bool m_bExclusive; // 0x76f        
        bool m_bEnabledOnClient[1]; // 0x770        
        [[maybe_unused]] std::uint8_t pad_0x771[0x3]; // 0x771
        float m_flCurWeightOnClient[1]; // 0x774        
        bool m_bFadingIn[1]; // 0x778        
        [[maybe_unused]] std::uint8_t pad_0x779[0x3]; // 0x779
        float m_flFadeStartWeight[1]; // 0x77c        
        float m_flFadeStartTime[1]; // 0x780        
        float m_flFadeDuration[1]; // 0x784        
        [[maybe_unused]] std::uint8_t pad_0x788[0x8];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ColorCorrection because it is not a standard-layout class
    static_assert(sizeof(C_ColorCorrection) == 0x790);
};
