#include "axe.hpp"
#include "raylib.h"

Axe::Axe(int x, int y, int size, int speed)
  : x_(x)
  , y_(y)
  , size_(size)
  , speed_(speed) {}

void Axe::draw(int width, int height)
{
    DrawRectangle(x_, y_, size_, size_, RED);

    y_ += speed_;

    if (y_ > height - size_ || y_ < 0)
    {
        speed_ = -speed_;
    }

}