#pragma once
#include <limits>
#include <cmath>

struct QAngle;
struct Matrix3x4;

struct Vector2D {
	constexpr Vector2D(const float x = 0.0f, const float y = 0.0f) :
		x(x), y(y) {
	}

	[[nodiscard]] bool IsZero() const {
		return (this->x == 0.0f && this->y == 0.0f);
	}

	float x = 0.0f, y = 0.0f;
};

struct Vector {
public:
	constexpr Vector(const float x = 0.0f, const float y = 0.0f, const float z = 0.0f) :
		x(x), y(y), z(z) {
	}

	constexpr Vector(const float* arrVector) :
		x(arrVector[0]), y(arrVector[1]), z(arrVector[2]) {
	}

	constexpr Vector(const Vector2D& vecBase2D) :
		x(vecBase2D.x), y(vecBase2D.y) {
	}


	[[nodiscard]] float& operator[](const int nIndex) {
		return reinterpret_cast<float*>(this)[nIndex];
	}

	[[nodiscard]] const float& operator[](const int nIndex) const {
		return reinterpret_cast<const float*>(this)[nIndex];
	}

	constexpr Vector& operator=(const Vector& vecBase) {
		this->x = vecBase.x;
		this->y = vecBase.y;
		this->z = vecBase.z;
		return *this;
	}

	constexpr Vector& operator=(const Vector2D& vecBase2D) {
		this->x = vecBase2D.x;
		this->y = vecBase2D.y;
		this->z = 0.0f;
		return *this;
	}

	constexpr Vector& operator+=(const Vector& vecBase) {
		this->x += vecBase.x;
		this->y += vecBase.y;
		this->z += vecBase.z;
		return *this;
	}

	constexpr Vector& operator-=(const Vector& vecBase) {
		this->x -= vecBase.x;
		this->y -= vecBase.y;
		this->z -= vecBase.z;
		return *this;
	}

	constexpr Vector& operator*=(const Vector& vecBase) {
		this->x *= vecBase.x;
		this->y *= vecBase.y;
		this->z *= vecBase.z;
		return *this;
	}

	constexpr Vector& operator/=(const Vector& vecBase) {
		this->x /= vecBase.x;
		this->y /= vecBase.y;
		this->z /= vecBase.z;
		return *this;
	}

	constexpr Vector& operator+=(const float flAdd) {
		this->x += flAdd;
		this->y += flAdd;
		this->z += flAdd;
		return *this;
	}

	constexpr Vector& operator-=(const float flSubtract) {
		this->x -= flSubtract;
		this->y -= flSubtract;
		this->z -= flSubtract;
		return *this;
	}

	constexpr Vector& operator*=(const float flMultiply) {
		this->x *= flMultiply;
		this->y *= flMultiply;
		this->z *= flMultiply;
		return *this;
	}

	constexpr Vector& operator/=(const float flDivide) {
		this->x /= flDivide;
		this->y /= flDivide;
		this->z /= flDivide;
		return *this;
	}

	constexpr Vector& operator-() {
		this->x = -this->x;
		this->y = -this->y;
		this->z = -this->z;
		return *this;
	}

	constexpr Vector operator-() const {
		return { -this->x, -this->y, -this->z };
	}

	Vector operator+(const Vector& vecAdd) const {
		return { this->x + vecAdd.x, this->y + vecAdd.y, this->z + vecAdd.z };
	}

	Vector operator-(const Vector& vecSubtract) const {
		return { this->x - vecSubtract.x, this->y - vecSubtract.y, this->z - vecSubtract.z };
	}

	Vector operator*(const Vector& vecMultiply) const {
		return { this->x * vecMultiply.x, this->y * vecMultiply.y, this->z * vecMultiply.z };
	}

	Vector operator/(const Vector& vecDivide) const {
		return { this->x / vecDivide.x, this->y / vecDivide.y, this->z / vecDivide.z };
	}

	Vector operator+(const float flAdd) const {
		return { this->x + flAdd, this->y + flAdd, this->z + flAdd };
	}

	Vector operator-(const float flSubtract) const {
		return { this->x - flSubtract, this->y - flSubtract, this->z - flSubtract };
	}

	Vector operator*(const float flMultiply) const {
		return { this->x * flMultiply, this->y * flMultiply, this->z * flMultiply };
	}

	Vector operator/(const float flDivide) const {
		return { this->x / flDivide, this->y / flDivide, this->z / flDivide };
	}
	Vector Normalize() const {
		float len = Length();
		if (len != 0)
			return { x / len, y / len, z / len };
		return { 0, 0, 0 };
	}
	float Length() const {
		return std::sqrt(x * x + y * y + z * z);
	}
	float Distance(const Vector& other) const {
		return std::sqrt((x - other.x) * (x - other.x) +
			(y - other.y) * (y - other.y) +
			(z - other.z) * (z - other.z));
	}

	float x = 0.0f, y = 0.0f, z = 0.0f;
};

struct Vector4D {
	constexpr Vector4D(const float x = 0.0f, const float y = 0.0f, const float z = 0.0f, const float w = 0.0f) :
		x(x), y(y), z(z), w(w) {
	}

	float x = 0.0f, y = 0.0f, z = 0.0f, w = 0.0f;
};

struct alignas(16) VectorAligned : Vector {
	VectorAligned() = default;

	explicit VectorAligned(const Vector& vecBase) {
		this->x = vecBase.x;
		this->y = vecBase.y;
		this->z = vecBase.z;
		this->w = 0.0f;
	}

	constexpr VectorAligned& operator=(const Vector& vecBase) {
		this->x = vecBase.x;
		this->y = vecBase.y;
		this->z = vecBase.z;
		this->w = 0.0f;
		return *this;
	}

