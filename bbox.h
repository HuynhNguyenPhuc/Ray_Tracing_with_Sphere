#ifndef BBOX_H
#define BBOX_H

#include "geometry.h"

class BoundingBox {
public:
    Vec3 min;
    Vec3 max;

    BoundingBox();
    BoundingBox(const Vec3& min, const Vec3& max);

    bool intersect(const Ray& ray, float& t_min, float& t_max) const;
    void expand(const Vec3& p);
    BoundingBox expand(const BoundingBox& other) const;
};

#endif // BBOX_H