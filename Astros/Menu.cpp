#include "Menu.h"
#include <iostream>
#include <string>
#include "Game1.h"
#include "Game2.h"
#include "Game3.h"
#include "Game4.h"
#include "GlobalFunctions.h"
using namespace std;

void ShowMenu()
{
	FullScreen();
	clear();
	PrintLogo();
	centerText("Choose your game: 1, 2 or 3 \n\n");
	centerText("1. Astronomy Quiz: \n\n");
	centerText("2. Planet Akinator: \n\n");
	centerText("3. Cosmic Trivia:  \n\n");
	centerText("4. Guess The Word: \n\n");

	string choice;
	bool timetochoose = true;

	while (timetochoose) {
		getline(cin, choice, '\n');
		
		if (choice == "1" || choice == "Astronomy Quiz") {
			playGame1();
			timetochoose = false;
		}
		else if (choice == "2" || choice == "Planet Akinator") {
			playGame2();
			timetochoose = false;
		}
		else if (choice == "3" || choice == "Cosmic Trivia") {
			playGame3();
			timetochoose = false;
		}
		else if (choice == "4" || choice == "Guess The Word") {
			playGame4();
			timetochoose = false;
		}
		else if (choice == "0" or choice == "Exit" or choice == "No" or choice == "Quit" or choice == "Leave") timetochoose = false;
		else if (choice == "Help" or choice == "Keywords") Help("Menu");
		else centerText("There is no such choice! Please enter a number between 1 and 4 or the name of the game. \n\n");
	} 
}