#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
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
    // Size: 0xce0
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "string_t m_source"
    // static metadata: MNetworkVarNames "string_t m_destination"
    #pragma pack(push, 1)
    class C_FootstepControl : public client::C_BaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_source; // 0xcd0        
        // metadata: MNetworkEnable
        CUtlSymbolLarge m_destination; // 0xcd8        
        
        // Static fields:
        static CUtlVector<client::C_FootstepControl*> &Get_sm_footstepControllers() {return *reinterpret_cast<CUtlVector<client::C_FootstepControl*>*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_FootstepControl")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_FootstepControl because it is not a standard-layout class
    static_assert(sizeof(C_FootstepControl) == 0xce0);
};
