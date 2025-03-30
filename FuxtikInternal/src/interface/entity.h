#pragma once

#include <cstdint>

class CEntity
{
public:
	const int& GetHealth() const noexcept
	{
		return *reinterpret_cast<int*>(std::uintptr_t(this) + 0x100);
	}
};

class IClientEntityList
{
public:
	virtual void* GetClientNetworkable(int entnum) = 0;
	virtual void* GetClientNetworkableFromHandle(unsigned long hEnt) = 0;
	virtual void* GetClientUnknownFromHandle(unsigned long hEnt) = 0;

	virtual CEntity* GetClientEntity(int entnum) = 0;
	virtual CEntity* GetClientEntityFromHandle(unsigned long hEnt) = 0;

	virtual int NumberOfEntities(bool bIncludeNonNetworkable) = 0;

	virtual int GetHighestEntityIndex(void) = 0;

	virtual void SetMaxEntities(int maxents) = 0;
	virtual int GetMaxEntities() = 0;
};