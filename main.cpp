/****************************************************
*Program Name: Project 1							*
*Author: Gary Janesko								*
*Date: 04/12/2017									*
*Description: This program asks the user to choose	*
*the size of the board, the number of steps to run	*
*the ant movement and if the user wants to start in	*
*a random location, then uses all of this to run the*
*Langston's Ant algorithim.							*
****************************************************/

#include <iostream>
#include <string>
#include <random>
#include "menu.h"

int main() {
	Menu menu1;
	int choice;

	menu1.showChoices();
	std::cin >> choice;

	switch (choice) {
	case 1:
		menu1.case1();
		break;
	case 2:
		menu1.case2();
		break;
	}

	return 0;
}