#include "player.hpp"

#include "raylib.h"

#include <algorithm>

Player::Player(int x, int y, int r, int s)
  : x_(x)
  , y_(y)
  , r_(r)
  , base_speed_(s)
  , current_speed_(base_speed_)
  , last_direction_(Direction::NONE) {}

void Player::draw(int width, int height)
{
    DrawCircle(x_, y_, r_, BLUE);
    if (IsKeyDown(KEY_D))
    {
        if (last_direction_ == Direction::RIGHT)
        {
            current_speed_ += 1;
        }
        else {
            current_speed_ = base_speed_;
            last_direction_ = Direction::RIGHT;
        }
        x_ = std::min(x_ + current_speed_, width - r_);
    }
    else if (IsKeyDown(KEY_A))
    {
        if (last_direction_ == Direction::LEFT)
        {
            current_speed_ += 1;
        }
        else {
            current_speed_ = base_speed_;
            last_direction_ = Direction::LEFT;
        }
        x_ = std::max(r_, x_ - current_speed_);
    }
    else {
        current_speed_ = std::max(base_speed_, current_speed_ - 1);
    }
}