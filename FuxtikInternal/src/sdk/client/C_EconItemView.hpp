#pragma once
#include "source2sdk/client/CAttributeList.hpp"
#include "source2sdk/client/IEconItemInterface.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: unknown
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x448
    // Has VTable
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "item_definition_index_t m_iItemDefinitionIndex"
    // static metadata: MNetworkVarNames "int m_iEntityQuality"
    // static metadata: MNetworkVarNames "uint32 m_iEntityLevel"
    // static metadata: MNetworkVarNames "uint32 m_iItemIDHigh"
    // static metadata: MNetworkVarNames "uint32 m_iItemIDLow"
    // static metadata: MNetworkVarNames "uint32 m_iAccountID"
    // static metadata: MNetworkVarNames "uint32 m_iInventoryPosition"
    // static metadata: MNetworkVarNames "bool m_bInitialized"
    // static metadata: MNetworkVarNames "CAttributeList m_AttributeList"
    // static metadata: MNetworkVarNames "CAttributeList m_NetworkedDynamicAttributes"
    // static metadata: MNetworkVarNames "char m_szCustomName"
    #pragma pack(push, 1)
    class C_EconItemView : public client::IEconItemInterface
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x08[0x58]; // 0x8
        bool m_bInventoryImageRgbaRequested; // 0x60        
        bool m_bInventoryImageTriedCache; // 0x61        
        [[maybe_unused]] std::uint8_t pad_0x62[0x1e]; // 0x62
        int32_t m_nInventoryImageRgbaWidth; // 0x80        
        int32_t m_nInventoryImageRgbaHeight; // 0x84        
        char m_szCurrentLoadCachedFileName[260]; // 0x88        
        [[maybe_unused]] std::uint8_t pad_0x18c[0x2c]; // 0x18c
        bool m_bRestoreCustomMaterialAfterPrecache; // 0x1b8        
        [[maybe_unused]] std::uint8_t pad_0x1b9[0x1]; // 0x1b9
        // metadata: MNetworkEnable
        uint16_t m_iItemDefinitionIndex; // 0x1ba        
        // metadata: MNetworkEnable
        int32_t m_iEntityQuality; // 0x1bc        
        // metadata: MNetworkEnable
        uint32_t m_iEntityLevel; // 0x1c0        
        [[maybe_unused]] std::uint8_t pad_0x1c4[0x4]; // 0x1c4
        uint64_t m_iItemID; // 0x1c8        
        // metadata: MNetworkEnable
        uint32_t m_iItemIDHigh; // 0x1d0        
        // metadata: MNetworkEnable
        uint32_t m_iItemIDLow; // 0x1d4        
        // metadata: MNetworkEnable
        uint32_t m_iAccountID; // 0x1d8        
        // metadata: MNetworkEnable
        uint32_t m_iInventoryPosition; // 0x1dc        
        [[maybe_unused]] std::uint8_t pad_0x1e0[0x8]; // 0x1e0
        // metadata: MNetworkEnable
        bool m_bInitialized; // 0x1e8        
        bool m_bDisallowSOC; // 0x1e9        
        bool m_bIsStoreItem; // 0x1ea        
        bool m_bIsTradeItem; // 0x1eb        
        int32_t m_iEntityQuantity; // 0x1ec        
        int32_t m_iRarityOverride; // 0x1f0        
        int32_t m_iQualityOverride; // 0x1f4        
        uint8_t m_unClientFlags; // 0x1f8        
        uint8_t m_unOverrideStyle; // 0x1f9        
        [[maybe_unused]] std::uint8_t pad_0x1fa[0x16]; // 0x1fa
        // metadata: MNetworkEnable
        client::CAttributeList m_AttributeList; // 0x210        
        // metadata: MNetworkEnable
        client::CAttributeList m_NetworkedDynamicAttributes; // 0x270        
        // metadata: MNetworkEnable
        char m_szCustomName[161]; // 0x2d0        
        char m_szCustomNameOverride[161]; // 0x371        
        [[maybe_unused]] std::uint8_t pad_0x412[0x2e]; // 0x412
        bool m_bInitializedTags; // 0x440        
        [[maybe_unused]] std::uint8_t pad_0x441[0x7];
        
        // Static fields:
        static bool &Get_m_sbHasCleanedInventoryImageCacheDir() {return *reinterpret_cast<bool*>(interfaces::g_schema->FindTypeScopeForModule("client.dll")->FindDeclaredClass("C_EconItemView")->GetStaticFields()[0]->m_pInstance);};
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_EconItemView because it is not a standard-layout class
    static_assert(sizeof(C_EconItemView) == 0x448);
};
