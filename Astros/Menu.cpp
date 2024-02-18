#include "Menu.h"
#include <iostream>
#include "Game1.h"
#include "Game2.h"
#include "Game3.h"
#include "GlobalFunctions.h"
using namespace std;

void ShowMenu()
{
	ClearScreen();
	cout << "Choose your game: 1, 2 or 3 " << endl;
	cout << "1. Astronomy quiz: " << endl;
	cout << "2. Cosmic trivia: " << endl;
	cout << "3. Neshto si treto: " << endl;
	int choice;
	do {
		cin >> choice;
		if (choice == 1) {
			playGame1();
		}
		else if (choice == 2) {
			playGame2();
		}
		else if (choice == 3) {
			playGame3();
		}
		else {
			cout << "Wrong choice! Please enter a number between 1 and 3";
		}
	} while (choice < 1 || choice > 3);
}
