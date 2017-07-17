#ifndef BOARD_H
#define BOARD_H

#include "square.h"
#include "ant.h"

class Board {
private:
	int sizeX;	//board size x-coord
	int sizeY;	//board size y-coord
	Square** gBoard;
public:
	void printBoard(Ant ant);
	void antMovement(Ant& ant);
	int getSizeY();
	int getSizeX();
	Board(int x, int y);
	~Board();
};

#endif BOARD_H