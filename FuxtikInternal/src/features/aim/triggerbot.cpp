#include "triggerbot.h"
#include <stdlib.h>
#include <time.h>
#include <stdexcept>
#include "../../base.h"

static uintptr_t entityList = 0;
static bool isDirty = false;

static void SendClick(HWND Window) /* TODO Make it not lag like shit when looking at enemy */
{
	if (GetForegroundWindow() != Window)
		return;
	
	isDirty = true;

	INPUT input = { 0 };
	input.type = INPUT_MOUSE;
	input.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
	SendInput(1, &input, sizeof(INPUT));

	input.mi.dwFlags = MOUSEEVENTF_LEFTUP;
	SendInput(1, &input, sizeof(INPUT));

	int delay = 3 + rand() % (29 - 20 + 1);
	Sleep(delay);

	isDirty = false;
}

static inline bool ShouldFire(uint32_t entityTeam, uint32_t playerTeam, uint32_t entityHealth)
{ /* todo can add a SHOOT_ON_TEAMMATES for deathmatch */
	if (entityHealth > 0 && entityTeam != playerTeam) return true;
	return false;
}

static uintptr_t GetEntity(uint32_t entityId)
{
	uint32_t listOffset = 0x8 * (entityId >> 9);
	auto entityEntry = *(uintptr_t*)(entityList + listOffset + 0x10);
	if (!entityEntry) return 0;

	uint32_t entityOffset = 120 * (entityId & 0x1FF);
	uintptr_t result = *(uintptr_t*)(entityEntry + entityOffset);

	return result;
}

void Cheats::Aim::Triggerbot()
{
	if (isDirty) return;

	__try {
		auto localPawn = *(uintptr_t*)(Cheats::client + Offsets::dwLocalPlayerPawn);
		if (!localPawn) {
			return;
		}

		auto entityId = *(uint32_t*)(localPawn + Offsets::C_BaseEntity::m_iIDEntIndex);

		entityList = *(uintptr_t*)(Cheats::client + Offsets::dwEntityList);
		if (!entityList) {
			return;
		}

		if (entityId > 0) {
			auto entity = GetEntity(entityId);

			if (entity) {
				uint32_t entityTeam = *(uint32_t*)(entity + Offsets::C_BaseEntity::m_iTeamNum);
				uint32_t entityHealth = *(uint32_t*)(entity + Offsets::C_BaseEntity::m_iHealth);
				uint32_t playerTeam = *(uint32_t*)(localPawn + Offsets::C_BaseEntity::m_iTeamNum);

				if (ShouldFire(entityTeam, playerTeam, entityHealth)) {
					SendClick(Base::window);
				}
			}
		}
	}
	__except (EXCEPTION_EXECUTE_HANDLER) {
		return;
	}
}
