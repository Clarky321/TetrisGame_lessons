#include <raylib.h>

#include "TetrisCore\colors.h"
#include "TetrisCore\grid.h"

int main()
{
	const int screenWidth = 300;
	const int screenHeight = 600;

	InitWindow(screenWidth, screenHeight, "Raylib Tetris");
	SetTargetFPS(60);

	Grid grid = Grid();
	grid.Print();

	while (WindowShouldClose() == false)
	{
		BeginDrawing();

		ClearBackground(darkBlue);

		grid.Draw();

		EndDrawing();
	}

	CloseWindow();

	return 0;
}