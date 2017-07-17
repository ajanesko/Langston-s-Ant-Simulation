/********************************************************************************
*This class handles all of the functions of the menu class such as showing the	*
*options and holding each individual case.										*
********************************************************************************/

#include "menu.h"
#include <string>

void Menu::case1() {
	Game game;

	game.getInputs();
	game.settings();

	game.gamePlay();
}

void Menu::case2() {
	exit(1);
}

void Menu::showChoices() {
	std::cout << "Dice War Game\nPlease enter 1 or 2\n";
	std::cout << "1: Run the program\n2: Quit\n";
}