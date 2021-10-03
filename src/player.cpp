#include "player.hpp"

#include "raylib.h"

#include <algorithm>
#include <cstdio>
#include <cmath>

Player::Player(int x, int y, int r, int s)
  : x_(x)
  , y_(y)
  , r_(r)
  , base_speed_(s)
  , current_speed_(base_speed_)
  , last_direction_(Direction::NONE) {}

void Player::draw(int width, int height, float frameTime)
{
    DrawCircle(x_, y_, r_, BLUE);
    if (IsKeyDown(KEY_D))
    {
        if (last_direction_ == Direction::RIGHT)
        {
            current_speed_ += 1;
        }
        else
        {
            current_speed_ = base_speed_;
            last_direction_ = Direction::RIGHT;
        }
        // needs ceil otherwise it gets truncated to the original int value for a while
        x_ = std::min(static_cast<int>(std::ceil(x_ + frameTime * current_speed_)), width - r_);
    }
    else if (IsKeyDown(KEY_A))
    {
        if (last_direction_ == Direction::LEFT)
        {
            current_speed_ += 1;
        }
        else
        {
            current_speed_ = base_speed_;
            last_direction_ = Direction::LEFT;
        }
        x_ = std::max(r_, static_cast<int>(x_ - frameTime * current_speed_));
    }
    else {
        current_speed_ = std::max(base_speed_, current_speed_ - 1);
    }
}