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
		for (int i = 0; i < 5; i++) { // Updates the menu in real time, since the selected option changes constantly, until it is confirmed to be the user's next move
			if (i == SelectedGame) {
				ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				PrintMenuOption(MenuOptions[i]);
				ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			}
			else {
				PrintMenuOption(MenuOptions[i]);
			}
		} 

		char key = _getch(); // Select Games. With the help of the getch() function of the <conio.h> library, the programme can register non-symbol inputs such as the arrow keys and the enter key
		if (key == 72) { // Up arrow key
			if (SelectedGame - 1 < 0) SelectedGame = 4;
			else SelectedGame -= 1;
		}
		else if (key == 80) { // Down arrow key
			if (SelectedGame + 1 > 4) SelectedGame = 0;
			else SelectedGame += 1;
		}
		else if (key == 13) { // Enter key - confirms the selected game
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
			else if (SelectedGame == 4) timetochoose = false; // The programme stops
		} 
	} 
}

void PrintMenuOption(string Option) { // This function print out the menu options separately
	cout << string((getConsoleWidth() - 38) / 2, ' ') << char(201);
	for (int i = 0; i < 36; i++) {
		cout << char(205);
	}
	cout << char(187) << endl; // centerText() is not used here as it does not register symbols such as char(186)
	cout << string((getConsoleWidth() - 38) / 2, ' ') << char(186) << string(36, ' ') << char(186) << endl;
	cout << string((getConsoleWidth() - 38) / 2, ' ') << char(186) << Option << char(186) << endl;
	cout << string((getConsoleWidth() - 38) / 2, ' ') << char(186) << string(36, ' ') << char(186) << endl;
	cout << string((getConsoleWidth() - 38) / 2, ' ') << char(200);
	for (int i = 0; i < 36; i++) {
		cout << char(205);
	}
	cout << char(188) << "\n\n\n";
}