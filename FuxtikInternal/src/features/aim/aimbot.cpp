#include "aimbot.h"
#include "../offsets.h"
#include "../cheats.h"
#include "../../base.h"
#include "../../math/math.h"
#include "../../math/vector.h"
#include "../../config/config.h"

#include <cstdint>
#include <iostream>

inline QAngle CalcAngles(Vector viewPos, Vector aimPos)
{
	QAngle angle = { 0,0,0 };
	Vector delta = aimPos - viewPos;

	angle.x = -asin(delta.z / delta.Length()) * (180.f / 3.141592654f);
	angle.y = atan2(delta.y, delta.x) * (180.f / 3.141592654f);
	return angle;
}

inline float GetFov(const QAngle& viewAngle, const QAngle& aimAngle)
{
	QAngle delta = (aimAngle - viewAngle).Normalize();
	return sqrtf(powf(delta.x, 2.0f) + powf(delta.y, 2.0f));
}

inline int ConfigTargetToBoneIndex(int config)
{
	switch (config) {
		case 0: // HEAD
			std::cout << "Head\n";
			return 6;
		case 1: // BODY
			std::cout << "Body\n";
			return 4; // maybe 2?
		case 2: // LEFT ARM
			std::cout << "Left Arm\n";
			return 8;
		case 3: // RIGHT ARM
			std::cout << "Right Arm\n";
			return 13;
		case 4: // LEFT LEG
			std::cout << "Left Leg\n";
			return 22;
		case 5: // RIGHT LEG
			std::cout << "Right Leg\n";
			return 25;
		default: // HEAD
			std::cout << "Unknown (default head)\n";
			return 6;
	}
}

void Cheats::Aim::Aimbot()
{
	auto localPawn = *(uintptr_t*)(Cheats::client + Offsets::dwLocalPlayerPawn);
	if (!localPawn)
		return;

	auto localTeam = *(int*)(localPawn + Offsets::m_iTeamNum);
	auto entityList = *(uintptr_t*)(Cheats::client + Offsets::dwEntityList);

	const auto isDefusing = *(bool*)(localPawn + Offsets::m_bIsDefusing);
	if (isDefusing)
		return;

	const auto weapon = *(uintptr_t*)(localPawn + Offsets::m_pClippingWeapon);
	if (!weapon)
		return;

	const auto ammoRemaining = *(int32_t*)(weapon + Offsets::m_iClip1);
	if (ammoRemaining <= 0)
		return;

	uintptr_t localGameScene = *(uintptr_t*)(localPawn + Offsets::C_BaseEntity::m_pGameSceneNode);

	uintptr_t localBoneArray = *(uintptr_t*)(localGameScene + Offsets::CGameSceneNode::CSkeletonInstance::m_modelState + 0x80);
	Vector localEyePos = *(Vector*)(localBoneArray + 6 * 32);

	QAngle *viewAngles = (QAngle*)(Cheats::client + Offsets::dwViewAngles);

	Vec3 bestAngle;
	float bestFov = 5.f;
	int localIndex = 0;

	for (int i = 1; i < 64; i++) {
		uintptr_t listEntry1 = *(uintptr_t*)(entityList + (8 * (i & 0x7FFF) >> 9) + 16);
		if (!listEntry1)
			continue;

		uintptr_t playerController = *(uintptr_t*)(listEntry1 + 120 * (i & 0x1FF));
		if (!playerController)
			continue;

		uint32_t playerPawn = *(uint32_t*)(playerController + Offsets::m_hPlayerPawn);
		if (!playerPawn)
			continue;

		if (playerPawn == localPawn)
		{
			localIndex = i;
			break;
		}
	}

	for (int i = 1; i < 64; i++) {
		uintptr_t listEntry1 = *(uintptr_t*)(entityList + (8 * (i & 0x7FFF) >> 9) + 16);
		if (!listEntry1)
			continue;

		uintptr_t playerController = *(uintptr_t*)(listEntry1 + 120 * (i & 0x1FF));
		if (!playerController)
			continue;

		uint32_t playerPawn = *(uint32_t*)(playerController + Offsets::m_hPlayerPawn);
		if (!playerPawn || playerPawn == localPawn)
			continue;

		uintptr_t listEntry2 = *(uintptr_t*)(entityList + 0x8 * ((playerPawn & 0x7FFF) >> 9) + 16);
		if (!listEntry2)
			continue;

		uintptr_t player = *(uintptr_t*)(listEntry2 + 120 * (playerPawn & 0x1FF));
		if (!player)
			continue;

		int health = *(int*)(player + Offsets::m_iHealth);
		if (!health || health > 100)
			continue;

		int team = *(int*)(player + Offsets::m_iTeamNum);
		if (team == localTeam && Config::DeathmatchMode != true)
			continue;

		uint32_t entitySpotted = *(uint32_t*)(player + Offsets::m_entitySpottedState + Offsets::m_bSpottedByMask) & (1 << localIndex - 1);
		if (!entitySpotted)
			continue;

		uintptr_t entGameScene = *(uintptr_t*)(player + Offsets::C_BaseEntity::m_pGameSceneNode);
		uintptr_t boneArray = *(uintptr_t*)(entGameScene + Offsets::CGameSceneNode::CSkeletonInstance::m_modelState + 0x80);
		Vector entEyePos = *(Vector*)(boneArray + ConfigTargetToBoneIndex(Config::Aim::AimbotTargetBone) * 32);

		QAngle angle = CalcAngles(entEyePos, localEyePos);
		// normalize angle
		angle.x *= -1.f;
		angle.y += 180.f;

		const float fov = GetFov(*viewAngles, angle);
		if (!std::isfinite(fov) || fov > Config::Aim::AimbotFOV)
			continue;

		if (Config::Aim::RCS) {
			QAngle punchAngle = *(QAngle*)(localPawn + Offsets::m_aimPunchAngle);

			angle -= punchAngle * 2.f;
		}

		angle.z = 0.f;
		angle = angle.Normalize();
		*viewAngles = angle;
		break;
	}
}