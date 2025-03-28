#pragma once
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/GameTime_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    class C_BaseEntity;
};

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x1278
    // Has VTable
    // Construct allowed
    // MNetworkNoBase
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByUserGroup "Origin"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_angRotation"
    // static metadata: MNetworkIncludeByName "m_hOwnerEntity"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hParent"
    // static metadata: MNetworkIncludeByName "CGameSceneNode::m_hierarchyAttachName"
    // static metadata: MNetworkIncludeByName "m_nameStringableIndex"
    // static metadata: MNetworkVarNames "char m_szSnapshotFileName"
    // static metadata: MNetworkVarNames "bool m_bActive"
    // static metadata: MNetworkVarNames "bool m_bFrozen"
    // static metadata: MNetworkVarNames "float m_flFreezeTransitionDuration"
    // static metadata: MNetworkVarNames "int m_nStopType"
    // static metadata: MNetworkVarNames "bool m_bAnimateDuringGameplayPause"
    // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iEffectIndex"
    // static metadata: MNetworkVarNames "GameTime_t m_flStartTime"
    // static metadata: MNetworkVarNames "float32 m_flPreSimTime"
    // static metadata: MNetworkVarNames "Vector m_vServerControlPoints"
    // static metadata: MNetworkVarNames "uint8 m_iServerControlPointAssignments"
    // static metadata: MNetworkVarNames "CHandle< CBaseEntity > m_hControlPointEnts"
    // static metadata: MNetworkVarNames "bool m_bNoSave"
    // static metadata: MNetworkVarNames "bool m_bNoFreeze"
    // static metadata: MNetworkVarNames "bool m_bNoRamp"
    #pragma pack(push, 1)
    class C_ParticleSystem : public client::C_BaseModelEntity
    {
    public:
        // metadata: MNetworkEnable
        char m_szSnapshotFileName[512]; // 0xcc8        
        // metadata: MNetworkEnable
        bool m_bActive; // 0xec8        
        // metadata: MNetworkEnable
        bool m_bFrozen; // 0xec9        
        [[maybe_unused]] std::uint8_t pad_0xeca[0x2]; // 0xeca
        // metadata: MNetworkEnable
        float m_flFreezeTransitionDuration; // 0xecc        
        // metadata: MNetworkEnable
        int32_t m_nStopType; // 0xed0        
        // metadata: MNetworkEnable
        bool m_bAnimateDuringGameplayPause; // 0xed4        
        [[maybe_unused]] std::uint8_t pad_0xed5[0x3]; // 0xed5
        // metadata: MNetworkEnable
        // m_iEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandle<resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEffectIndex;
        char m_iEffectIndex[0x8]; // 0xed8        
        // metadata: MNetworkEnable
        client::GameTime_t m_flStartTime; // 0xee0        
        // metadata: MNetworkEnable
        float m_flPreSimTime; // 0xee4        
        // metadata: MNetworkEnable
        Vector m_vServerControlPoints[4]; // 0xee8        
        // metadata: MNetworkEnable
        uint8_t m_iServerControlPointAssignments[4]; // 0xf18        
        // metadata: MNetworkEnable
        // m_hControlPointEnts has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<client::C_BaseEntity> m_hControlPointEnts[64];
        char m_hControlPointEnts[0x100]; // 0xf1c        
        // metadata: MNetworkEnable
        bool m_bNoSave; // 0x101c        
        // metadata: MNetworkEnable
        bool m_bNoFreeze; // 0x101d        
        // metadata: MNetworkEnable
        bool m_bNoRamp; // 0x101e        
        bool m_bStartActive; // 0x101f        
        CUtlSymbolLarge m_iszEffectName; // 0x1020        
        CUtlSymbolLarge m_iszControlPointNames[64]; // 0x1028        
        int32_t m_nDataCP; // 0x1228        
        Vector m_vecDataCPValue; // 0x122c        
        int32_t m_nTintCP; // 0x1238        
        Color m_clrTint; // 0x123c        
        [[maybe_unused]] std::uint8_t pad_0x1240[0x20]; // 0x1240
        bool m_bOldActive; // 0x1260        
        bool m_bOldFrozen; // 0x1261        
        [[maybe_unused]] std::uint8_t pad_0x1262[0x16];
        
        // Datamap fields:
        // void InputStart; // 0x0
        // void InputStop; // 0x0
        // void InputStopEndCap; // 0x0
        // void InputDestroy; // 0x0
        // CUtlSymbolLarge InputSetControlPoint; // 0x0
        // void C_ParticleSystemStartParticleSystemThink; // 0x0
        // CUtlString cpoint%d_value[64]; // 0x7fffffff
        // void m_pEffect; // 0x1240
        // void m_iOldEffectIndex; // 0x1268
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_ParticleSystem because it is not a standard-layout class
    static_assert(sizeof(C_ParticleSystem) == 0x1278);
};
