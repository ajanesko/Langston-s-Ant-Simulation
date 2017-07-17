#ifndef SQUARE_H
#define SQUARE_H

class Square {
private:
	char color;	//color of square " " = white or "#" = black
	bool ifAnt;	//
public:
	void changeColor();
	void setColor(char newSC);
	char getColor();
	Square();
};

#endif BOARD_H