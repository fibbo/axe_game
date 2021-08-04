#include <cstdio>
#include <algorithm>
#include "raylib.h"

#include "game.hpp"

int main()
{
    int width{800};
    int height{450};
    Game game(800, 450);
    game.init();
    InitWindow(width, height, "Axe Game");
    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(WHITE);
        game.render();
        EndDrawing();
    }
}