	float w = 0.0f;
};

struct Matrix3x4;

struct QAngle {
	constexpr QAngle(float x = 0.f, float y = 0.f, float z = 0.f) :
		x(x), y(y), z(z) {
	}

	constexpr QAngle(const float* arrAngles) :
		x(arrAngles[0]), y(arrAngles[1]), z(arrAngles[2]) {
	}

#pragma region qangle_array_operators

	[[nodiscard]] float& operator[](const int nIndex) {
		return reinterpret_cast<float*>(this)[nIndex];
	}

	[[nodiscard]] const float& operator[](const int nIndex) const {
		return reinterpret_cast<const float*>(this)[nIndex];
	}

#pragma endregion

#pragma region qangle_relational_operators

	bool operator==(const QAngle& angBase) const {
		return this->IsEqual(angBase);
	}

	bool operator!=(const QAngle& angBase) const {
		return !this->IsEqual(angBase);
	}

#pragma endregion

#pragma region qangle_assignment_operators

	constexpr QAngle& operator=(const QAngle& angBase) {
		this->x = angBase.x;
		this->y = angBase.y;
		this->z = angBase.z;
		return *this;
	}

#pragma endregion

#pragma region qangle_arithmetic_assignment_operators

	constexpr QAngle& operator+=(const QAngle& angBase) {
		this->x += angBase.x;
		this->y += angBase.y;
		this->z += angBase.z;
		return *this;
	}

	constexpr QAngle& operator-=(const QAngle& angBase) {
		this->x -= angBase.x;
		this->y -= angBase.y;
		this->z -= angBase.z;
		return *this;
	}

	constexpr QAngle& operator*=(const QAngle& angBase) {
		this->x *= angBase.x;
		this->y *= angBase.y;
		this->z *= angBase.z;
		return *this;
	}

	constexpr QAngle& operator/=(const QAngle& angBase) {
		this->x /= angBase.x;
		this->y /= angBase.y;
		this->z /= angBase.z;
		return *this;
	}

	constexpr QAngle& operator+=(const float flAdd) {
		this->x += flAdd;
		this->y += flAdd;
		this->z += flAdd;
		return *this;
	}

	constexpr QAngle& operator-=(const float flSubtract) {
		this->x -= flSubtract;
		this->y -= flSubtract;
		this->z -= flSubtract;
		return *this;
	}

	constexpr QAngle& operator*=(const float flMultiply) {
		this->x *= flMultiply;
		this->y *= flMultiply;
		this->z *= flMultiply;
		return *this;
	}

	constexpr QAngle& operator/=(const float flDivide) {
		this->x /= flDivide;
		this->y /= flDivide;
		this->z /= flDivide;
		return *this;
	}

#pragma endregion

#pragma region qangle_arithmetic_unary_operators

	constexpr QAngle& operator-() {
		this->x = -this->x;
		this->y = -this->y;
		this->z = -this->z;
		return *this;
	}

	constexpr QAngle operator-() const {
		return { -this->x, -this->y, -this->z };
	}

#pragma endregion

#pragma region qangle_arithmetic_ternary_operators

	constexpr QAngle operator+(const QAngle& angAdd) const {
		return { this->x + angAdd.x, this->y + angAdd.y, this->z + angAdd.z };
	}

	constexpr QAngle operator-(const QAngle& angSubtract) const {
		return { this->x - angSubtract.x, this->y - angSubtract.y, this->z - angSubtract.z };
	}

	constexpr QAngle operator*(const QAngle& angMultiply) const {
		return { this->x * angMultiply.x, this->y * angMultiply.y, this->z * angMultiply.z };
	}

	constexpr QAngle operator/(const QAngle& angDivide) const {
		return { this->x / angDivide.x, this->y / angDivide.y, this->z / angDivide.z };
	}

	constexpr QAngle operator+(const float flAdd) const {
		return { this->x + flAdd, this->y + flAdd, this->z + flAdd };
	}

	constexpr QAngle operator-(const float flSubtract) const {
		return { this->x - flSubtract, this->y - flSubtract, this->z - flSubtract };
	}

	constexpr QAngle operator*(const float flMultiply) const {
		return { this->x * flMultiply, this->y * flMultiply, this->z * flMultiply };
	}

	constexpr QAngle operator/(const float flDivide) const {
		return { this->x / flDivide, this->y / flDivide, this->z / flDivide };
	}

#pragma endregion

	[[nodiscard]] bool IsValid() const {
		return (std::isfinite(this->x) && std::isfinite(this->y) && std::isfinite(this->z));
	}

	[[nodiscard]] bool IsEqual(const QAngle& angEqual, const float flErrorMargin = std::numeric_limits<float>::epsilon()) const {
		return (std::fabsf(this->x - angEqual.x) < flErrorMargin && std::fabsf(this->y - angEqual.y) < flErrorMargin && std::fabsf(this->z - angEqual.z) < flErrorMargin);
	}

	[[nodiscard]] bool IsZero() const {
		return (this->x == 0.0f && this->y == 0.0f && this->z == 0.0f);
	}

	/// @returns: length of hypotenuse
	[[nodiscard]] float Length2D() const {
		return std::sqrtf(x * x + y * y);
	}

	QAngle& Normalize() {
		this->x = std::remainderf(this->x, 360.f);
		this->y = std::remainderf(this->y, 360.f);
		this->z = std::remainderf(this->z, 360.f);
		return *this;
	}

	void ToDirections(Vector* pvecForward, Vector* pvecRight = nullptr, Vector* pvecUp = nullptr) const;

	[[nodiscard]] Matrix3x4 ToMatrix(const Vector& vecOrigin = {}) const;

public:
	float x = 0.0f, y = 0.0f, z = 0.0f;
};