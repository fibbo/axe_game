#ifndef __PLAYER_HPP__
#define __PLAYER_HPP__

#include "entity.hpp"

class Player : public Entity
{
public:
    Player(int x, int y, int r, int s);
    void draw(int width, int height) override;
private:
    int x_;
    int y_;
    int r_;
    int base_speed_;
    int current_speed_;
    Direction last_direction_;

};

#endif