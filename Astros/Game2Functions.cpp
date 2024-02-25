#include <iostream>
#include <windows.h>	
#include <string>
#include "Game2.h"
#include <random>
#include "GlobalFunctions.h"
using namespace std;
int rng;
string secondRoundSustainWeatherSystem[2] = { "Does your planet have a global magnetic field?", "Does the planet have an extremely high atmospheric pressure at its surface or lack a solid surface?" };

int randomNumberGenerator(int from, int to) {
    random_device rd;
    mt19937 eng(rd());
    uniform_int_distribution<> distr(from, to);
    return distr(eng);
}

void questionTwoSustainWeatherSystem(int& a, int& b, int& c, int& d) {
    rng = randomNumberGenerator(0, 1);
    cout << secondRoundSustainWeatherSystem[rng];
    string answer;
    getline(cin, answer);
    while (answer != "Yes" and answer != "No") {
        clear();
        cout << "Invalid Answer! Please type either \"Yes\" or \"No\"." << endl;
        cout << secondRoundSustainWeatherSystem[rng] << endl;
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