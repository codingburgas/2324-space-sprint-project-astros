#include <iostream>
#include <windows.h>	
#include <string>
#include "PlanetaryAkinator.h"
#include <random>
#include <cstdlib>
#include "GlobalFunctions.h"
#include "Menu.h"
using namespace std;
int rng;
string secondRoundSustainWeatherSystem[2] = { "Does your planet have a global magnetic field?", "Does the planet have an extremely high atmospheric pressure at its surface or lack a solid surface?" }, secondRoundInnerOuterPlanets[2] = { "Does your planet have days, similar/identical to Earth's by lenght?","Has your planet been visited by a spacecraft for a flyby, orbit, or landing?" }, planets[8] = { "Mercury", "Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune" },
planetSpecificFacts[8][2] = { {"Is your planet the smallest in the Solar System?", "Does your planet have the most eccentric orbit of all the planets in the solar system?"}, //Mercury
    { "Does your planet have the hottest surface of all the planets in the solar system?", "Is your planet often reffered to as the Earth's \"sister planet\" due to it's similiar size, mass, and proximity to the Sun?" }, //Venus
     { "Are you thinking of the only known planet to support life?", "Does the Moon orbit the planet you're thinking of?" }, //Earth
    { "Does your planet have the tallest volcano in the solar system?", "Does your planet have the largest canyon in the Solar System?" }, //Mars
     { "Are you thinking of the largest planet in the Solar System?", "Does your planet have the Great Red Spot- a gigantic storm larger than Earth that has been raging for at least 400 years?" }, //Jupiter
     { "Does your planet have the most extensive ring system of any planet in the Solar system, made up of ice and rock particles?", "Are you thinking of the least dense planet in the Solar System?" }, //Saturn
     { "Are you thinking of the only planet in the Solar System that rotates on its side?", "Does your planet have the coldest planetary atmosphere in the Solar System?" }, //Uranus
     { "Does the planet you're thinking of have the strongest winds in the Solar System?", "Are you thinking of the farthest planet from the sun?" } }; //Neptune

int randomNumberGenerator(int from, int to) { //function picks out a number between argument 1 and argument 2
    random_device rd;
    mt19937 eng(rd());
    uniform_int_distribution<> distr(from, to);
    return distr(eng);
}

void questionTwoSustainWeatherSystem(int& a, int& b, int& c, int& d) { //2nd question
    rng = randomNumberGenerator(0, 1);
    centerText(secondRoundSustainWeatherSystem[rng]);
    string answer;
    cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
    getline(cin, answer);
    clear();
    PrintLogo();
    inputCheckRegular(answer,secondRoundSustainWeatherSystem[rng]);
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
    cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
    string answer;
    getline(cin, answer);
    clear();
    PrintLogo();
    inputCheckRegular(answer, secondRoundInnerOuterPlanets[rng]);
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

void inputCheckRegular(string& input, string text) {
    
    if (input == "leave" or input == "Leave") leaveGame();
    while (input != "Yes" and input != "No") {
        centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
        centerText(text + "\n");
        cout << string((getConsoleWidth() / 2) - 5, ' ');
        getline(cin, input);
        if (input == "leave" || input == "Leave") leaveGame();
        clear();
        PrintLogo();
    }
}

void inputCheckQuestions(string& input, string questions[], int rng1){
    if (input == "leave" or input=="Leave") leaveGame();
    while (input != "Yes" and input != "No"){
        centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
        centerText(questions[rng1]);
        cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
        getline(cin, input);
        if (input == "leave" || input == "Leave") leaveGame();
        clear();
        PrintLogo();
    }
}

void inputCheckFinalQuestions(string& input, int rng1, int index[], int i) {
    if (input == "leave" || input == "Leave") leaveGame();
    while (input != "Yes" && input != "No") {
        centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
        centerText(planetSpecificFacts[index[i]][rng1]);
        cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
        getline(cin, input);
        if (input == "leave" || input == "Leave") leaveGame();
        clear();
        PrintLogo();
    }
}

void inputCheckFinalGuess(string& input, string planets[], int index[], int i) {
    if (input == "leave" or input=="Leave") leaveGame();
        while(input!="Yes" && input!="No"){
        centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
        centerText("Is the planet you're thinking of "); cout << planets[index[i]] << "?\n";
        cout << string((getConsoleWidth() / 2) - 5, ' ');
        getline(cin, input);
        if (input == "leave" || input == "Leave") leaveGame();
        clear();
        PrintLogo();
    }
}

void finalQuestions(string& answer, int index[], int arr[]) {
    for (int i = 0; i < 4; i++) {
        if (arr[i] != 0) { //checks which planets were eliminated with question two
            rng = randomNumberGenerator(0, 1); //maintains the randomly-generated value across the loops
            centerText(planetSpecificFacts[index[i]][rng]);
            cout << endl << string((getConsoleWidth() / 2) - 5, ' '); //makes cin appear in the middle of the screen
            getline(cin, answer);
            clear();
            PrintLogo();
            inputCheckFinalQuestions(answer, rng, index, i);
            if (answer == "Yes") {
                centerText("Is the planet you're thinking of "); cout << planets[index[i]] << "?\n"; //if the user answers "Yes" in any of the facts, applying to a specific planet, the program eliminates the rest of the planets and asks the user if the planet with index i is the one they're thinking about
                cout << string((getConsoleWidth() / 2) - 5, ' ');
                getline(cin, answer);
                clear();
                PrintLogo();
                inputCheckFinalGuess(answer, planets, index, i);
                if (answer == "Yes")
                {
                    playAgain("Haha! I knew it! Do you dare challenge me again?");

                }

                else {
                    playAgain("Ugh! I've been defeated! Would you like to give me another chance?");
                }


            }
        }
    }
}

void playAgain(string text) {
    string answer;
    clear();
    PrintLogo();
    centerText(text + "\n");
    cout << string((getConsoleWidth() / 2) - 5, ' ');
    getline(cin, answer);
    clear();
    PrintLogo();
    inputCheckRegular(answer, text);
    if (answer == "Yes") {
        playPlanetaryAkinator();
    }
    if (answer == "No") {
        clear();
        leaveGame();
    }
}

