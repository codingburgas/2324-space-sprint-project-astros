#include <iostream>
#include <windows.h>	
#include <string>
#include "Game2.h"
#include <random>
#include "GlobalFunctions.h"
using namespace std;
int rng;
string secondRoundSustainWeatherSystem[2] = { "Does your planet have a global magnetic field?", "Does the planet have an extremely high atmospheric pressure at its surface or lack a solid surface?" }, secondRoundInnerOuterPlanets[2] = {"Does your planet have days, similar/identical to Earth's by lenght?","Has your planet been visited by a spacecraft for a flyby, orbit, or landing?"};

int randomNumberGenerator(int from, int to) {
    random_device rd;
    mt19937 eng(rd());
    uniform_int_distribution<> distr(from, to);
    return distr(eng);
}

void questionTwoSustainWeatherSystem(int& a, int& b, int& c, int& d) {
    rng = randomNumberGenerator(0, 1);
    centerText(secondRoundSustainWeatherSystem[rng]);
    cout << endl;
    string answer;
    getline(cin, answer);
    while (answer != "Yes" and answer != "No") {
        clear();
        centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
        centerText(secondRoundSustainWeatherSystem[rng]);
        cout << endl;
        getline(cin, answer);
    }
    switch (rng) {
    case 0:
        if (answer == "Yes") {
            a++;
            b++;
        }
        else {
            c++;
            d++;
        }
        break;
    default:
        if (answer == "Yes") {
            b++;
            c++;
        }
        else {
            a++;
            d++;
        }
        break;
    }
}

void questionTwoInnerOuterPlanets(int& a, int& b, int& c, int& d) {
    rng = randomNumberGenerator(0, 1);
    centerText(secondRoundInnerOuterPlanets[rng]);
    cout << endl;
    string answer;
    getline(cin, answer);
    while (answer != "Yes" and answer != "No") {
        clear();
        centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
        centerText(secondRoundInnerOuterPlanets[rng]);
        cout << endl;
        getline(cin, answer);
    }
    switch (rng) {
    case 0:
        if (answer == "Yes") {
            a++;
            b++;
        }
        else {
            c++;
            d++;
        }
        break;
    default:
        if (answer == "Yes") {
            b++;
            c++;
        }
        else {
            a++;
            d++;
        }
        break;
    }
}

