#ifndef __AXE_HPP__
#define __AXE_HPP__

#include "entity.hpp"

class Axe : public Entity
{
public:
    Axe(int x, int y, int size, int speed);
    void draw(int width, int height) override;
private:
    int x_;
    int y_;
    int size_;
    int speed_;
};

#endif