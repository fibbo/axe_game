#ifndef __ENTITY_HPP__
#define __ENTITY_HPP__

enum class Direction
{
    NONE,
    UP,
    LEFT,
    DOWN,
    RIGHT,
};

class Entity
{
public:
    virtual void draw(int width, int height, float frameTime) = 0;
};

#endif