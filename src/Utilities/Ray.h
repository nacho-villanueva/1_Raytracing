#ifndef INC_1_RAYTRACING_RAY_H
#define INC_1_RAYTRACING_RAY_H


#include "Vector3.h"

class Ray {
public:

    Ray();
    Ray(Vector3 origin, Vector3 direction);

    Vector3 origin;
    Vector3 direction;

    Vector3 at(float t) const;
};


#endif //INC_1_RAYTRACING_RAY_H
