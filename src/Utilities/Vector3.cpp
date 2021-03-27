#include "Vector3.h"
#include <ostream>

Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}
Vector3::Vector3() : Vector3(0, 0, 0) {}

void Vector3::normalize() {
    float mag = magnitude();
    this->x /= mag;
    this->y /= mag;
    this->z /= mag;
}

Vector3 Vector3::normalized() const {
    Vector3 vec = {this->x, this->y, this->z};
    vec.normalize();
    return vec;
}

float Vector3::magnitude() const {
    return sqrt(this->x * this->x + this->y * this->y + this->z * this->z);
}

float Vector3::magnitudeSquare() const {
    return this->x * this->x + this->y * this->y + this->z * this->z;
}

float Vector3::dotProduct(const Vector3 &vecA, const Vector3 &vecB) {
    return vecA.x * vecB.x + vecA.y * vecB.y + vecA.z * vecB.z;
}

Vector3 Vector3::operator*(const float other) const {
    return {this->x * other, this->y * other, this->z * other};
}

Vector3 operator*(const float other, const Vector3 &vec) {
    return {vec.x * other, vec.y * other, vec.z * other};
}

Vector3 Vector3::operator+(const Vector3 &other) const {
    Vector3 vec = (*this);
    vec += other;
    return vec;
}

Vector3 Vector3::operator-() const {
    return {-x,-y,-z};
}

Vector3 Vector3::operator-(const Vector3 &other) const {
    Vector3 vec = (*this);
    vec -= other;
    return vec;
}

void Vector3::operator+=(const Vector3 &other) {
    x += other.x;
    y += other.y;
    z += other.z;
}

void Vector3::operator-=(const Vector3 &other) {
    x -= other.x;
    y -= other.y;
    z -= other.z;
}

void Vector3::operator*=(const float other) {
    x *= other;
    y *= other;
    z *= other;
}

Vector3 Vector3::operator/(float other) const {
    Vector3 res = (*this);
    res /= other;
    return res;
}

void Vector3::operator/=(float other) {
    x /= other;
    y /= other;
    z /= other;
}

std::ostream &operator<<(std::ostream &out, const Vector3 &vector3) {
out << "( " << vector3.x << ", " << vector3.y << ", " << vector3.z << " )";
return out;
}



void Vector3::normalizeAngles()
{
    x = normalizeAngle(x);
    y = normalizeAngle(y);
    z = normalizeAngle(z);
}

float Vector3::normalizeAngle(float angle)
{
    while (angle > 360)
        angle -= 360;
    while (angle < 0)
        angle += 360;
    return angle;
}

bool Vector3::isZero() const {
    const auto s = 1e-8;
    return (fabs(x) < s) && (fabs(y) < s) && (fabs(z) < s);
}
