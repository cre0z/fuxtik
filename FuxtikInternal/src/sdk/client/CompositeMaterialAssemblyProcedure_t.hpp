#pragma once
#include "source2sdk/client/CompMatPropertyMutator_t.hpp"
#include "source2sdk/client/CompositeMaterialInputContainer_t.hpp"
#include "source2sdk/client/CompositeMaterialMatchFilter_t.hpp"
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
    // Standard-layout class: true
    // Size: 0x60
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyElementNameFn
    #pragma pack(push, 1)
    struct CompositeMaterialAssemblyProcedure_t
    {
    public:
        // metadata: MPropertyFriendlyName "Includes"
        // metadata: MPropertyAttributeEditor "AssetBrowse( vcompmat )"
        // m_vecCompMatIncludes has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CResourceName> m_vecCompMatIncludes;
        char m_vecCompMatIncludes[0x18]; // 0x0        
        // metadata: MPropertyFriendlyName "Match Filters"
        // m_vecMatchFilters has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CompositeMaterialMatchFilter_t> m_vecMatchFilters;
        char m_vecMatchFilters[0x18]; // 0x18        
        // metadata: MPropertyFriendlyName "Composite Inputs"
        // m_vecCompositeInputContainers has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CompositeMaterialInputContainer_t> m_vecCompositeInputContainers;
        char m_vecCompositeInputContainers[0x18]; // 0x30        
        // metadata: MPropertyFriendlyName "Property Mutators"
        // m_vecPropertyMutators has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<client::CompMatPropertyMutator_t> m_vecPropertyMutators;
        char m_vecPropertyMutators[0x18]; // 0x48        
    };
    #pragma pack(pop)
    
    static_assert(offsetof(CompositeMaterialAssemblyProcedure_t, m_vecCompMatIncludes) == 0x0);
    static_assert(offsetof(CompositeMaterialAssemblyProcedure_t, m_vecMatchFilters) == 0x18);
    static_assert(offsetof(CompositeMaterialAssemblyProcedure_t, m_vecCompositeInputContainers) == 0x30);
    static_assert(offsetof(CompositeMaterialAssemblyProcedure_t, m_vecPropertyMutators) == 0x48);
    
    static_assert(sizeof(CompositeMaterialAssemblyProcedure_t) == 0x60);
};
