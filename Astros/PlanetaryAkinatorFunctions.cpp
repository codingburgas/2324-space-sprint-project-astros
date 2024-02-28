#include <iostream>
#include <windows.h>	
#include <string>
#include "PlanetaryAkinator.h"
#include <random>
#include <cstdlib>
#include "GlobalFunctions.h"
#include "Menu.h"
#include <limits>
#undef max
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

void questionTwoSustainWeatherSystem(int& a, int& b, int& c, int& d) { //first variation of question 2
    rng = randomNumberGenerator(0, 1); //picks out a random number between 0 and 1. this is essential for randomizing the questions.
    centerText(secondRoundSustainWeatherSystem[rng]); //picks out a random question based on the number picked
    string answer; //declares the variable which is gonna hold the value of the user's input
    cout << endl << string((getConsoleWidth() / 2) - 5, ' '); //makes the user input appear in the middle of the screen
    getline(cin, answer);
    clear();
    PrintLogo();
    inputCheckRegular(answer,secondRoundSustainWeatherSystem[rng]); //checks if the user is in need of help, wants to leave the game, or has made a typo
    switch (rng) { //adds values to the planets based on the random question picked and the answer given
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

void questionTwoInnerOuterPlanets(int& a, int& b, int& c, int& d) { //second variation of question 2
    rng = randomNumberGenerator(0, 1); //picks out a random number between 0 and 1. this is essential for randomizing the questions.
    centerText(secondRoundInnerOuterPlanets[rng]); //picks out a random question based on the number picked
    cout << endl << string((getConsoleWidth() / 2) - 5, ' '); //makes the user input appear in the middle of the screen
    string answer; //declares the variable which is gonna hold the value of the user's input
    getline(cin, answer);
    clear();
    PrintLogo();
    inputCheckRegular(answer, secondRoundInnerOuterPlanets[rng]); //checks if the user is in need of help, wants to leave the game, or has made a typo
    switch (rng) { //adds values to the planets based on the random question picked and the answer given
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
    
    if (input == "leave" or input == "Leave") leaveGame(); //the input gets entered by the user before this function is called and this checked if that's the user asking to exit the game
    while (input != "Yes" and input != "No" ) { //if the text is anything else than yes and no:
        if (input == "help" or input == "Help") { //this checks if the user is asking for help or actually made a typo writing out yes or no
            clear(); //screen gets cleared from any previous visual clutter
            PrintLogo(); //logo gets printed
            Help("PlanetaryAkinator"); //help function gets called
            centerText(text + "\n"); //prints out the question
            cout << string((getConsoleWidth() / 2) - 5, ' '); //makes the cin appear in the middle of the screen
            getline(cin, input); //the user can either type yes or no and proceed to the next question or ask for help again and have the menu show up a 2nd time (or 3rd and so on)
        }
        else { //if the user made a typo they gets notified and are given the chance to re-enter whatever they wanted to type
            centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
            centerText(text + "\n");
            cout << string((getConsoleWidth() / 2) - 5, ' ');
            getline(cin, input);
        }
        if (input == "leave" || input == "Leave") leaveGame(); //checks if the user wants to leave the game AFTER the help function is called/a typo is made
        
        clear();
        PrintLogo();
    }
}

void inputCheckQuestions(string& input, string questions[], int rng1){
    if (input == "leave" or input == "Leave") leaveGame(); //the input gets entered by the user before this function is called and this checked if that's the user asking to exit the game
    while (input != "Yes" and input != "No") { //if the text is anything else than yes and no:
        if (input == "help" or input == "Help") { //this checks if the user is asking for help or actually made a typo writing out yes or no
            clear(); //screen gets cleared from any previous visual clutter
            PrintLogo(); //logo gets printed
            Help("PlanetaryAkinator"); //help function gets called
            centerText(questions[rng1] + "\n"); //prints out the question
            cout << string((getConsoleWidth() / 2) - 5, ' '); //makes the cin appear in the middle of the screen
            getline(cin, input); //the user can either type yes or no and proceed to the next question or ask for help again and have the menu show up a 2nd time (or 3rd and so on)
        }
        else { //if the user made a typo they gets notified and are given the chance to re-enter whatever they wanted to type
            centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
            centerText(questions[rng1] + "\n");
            cout << string((getConsoleWidth() / 2) - 5, ' ');
            getline(cin, input);
        }
        if (input == "leave" || input == "Leave") leaveGame(); //checks if the user wants to leave the game AFTER the help function is called/a typo is made

        clear();
        PrintLogo();
    }
}

void inputCheckFinalQuestions(string& input, int rng1, int index[], int i) {
    if (input == "leave" or input == "Leave") leaveGame(); //the input gets entered by the user before this function is called and this checked if that's the user asking to exit the game
    while (input != "Yes" and input != "No") { //if the text is anything else than yes and no:
        if (input == "help" or input == "Help") { //this checks if the user is asking for help or actually made a typo writing out yes or no
            clear(); //screen gets cleared from any previous visual clutter
            PrintLogo(); //logo gets printed
            Help("PlanetaryAkinator"); //help function gets called
            centerText(planetSpecificFacts[index[i]][rng1] + "\n"); //prints out the question
            cout << string((getConsoleWidth() / 2) - 5, ' '); //makes the cin appear in the middle of the screen
            getline(cin, input); //the user can either type yes or no and proceed to the next question or ask for help again and have the menu show up a 2nd time (or 3rd and so on)
        }
        else { //if the user made a typo they gets notified and are given the chance to re-enter whatever they wanted to type
            centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
            centerText(planetSpecificFacts[index[i]][rng1] + "\n");
            cout << string((getConsoleWidth() / 2) - 5, ' ');
            getline(cin, input);
        }
        if (input == "leave" || input == "Leave") leaveGame(); //checks if the user wants to leave the game AFTER the help function is called/a typo is made

        clear();
        PrintLogo();
    }
}

void inputCheckFinalGuess(string& input, string planets[], int index[], int i) {
    if (input == "leave" or input == "Leave") leaveGame(); //the input gets entered by the user before this function is called and this checked if that's the user asking to exit the game
    while (input != "Yes" and input != "No") { //if the text is anything else than yes and no:
        if (input == "help" or input == "Help") { //this checks if the user is asking for help or actually made a typo writing out yes or no
            clear(); //screen gets cleared from any previous visual clutter
            PrintLogo(); //logo gets printed
            Help("PlanetaryAkinator"); //help function gets called
            centerText("Is the planet you're thinking of " + planets[index[i]] + "?" + "\n"); //prints out the question
            cout << string((getConsoleWidth() / 2) - 5, ' '); //makes the cin appear in the middle of the screen
            getline(cin, input); //the user can either type yes or no and proceed to the next question or ask for help again and have the menu show up a 2nd time (or 3rd and so on)
        }
        else { //if the user made a typo they gets notified and are given the chance to re-enter whatever they wanted to type
            centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
            centerText("Is the planet you're thinking of " + planets[index[i]] + "?" + "\n");
            cout << string((getConsoleWidth() / 2) - 5, ' ');
            getline(cin, input);
        }
        if (input == "leave" || input == "Leave") leaveGame(); //checks if the user wants to leave the game AFTER the help function is called/a typo is made

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
                    playAgain("Haha! I knew it! Do you dare challenge me again?"); //function which asks the player if they want to play again

                }

                else {
                    playAgain("Ugh! I've been defeated! Would you like to give me another chance?"); //function which asks the player if they want to play again
                }


            }
        }
    }
}

void playAgain(string text) {
    string answer;
    clear();
    PrintLogo();
    centerText(text + "\n"); //prints out the text entered in the function
    cout << string((getConsoleWidth() / 2) - 5, ' '); //displays user input in the middle of the screen
    getline(cin, answer);
    clear();
    PrintLogo();
    inputCheckRegular(answer, text); //checks if the user is in need of help, wants to exit the game, or has made a typo
    if (answer == "Yes") { //if the user wants to play again:
        playPlanetaryAkinator();
    }
    if (answer == "No") { //if the user doesn't want to play again:
        clear();
        leaveGame(); //function which sends you back to the main menu and stops the game
    }
}

