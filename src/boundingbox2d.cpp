#include "boundingbox2d.hpp"

#include "raylib.h"

BoundingBox2D::BoundingBox2D(const Vector2& min, const Vector2& max)
  : min_(min)
  , max_(max) {}

BoundingBox2D::BoundingBox2D(float x_min, float y_min, float x_max, float y_max)
{
    min_.x = x_min;
    min_.y = y_min;
    max_.x = x_max;
    max_.y = y_max;
}

Rectangle BoundingBox2D::getRectangle() const
{
    Rectangle rect;
    rect.x = min_.x;
    rect.y = min_.y;
    rect.width = max_.x - min_.x;
    rect.height = max_.y - min_.y;
    return rect;
}