#ifndef ANT_H
#define ANT_H

class Ant
{
private:
	char antDirect;	//Direction any is facing N,S,E,W
	int antYCoord;	//Ant y-coord
	int antXCoord;	//Ant x-coord
public:
	void moveNorth(int xSize);
	void moveSouth(int xSize);
	void moveEast(int ySize);
	void moveWest(int ySize);
	void setAntDirect(char direction);
	int getXCoord();
	int getYCoord();
	char getAntDirect();
	Ant(bool randStrt, int x, int y);
};

#endif ANT_H