/********************************************************************************
*This class handles all of the functions of the ant class such as all of the	*
*directions of movement, holding the direction the ant is facing, the getters	*
*and setters, and the default constructor.										*
********************************************************************************/

#include "ant.h"

//Moves ant north
void Ant::moveNorth(int xSize) {
	if ((antXCoord - 1) < 0) {
		antXCoord = xSize - 1;
	}
	else {
		antXCoord = antXCoord - 1;
	}
}

//Moves ant south
void Ant::moveSouth(int xSize) {
	if ((antXCoord + 1) > xSize) {
		antXCoord = 0;
	}
	else {
	antXCoord = antXCoord + 1;
	}
}

//Moves ant east
void Ant::moveEast(int ySize) {
	if ((antYCoord + 1) > ySize) {
		antYCoord = 0;
	}
	else {
		antYCoord = antYCoord + 1;
	}
}

//Moves ant west
void Ant::moveWest(int ySize) {
	if ((antYCoord - 1) < 0) {
		antYCoord = ySize - 1;
	}
	else {
		antYCoord = antYCoord - 1;
	}
}

//Sets ant direction
void Ant::setAntDirect(char direction) {
	antDirect = direction;
}

//Get direct ant facing
char Ant::getAntDirect() {
	return antDirect;
}

//Gets ant x coord
int Ant::getXCoord() {
	return antXCoord;
}

//Get ant y coord
int Ant::getYCoord() {
	return antYCoord;
}

//Default constructor
Ant::Ant(bool randStrt, int x, int y) {
	antDirect = 'N';
	if (randStrt) {
		antXCoord = x;
		antYCoord = y;
	}
	else {
		antXCoord = x / 2;
		antYCoord = y / 2;
	}
}