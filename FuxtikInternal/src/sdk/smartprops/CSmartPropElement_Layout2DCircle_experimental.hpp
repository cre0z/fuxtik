#pragma once
#include "source2sdk/smartprops/CSmartPropAttributeDistributionMode.hpp"
#include "source2sdk/smartprops/CSmartPropAttributeRadiusPlacementMode.hpp"
#include "source2sdk/smartprops/CSmartPropElement_Group.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: smartprops
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::smartprops
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x4a0
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyFriendlyName "Layout Circle (Test)"
    // static metadata: MPropertyDescription "An element which places multiple instances of its child elements within a radius."
    // static metadata: MVDataExperimentalNodeSet
    #pragma pack(push, 1)
    class CSmartPropElement_Layout2DCircle_experimental : public smartprops::CSmartPropElement_Group
    {
    public:
        // metadata: MPropertyDescription "Specifies how the positions are computed based on the radius."
        smartprops::CSmartPropAttributeRadiusPlacementMode m_PlacementMode; // 0xa0        
        // metadata: MPropertyDescription "Specifies the method to be used to distribute."
        smartprops::CSmartPropAttributeDistributionMode m_DistributionMode; // 0xe0        
        // metadata: MPropertySuppressExpr "m_DistributionMode == RANDOM"
        // metadata: MPropertyDescription "0 to 1 value indicating the amout of random offset that should be applied to the reguluarly spaced positions"
        CSmartPropAttributeFloat m_flRandomness; // 0x120        
        // metadata: MPropertySuppressExpr "m_PlacementMode == SPHERE"
        // metadata: MPropertyDescription "Vector up direction of the plane of the circle. This in the local space of the current element."
        CSmartPropAttributeVector m_vPlaneUpDirection; // 0x160        
        // metadata: MPropertyDescription "Minimum number of instances of this object and its children to be placed."
        CSmartPropAttributeInt m_nCountMin; // 0x1a0        
        // metadata: MPropertyDescription "Maximum number of instances of this object and its children to be placed."
        CSmartPropAttributeInt m_nCountMax; // 0x1e0        
        // metadata: MPropertyDescription "Inner radius from the placement position where the model can appear."
        CSmartPropAttributeFloat m_flPositionRadiusInner; // 0x220        
        // metadata: MPropertyDescription "Outer radius from the placement position where the model can appear."
        CSmartPropAttributeFloat m_flPositionRadiusOuter; // 0x260        
        // metadata: MPropertyDescription "Align the initial orientation of each placed object based on it position on the sphere or circle."
        CSmartPropAttributeBool m_bAlignOrientation; // 0x2a0        
        // metadata: MPropertyReadonlyExpr
        // metadata: MPropertyDescription "Vector in the local space of the child element to be aligned with sphere or circle"
        CSmartPropAttributeVector m_vAlignDirection; // 0x2e0        
        // metadata: MPropertyDescription "Trace outwards from center to prevent children from penetrating solid scene geometry."
        CSmartPropAttributeBool m_bTraceEnabled; // 0x320        
        // metadata: MPropertySuppressExpr "m_bTraceEnabled == false && m_PlacementMode == SPHERE"
        // metadata: MPropertyDescription "Distance along the PlaneUpDirection to offset the trace. (YM: Eliminate in favor of requiring xform on Node? Or keep it and make it a range? )"
        CSmartPropAttributeFloat m_flTraceHeightBias; // 0x360        
        // metadata: MPropertySuppressExpr "m_bTraceEnabled == false && m_PlacementMode == SPHERE"
        // metadata: MPropertyDescription "Jitter Spread the trace origin to make it look more natural."
        CSmartPropAttributeFloat m_flTraceOriginRadius; // 0x3a0        
        // metadata: MPropertySuppressExpr "m_bTraceEnabled == false"
        // metadata: MPropertyDescription "Apply a retro bias to accumulated, so that they fall away."
        CSmartPropAttributeBool m_bTraceAccumRetroFalloff; // 0x3e0        
        // metadata: MPropertySuppressExpr "m_bTraceAllowAccumulate == false && m_PlacementMode == SPHERE"
        // metadata: MPropertyDescription "Back off accumulated hits by at least this distance."
        CSmartPropAttributeFloat m_flTraceAccumulateRetroBiasMin; // 0x420        
        // metadata: MPropertySuppressExpr "m_bTraceAllowAccumulate == false && m_PlacementMode == SPHERE"
        // metadata: MPropertyDescription "Back off accumulated hits by at most this distance."
        CSmartPropAttributeFloat m_flTraceAccumulateRetroBiasMax; // 0x460        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSmartPropElement_Layout2DCircle_experimental because it is not a standard-layout class
    static_assert(sizeof(CSmartPropElement_Layout2DCircle_experimental) == 0x4a0);
};
