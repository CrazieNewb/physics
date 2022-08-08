#include "raylib.h"
#include "raymath.h"
#include "rlgl.h"

#include "engine.hpp"

int main(void) {
    // Initialization
    const int screenWidth = 800;
    const int screenHeight = 450;

    SetConfigFlags(FLAG_MSAA_4X_HINT);
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(screenWidth, screenHeight, "aaa");

    // DisableCursor();
    // HideCursor();
    SetTargetFPS(200);

    Engine engine;

    // Main game loop
    while (!WindowShouldClose()) // Detect window close button || ESC key
    {
        // Update
        engine.update();

        // Draw
        BeginDrawing();
            ClearBackground(RAYWHITE);
            engine.draw();

        EndDrawing();
    }

    // De-Initialization
    CloseWindow();

    return 0;
}