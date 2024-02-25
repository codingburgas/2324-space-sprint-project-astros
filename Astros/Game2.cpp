#include <iostream>
#include "Game2.h"
#include "GlobalFunctions.h"
#include "Menu.h"
#include <windows.h>
#include <string>
#include <limits>
#undef max
using namespace std;

void playGame2()
{
	//innerPlanets, outerPlanets, withRings, withoutRings, withMoons, withoutMoons
	string starterQuestions[2] = { "Are you thinking of an inner planet?", "Does your planet have a significant atmosphere that can sustain a weather system?" }, answer;

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
	n = randomNumberGenerator(0, 1);
	cout << starterQuestions[n] << endl;
	getline(cin, answer);
	clear();
	while (answer != "Yes" && answer != "No") {
		cout << "Invalid Answer! Please type either \"Yes\" or \"No\"." << endl;
		cout << starterQuestions[n] << endl;
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

	else {
		if (answer == "Yes") {
			int Venus = 0, Earth = 0, Mars = 0, Jupiter = 0;
			questionTwoSustainWeatherSystem(Earth, Jupiter, Venus, Mars);
			cout << Venus << Earth << Mars << Jupiter;
		}
		else {
			int Mercury = 0, Saturn = 0, Uranus = 0, Neptune = 0;
			questionTwoSustainWeatherSystem(Mercury, Saturn, Uranus, Neptune);
			cout << Mercury << Saturn << Uranus << Neptune;
		}
	}
	cin.get();
		ShowMenu();
}

