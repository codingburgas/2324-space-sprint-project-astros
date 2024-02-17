#include "Menu.h"
#include <iostream>
#include "Game1.h"
#include "Game2.h"
#include "Game3.h"
#include "GlobalFunctions.h"
using namespace std;

void ShowMenu()
{
	clear();
	PrintLogo();
	cout << "Choose your game: 1, 2 or 3 " << endl;
	cout << "1. Astronomy quiz: " << endl;
	cout << "2. Neshto si drugo: " << endl;
	cout << "3. Neshto si treto: " << endl;
	int choise;
	do {
		cin >> choise;
		if (choise == 1) {
			playGame1();
		}
		else if (choise == 2) {
			playGame2();
		}
		else if (choise == 3) {
			playGame3();
		}
		else {
			cout << "Wrong choice! Please enter a number between 1 and 3";
		}
	} while (choise < 1 || choise > 3);
}
