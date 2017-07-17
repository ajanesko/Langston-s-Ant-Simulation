/********************************************************************************
*This class handles all of the functions of the board class needs such as print	*
*board, the ants movement, the getters and setters, and the default constructor/*
*deconstructor. The board is made up of a bunch of square class.				*
********************************************************************************/

#include <iostream>
#include "board.h"

//Prints board
void Board::printBoard(Ant ant) {
	for (int i = 0; i < sizeX; i++) {
		std::cout << "__";
	}
	std::cout << '\n';
	for (int i = 0; i < sizeX; i++)
	{
		for (int j = 0; j < sizeY; j++)
		{
			if (ant.getXCoord() == i && ant.getYCoord() == j) {
				std::cout << "@ ";
			}
			else {
				std::cout << gBoard[i][j].getColor() << ' ';
			}
		}
		std::cout << "\n";
	}
}

//Ant movement algorithim
void Board::antMovement(Ant& ant) {
//If white square turn 90 deg right and move forward one, if black turn 90 deg left and move forward one
	//If square ant is on white
	if (gBoard[ant.getXCoord()][ant.getYCoord()].getColor() == ' ') {
		//If ant is facing north
		if (ant.getAntDirect() == 'N') {
			ant.setAntDirect('E');
			gBoard[ant.getXCoord()][ant.getYCoord()].changeColor();
			ant.moveEast(sizeY);
		}
		//Facing east
		else if (ant.getAntDirect() == 'E') {
			ant.setAntDirect('S');
			gBoard[ant.getXCoord()][ant.getYCoord()].changeColor();
			ant.moveSouth(sizeX);
		}
		//Facing south
		else if (ant.getAntDirect() == 'S') {
			ant.setAntDirect('W');
			gBoard[ant.getXCoord()][ant.getYCoord()].changeColor();
			ant.moveWest(sizeY);
		}
		//Facing west
		else {
			ant.setAntDirect('N');
			gBoard[ant.getXCoord()][ant.getYCoord()].changeColor();
			ant.moveNorth(sizeX);
		}
	}
	//If square ant is on black
	else {
		//If ant is facing north
		if (ant.getAntDirect() == 'N') {
			ant.setAntDirect('W');
			gBoard[ant.getXCoord()][ant.getYCoord()].changeColor();
			ant.moveWest(sizeY);
		}
		//Facing east
		else if (ant.getAntDirect() == 'W') {
			ant.setAntDirect('S');
			gBoard[ant.getXCoord()][ant.getYCoord()].changeColor();
			ant.moveSouth(sizeX);
		}
		//Facing south
		else if (ant.getAntDirect() == 'S') {
			ant.setAntDirect('E');
			gBoard[ant.getXCoord()][ant.getYCoord()].changeColor();
			ant.moveEast(sizeY);
		}
		//Facing west
		else {
			ant.setAntDirect('N');
			gBoard[ant.getXCoord()][ant.getYCoord()].changeColor();
			ant.moveNorth(sizeX);
		}
	}
}

//SizeY getter
int Board::getSizeY() {
	return sizeY;
}

//SizeX getter
int Board::getSizeX() {
	return sizeX;
}

//Constructor
Board::Board(int x, int y) {
	sizeX = x;
	sizeY = y;
	gBoard = new Square*[sizeX];
	for (int i = 0; i < sizeX; ++i)
		gBoard[i] = new Square[sizeY];
}

//Deconstructor
Board::~Board() {
	for (int i = 0; i < sizeX; i++)
		delete[] gBoard[i];

	delete[] gBoard;
}