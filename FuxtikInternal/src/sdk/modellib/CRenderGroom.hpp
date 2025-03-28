#pragma once
#include "source2sdk/modellib/RenderHairStrandInfo_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIMaterial2.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: modellib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::modellib
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: true
    // Size: 0x50
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CRenderGroom
    {
    public:
        // m_hairs has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<modellib::RenderHairStrandInfo_t> m_hairs;
        char m_hairs[0x18]; // 0x0        
        [[maybe_unused]] std::uint8_t pad_0x18[0x8]; // 0x18
        // m_hSimParamsMat has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CStrongHandleCopyable<resourcesystem::InfoForResourceTypeIMaterial2> m_hSimParamsMat;
        char m_hSimParamsMat[0x8]; // 0x20        
        int32_t m_nSegmentsPerHairStrand; // 0x28        
        int32_t m_nGuideHairCount; // 0x2c        
        int32_t m_nHairCount; // 0x30        
        int32_t m_nGroomGroupID; // 0x34        
        int32_t m_nAttachBoneIdx; // 0x38        
        int32_t m_nAttachMeshIdx; // 0x3c        
        int32_t m_nAttachMeshDrawCallIdx; // 0x40        
        float m_flSumOfAllHairLengths; // 0x44        
        bool m_bEnableSimulation; // 0x48        
        [[maybe_unused]] std::uint8_t pad_0x49[0x7];
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CRenderGroom, m_hairs) == 0x0);
    static_assert(offsetof(CRenderGroom, m_hSimParamsMat) == 0x20);
    static_assert(offsetof(CRenderGroom, m_nSegmentsPerHairStrand) == 0x28);
    static_assert(offsetof(CRenderGroom, m_nGuideHairCount) == 0x2c);
    static_assert(offsetof(CRenderGroom, m_nHairCount) == 0x30);
    static_assert(offsetof(CRenderGroom, m_nGroomGroupID) == 0x34);
    static_assert(offsetof(CRenderGroom, m_nAttachBoneIdx) == 0x38);
    static_assert(offsetof(CRenderGroom, m_nAttachMeshIdx) == 0x3c);
    static_assert(offsetof(CRenderGroom, m_nAttachMeshDrawCallIdx) == 0x40);
    static_assert(offsetof(CRenderGroom, m_flSumOfAllHairLengths) == 0x44);
    static_assert(offsetof(CRenderGroom, m_bEnableSimulation) == 0x48);
    
    static_assert(sizeof(CRenderGroom) == 0x50);
};
