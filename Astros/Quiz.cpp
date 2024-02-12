#include <iostream>
#include "Questions.h"
#include "QuizFunctions.h"
using namespace std;


int main() {
    int score = makeQuiz();
    cout << "You scored " << score << " out of " << NUM_QUESTIONS << "." << endl;
    return 0;
}