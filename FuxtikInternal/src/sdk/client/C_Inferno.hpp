#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSnapshot.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x10
    // Alignment: 0x10
    // Standard-layout class: false
    // Size: 0x82d0
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "Vector m_firePositions"
    // static metadata: MNetworkVarNames "Vector m_fireParentPositions"
    // static metadata: MNetworkVarNames "bool m_bFireIsBurning"
    // static metadata: MNetworkVarNames "Vector m_BurnNormal"
    // static metadata: MNetworkVarNames "int m_fireCount"
    // static metadata: MNetworkVarNames "int m_nInfernoType"
    // static metadata: MNetworkVarNames "float m_nFireLifetime"
    // static metadata: MNetworkVarNames "bool m_bInPostEffectTime"
    // static metadata: MNetworkVarNames "int m_nFireEffectTickBegin"
    #pragma pack(push, 1)
    class C_Inferno : public client::C_BaseModelEntity
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0xcc8[0x40]; // 0xcc8
        client::ParticleIndex_t m_nfxFireDamageEffect; // 0xd08        
        [[maybe_unused]] std::uint8_t pad_0xd0c[0x4]; // 0xd0c
        // m_hInfernoPointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoPointsSnapshot;
        char m_hInfernoPointsSnapshot[0x8]; // 0xd10        
        // m_hInfernoFillerPointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoFillerPointsSnapshot;
        char m_hInfernoFillerPointsSnapshot[0x8]; // 0xd18        
        // m_hInfernoOutlinePointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoOutlinePointsSnapshot;
        char m_hInfernoOutlinePointsSnapshot[0x8]; // 0xd20        
        // m_hInfernoClimbingOutlinePointsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoClimbingOutlinePointsSnapshot;
        char m_hInfernoClimbingOutlinePointsSnapshot[0x8]; // 0xd28        
        // m_hInfernoDecalsSnapshot has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSnapshot> m_hInfernoDecalsSnapshot;
        char m_hInfernoDecalsSnapshot[0x8]; // 0xd30        
        // metadata: MNetworkEnable
        Vector m_firePositions[64]; // 0xd38        
        // metadata: MNetworkEnable
        Vector m_fireParentPositions[64]; // 0x1038        
        // metadata: MNetworkEnable
        bool m_bFireIsBurning[64]; // 0x1338        
        // metadata: MNetworkEnable
        Vector m_BurnNormal[64]; // 0x1378        
        // metadata: MNetworkEnable
        int32_t m_fireCount; // 0x1678        
        // metadata: MNetworkEnable
        int32_t m_nInfernoType; // 0x167c        
        // metadata: MNetworkEnable
        float m_nFireLifetime; // 0x1680        
        // metadata: MNetworkEnable
        bool m_bInPostEffectTime; // 0x1684        
        [[maybe_unused]] std::uint8_t pad_0x1685[0x3]; // 0x1685
        int32_t m_lastFireCount; // 0x1688        
        // metadata: MNetworkEnable
        int32_t m_nFireEffectTickBegin; // 0x168c        
        [[maybe_unused]] std::uint8_t pad_0x1690[0x6c00]; // 0x1690
        int32_t m_drawableCount; // 0x8290        
        bool m_blosCheck; // 0x8294        
        [[maybe_unused]] std::uint8_t pad_0x8295[0x3]; // 0x8295
        int32_t m_nlosperiod; // 0x8298        
        float m_maxFireHalfWidth; // 0x829c        
        float m_maxFireHeight; // 0x82a0        
        Vector m_minBounds; // 0x82a4        
        Vector m_maxBounds; // 0x82b0        
        float m_flLastGrassBurnThink; // 0x82bc        
        [[maybe_unused]] std::uint8_t pad_0x82c0[0x10];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_Inferno because it is not a standard-layout class
    static_assert(sizeof(C_Inferno) == 0x82d0);
};
