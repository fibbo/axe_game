#include "axe.hpp"
#include "raylib.h"

#include <algorithm>

Axe::Axe(int x, int y, int size, int speed)
    : x_(x)
    , y_(y)
    , size_(size)
    , speed_(speed)
    , bbox_(x, y, x + size, y + size)
{
}

void Axe::draw(int width, int height, float frameTime)
{
  DrawRectangle(x_, y_, size_, size_, RED);
#ifdef DEBUG
  auto bbox_rect = bbox_.getRectangle();
  DrawRectangleLinesEx(bbox_rect, 2, GREEN);
#endif
  if (speed_ > 0)
  {
    y_ += std::max(frameTime * speed_, 1.0f);
  }
  else
  {
    y_ += std::min(frameTime * speed_, -1.0f);
  }

  if (y_ > height - size_ || y_ < 0)
  {
    speed_ = -speed_;
  }
}
