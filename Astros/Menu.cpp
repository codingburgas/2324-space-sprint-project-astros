#include <iostream>
#include <string>
#include <Windows.h>
#include <conio.h>
#include "Menu.h"
#include "GlobalFunctions.h"
#include "Game1.h"
#include "Game2.h"
#include "Game3.h"
#include "Game4.h"
using namespace std;
bool firsttimerun = true;
void ShowMenu()
{
	if (firsttimerun) FullScreen();
	firsttimerun = false;
	clear();
	PrintLogo();

	string MenuOptions[5] = {
		"           Astronomy Quiz           ",
		"         Planetary Akinator         ",
		"           Cosmic Trivia            ",
		"           Guess The Word           ",
		"                Exit                "
	};

	bool timetochoose = true;
	int SelectedGame = 0;
	while (timetochoose) {		
		clear();
		PrintLogo();
		for (int i = 0; i < 5; i++) {
			if (i == SelectedGame) {
				ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				PrintMenuOption(MenuOptions[i]);
				ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			}
			else {
				PrintMenuOption(MenuOptions[i]);
			}
		}

		char key = _getch();
		if (key == 72) {
			if (SelectedGame - 1 < 0) SelectedGame = 4;
			else SelectedGame -= 1;
		}
		else if (key == 80) {
			if (SelectedGame + 1 > 4) SelectedGame = 0;
			else SelectedGame += 1;
		}
		else if (key == 13) {
			if (SelectedGame == 0) {
				playGame1();
				timetochoose = false;
			}
			else if (SelectedGame == 1) {
				playGame2();
				timetochoose = false;
			}
			else if (SelectedGame == 2) {
				playGame3();
				timetochoose = false;
			}
			else if (SelectedGame == 3) {
				playGame4();
				timetochoose = false;
			}
			else if (SelectedGame == 4) timetochoose = false;
		}
	} 
}

void PrintMenuOption(string Option) {
	int Padding = (getConsoleWidth() - 38) / 2;
	cout << string(Padding, ' ') << char(201);
	for (int i = 0; i < 36; i++) {
		cout << char(205);
	}
	cout << char(187) << endl;
	cout << string(Padding, ' ') << char(186) << string(36, ' ') << char(186) << endl;
	cout << string(Padding, ' ') << char(186) << Option << char(186) << endl;
	cout << string(Padding, ' ') << char(186) << string(36, ' ') << char(186) << endl;
	cout << string(Padding, ' ') << char(200);
	for (int i = 0; i < 36; i++) {
		cout << char(205);
	}
	cout << char(188) << "\n\n\n";
}