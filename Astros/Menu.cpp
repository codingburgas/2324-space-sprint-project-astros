#include "Menu.h"
#include <iostream>
#include <string>
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
	cout << "1. Astronomy Quiz: " << endl;
	cout << "2. Planet Akinator: " << endl;
	cout << "3. Cosmic Trivia: " << endl;

	string choice;
	bool timetochoose = true;

	while (timetochoose) {
		getline(cin, choice, '\n');
		
		if (choice == "1" or choice == "Astronomy Quiz") {
			playGame1();
			timetochoose = false;
		}
		else if (choice == "2" or choice == "Planet Akinator") {
			playGame2();
			timetochoose = false;
		}
		else if (choice == "3" or choice == "Cosmic Trivia") {
			playGame3();
			timetochoose = false;
		}
		else if (choice == "0" or choice == "Exit" or choice == "No") {
			timetochoose = false;
		}

		else cout << "There is no such choice! Please enter a number between 1 and 3" << endl;
	} 
}