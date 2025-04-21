#include <iostream>

#include "raylib.h"

int main()
{
	std::cout << "Hello, world!\n";

    InitWindow(800, 450, "raylib [core] example - basic window");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, LIGHTGRAY);
        EndDrawing();
    }

    CloseWindow();

	return EXIT_SUCCESS;
}