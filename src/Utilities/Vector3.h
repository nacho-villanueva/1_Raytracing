
#ifndef INC_1_RAYTRACING_VECTOR3_H
#define INC_1_RAYTRACING_VECTOR3_H

#include <iostream>

class Vector3 {
public:
    float x, y, z;

    Vector3(float x, float y, float z);

    Vector3();

    void normalize();

    Vector3 normalized() const;

    float magnitude() const;
    float magnitudeSquare() const;

    bool isZero() const;

    static float dotProduct(const Vector3 &vecA, const Vector3 &vec2);

    Vector3 operator+(const Vector3 &other) const;
    void operator+=(const Vector3 &other);

    Vector3 operator-() const;
    Vector3 operator-(const Vector3 &other) const;
    void operator-=(const Vector3 &other);

    Vector3 operator*(float other) const;
    void operator*=(float other);
    friend Vector3 operator*(float other, const Vector3 &vec);

    Vector3 operator/(float other) const;
    void operator/=(float other);

    friend std::ostream & operator << (std::ostream &out, const Vector3 &vector3);

    void normalizeAngles();

private:
    static float normalizeAngle(float angle);

};


#endif //INC_1_RAYTRACING_VECTOR3_H
