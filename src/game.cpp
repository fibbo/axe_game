#include "game.hpp"
#include "entity.hpp"
#include "raylib.h"
#include <memory>

Game::Game(int width, int height)
  : width_(width)
  , height_(height)
  , frameTime_(0) {}

void Game::init()
{
    auto axe = std::make_shared<Axe>(400, 50, 50, 500);
    objects_.emplace_back(std::move(axe));

    player_ = std::make_shared<Player>(width_ / 2, height_ / 2, 25, 1005);
}

void Game::render()
{
    frameTime_ = GetFrameTime();
    player_->draw(width_, height_, frameTime_);
    for (const auto& entity : objects_)
    {
        entity->draw(width_, height_, frameTime_);
    }
}