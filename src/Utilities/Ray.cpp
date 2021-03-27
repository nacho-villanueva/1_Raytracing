#include "Ray.h"

Ray::Ray(const Vector3 origin, const Vector3 direction){
    this->origin = origin;
    this->direction = direction;
    this->direction.normalize();
}

Ray::Ray() = default;

Vector3 Ray::at(const float t) const{
    return origin + direction * t;
}
