#include <iostream>
#include "Menu.h"
#include "AstronomyQuiz.h"
#include "QuestionsAstronomyQuiz.h"
#include "AstronomyQuizFunctions.h"
#include "GlobalFunctions.h"
#include <string>
using namespace std;

void playGame1() {
    PrintGame1Header();
    PrintGame1Rules();
    int score = makeQuiz();
    centerText("You scored " + to_string(score) + " out of " + to_string(NUM_QUESTIONS) + ".\n");
    cin.get();
    ShowMenu();
}