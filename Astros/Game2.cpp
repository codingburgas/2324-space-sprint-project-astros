#include <iostream>
#include "Menu.h"
#include "Game2.h"
#include "GlobalFunctions.h"
#include <windows.h>
#include <string>
#include <limits>
#undef max
using namespace std;

void playGame2()
{
	//innerPlanets, outerPlanets, withRings, withoutRings, withMoons, withoutMoons
	string generalFacts[3] = { "Are you thinking of an inner planet?", "Does your planet have any moons?", "Does your planet have any rings?" }, answer;

	centerText("PLANET AKINATOR\n");
	centerText("Press Any Button To Continue");
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //prevents it from cin-ing 2 things at once and breaking the program
	clear();

	centerText("PSA: Planet Akinator only takes planets in the Solar System into account. Yes or No answers only.\n");
	centerText("Press Any Button To Begin");
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //prevents it from cin-ing 2 things at once and breaking the program
	clear();

	int n;
	n = randomNumberGenerator(0, 2);
	cout << generalFacts[n] << endl;
	getline(cin, answer);
	clear();
	while (answer != "Yes" && answer != "No") {
		cout << "Invalid Answer! Please type either \"Yes\" or \"No\"." << endl;
		cout << generalFacts[n] << endl;
		getline(cin, answer);
		clear();
	}

	//Round 1
	if (n == 0) {
		if (answer == "Yes") {
			int Mercury = 0, Venus = 0, Earth = 0, Mars = 0;
		}
		else {
			int	Jupiter = 0, Saturn = 0, Uranus = 0, Neptune = 0;
		}
	}
	else if (n == 1) {
		if (answer == "Yes") {
			int Earth = 0, Mars = 0, Jupiter = 0, Saturn = 0, Uranus = 0, Neptune = 0;
		}
		else {
			int Mercury = 0, Venus = 0;
		}
	}
	else {
		if (answer == "Yes") {
			int Jupiter = 0, Saturn = 0, Uranus = 0, Neptune = 0;
		}
		else {
			int Mercury = 0, Venus = 0, Earth = 0, Mars = 0;
		}
	}
	cin.get();
	ShowMenu();
}

