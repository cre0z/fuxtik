#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/EntFinderMethod_t.hpp"
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
    class CBaseFilter;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x510
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPointEntityFinder : public server::CBaseEntity
    {
    public:
        // m_hEntity has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hEntity;
        char m_hEntity[0x4]; // 0x4c0        
        [[maybe_unused]] std::uint8_t pad_0x4c4[0x4]; // 0x4c4
        CUtlSymbolLarge m_iFilterName; // 0x4c8        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hFilter;
        char m_hFilter[0x4]; // 0x4d0        
        [[maybe_unused]] std::uint8_t pad_0x4d4[0x4]; // 0x4d4
        CUtlSymbolLarge m_iRefName; // 0x4d8        
        // m_hReference has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hReference;
        char m_hReference[0x4]; // 0x4e0        
        server::EntFinderMethod_t m_FindMethod; // 0x4e4        
        entity2::CEntityIOOutput m_OnFoundEntity; // 0x4e8        
        
        // Datamap fields:
        // void InputFindEntity; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPointEntityFinder because it is not a standard-layout class
    static_assert(sizeof(CPointEntityFinder) == 0x510);
};
