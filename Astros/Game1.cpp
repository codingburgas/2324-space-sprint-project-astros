#include <iostream>
#include "Game1.h"
#include "QuestionsGame1.h"
#include "Quiz1Functions.h"
#include "GlobalFunctions.h"
using namespace std;

void playGame1() {
    PrintGame1Header();
    int score = makeQuiz();
    cout << "You scored " << score << " out of " << NUM_QUESTIONS << "." << endl;
}