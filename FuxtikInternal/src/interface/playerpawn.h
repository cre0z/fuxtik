#include <cstdint>
#include <string>

#include "entity.h"
#include "../math/math.h"

class C_CSPlayerPawn
{
public:
    virtual C_CSPlayerPawn* GetPlayerPawn(std::uint32_t uHandle) = 0;
};

class C_CSPlayerController : public CEntity
{
public:
    virtual std::string m_sSanitizedPlayerName() = 0;

    virtual int Teamnum() = 0;
    virtual int m_iPawnHealth() = 0;

    virtual Vec3 pos(C_CSPlayerPawn* pawn) = 0;

    virtual bool m_bIsLocalPlayerController() = 0;

    virtual C_CSPlayerPawn* m_hPlayerPawn() = 0;
};