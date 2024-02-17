#include "Quiz1Functions.h"
#include "QuestionsGame1.h"
#include "GlobalFunctions.h"
#include <iostream>
using namespace std;

void PrintGame1Header()
{
    clear();
    PrintLogo();
    PrintGame1Rules();
}

void PrintGame1Rules()
{
    cout << "Towa sa pravilata na igrata..." << endl;
}

int makeQuiz()
{
    int score = 0;
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        cout << "Question " << (i + 1) << ": " << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << j + 1 << ". " << answers[i][j] << endl;
        }
        int answer;
        cout << "Your answer (1-4): ";
        cin >> answer;
        if (answer - 1 == rightAnswers[i]) {
            cout << "Correct!" << endl;
            score++;
        }
        else {
            cout << "Wrong. The correct answer is " << rightAnswers[i] + 1 << "." << endl;
        }
        system("pause");
        PrintGame1Header();
    }

    return score;
}
