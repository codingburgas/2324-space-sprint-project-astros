#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include "Menu.h"
#include "GlobalFunctions.h"
#include "AstronomyQuiz.h"
#include "PlanetaryAkinator.h"
#include "CosmicTrivia.h"
#include "GuessTheWord.h"
using namespace std;
bool firsttimerun = true; // Global variable for FullScreen.
void ShowMenu()
{
	if (firsttimerun) FullScreen();  //Add Fullscreen
	firsttimerun = false;
	clear(); // Clear Screen
	PrintLogo(); // Print Logo

	string MenuOptions[5] = {
		"           Astronomy Quiz           ",
		"         Planetary Akinator         ",
		"           Cosmic Trivia            ",
		"           Guess The Word           ",
		"                Exit                "
	}; // The Mini Games

	bool timetochoose = true;
	int SelectedGame = 0;
	while (timetochoose) {		
		clear(); // Clear Screen
		PrintLogo(); // Print Logo
		for (int i = 0; i < 5; i++) { // Updates the menu in real time.
			if (i == SelectedGame) {
				ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				PrintMenuOption(MenuOptions[i]);
				ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			}
			else {
				PrintMenuOption(MenuOptions[i]);
			}
		} 

		char key = _getch(); // Select Games
		if (key == 72) {
			if (SelectedGame - 1 < 0) SelectedGame = 4;
			else SelectedGame -= 1;
		}
		else if (key == 80) {
			if (SelectedGame + 1 > 4) SelectedGame = 0;
			else SelectedGame += 1;
		}
		else if (key == 13) {
			if (SelectedGame == 0) { // Play Game 1
				playGame1();
				timetochoose = false;
			}
			else if (SelectedGame == 1) { // Play Game 2
				playPlanetaryAkinator();
				timetochoose = false;
			}
			else if (SelectedGame == 2) { // Play Game 3
				playCosmicTrivia();
				timetochoose = false;
			}
			else if (SelectedGame == 3) { // Play Game 4
				playGuessTheWord();
				timetochoose = false;
			}
			else if (SelectedGame == 4) timetochoose = false;
		} 
	} 
}

void PrintMenuOption(string Option) { // This function print out the menu options separately
	cout << string((getConsoleWidth() - 38) / 2, ' ') << char(201);
	for (int i = 0; i < 36; i++) {
		cout << char(205);
	}
	cout << char(187) << endl;
	cout << string((getConsoleWidth() - 38) / 2, ' ') << char(186) << string(36, ' ') << char(186) << endl;
	cout << string((getConsoleWidth() - 38) / 2, ' ') << char(186) << Option << char(186) << endl;
	cout << string((getConsoleWidth() - 38) / 2, ' ') << char(186) << string(36, ' ') << char(186) << endl;
	cout << string((getConsoleWidth() - 38) / 2, ' ') << char(200);
	for (int i = 0; i < 36; i++) {
		cout << char(205);
	}
	cout << char(188) << "\n\n\n";
}