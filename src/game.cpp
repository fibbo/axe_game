#include "game.hpp"
#include "entity.hpp"
#include <memory>

Game::Game(int width, int height)
  : width_(width)
  , height_(height) {}

void Game::init()
{
    auto axe = std::make_shared<Axe>(400, 50, 50, 10);
    objects_.emplace_back(std::move(axe));

    player_ = std::make_shared<Player>(width_ / 2, height_ / 2, 25, 8);
}

void Game::render()
{
    player_->draw(width_, height_);
    for (const auto& entity : objects_)
    {
        entity->draw(width_, height_);
    }
}