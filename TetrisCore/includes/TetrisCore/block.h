#ifndef BLOCK_H
#define BLOCK_H

#include <vector>
#include <map>
#include "TetrisCore\position.h"
#include "TetrisCore\colors.h"

class Block
{
public:
	Block();

	void Draw();

	int id;

	std::map<int, std::vector<Position>> cells;

private:
	int cellSize;
	int rotationState;
	std::vector<Color> colors;
};

#endif // !BLOCK_H
