#include <iostream>
#include "Menu.h"
#include "Game1.h"
#include "QuestionsGame1.h"
#include "Quiz1Functions.h"
#include "GlobalFunctions.h"
#include <string>
using namespace std;

void playGame1() {
    PrintGame1Header();
    int score = makeQuiz();
    centerText("You scored " + to_string(score) + " out of " + to_string(NUM_QUESTIONS) + ".\n");
    cin.get();
    ShowMenu();
}