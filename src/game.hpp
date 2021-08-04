#ifndef __GAME_HPP__
#define __GAME_HPP__

#include "entity.hpp"
#include "player.hpp"
#include "axe.hpp"

#include <memory>
#include <vector>

using EntityPtr = std::shared_ptr<Entity>;
using PlayerPtr = std::shared_ptr<Player>;

class Game
{
public:
    Game(int width, int height);
    void init();
    void render();
private:
    int width_;
    int height_;
    std::vector<EntityPtr> objects_;
    PlayerPtr player_;
};


#endif