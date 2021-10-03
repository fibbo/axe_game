#ifndef __BOUNDINGBOX2D_HPP__
#define __BOUNDINGBOX2D_HPP__

#include "raylib.h"

class BoundingBox2D
{
public:
    BoundingBox2D(const Vector2& min, const Vector2& max);
    BoundingBox2D(float x_min, float y_min, float x_max, float y_max);
    BoundingBox2D(BoundingBox2D&& other) = default;
    BoundingBox2D(const BoundingBox2D& other) = default;
    BoundingBox2D() = default;
    ~BoundingBox2D() = default;
    Rectangle getRectangle() const;

private:
    Vector2 min_;
    Vector2 max_;
};

#endif // __BOUNDINGBOX2D_HPP__