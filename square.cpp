/********************************************************************************
*This class handles all of the functions of the square class such as changing	*
*the color of the square, the getters and setters, and the default constructor.	*
*This is what the entire board instance is made of.								*
********************************************************************************/

#include "square.h"

//Changes square color
//Changes square color from white to black or from black to white
void Square::changeColor() {
	if (color == ' ')
		color = '#';
	else
		color = ' ';
}

//Sets square color
void Square::setColor(char newSC) {
	color = newSC;
}

//Gets square color
char Square::getColor() {
	return color;
}

//Default constructor
Square::Square() {
	color = ' ';
}
