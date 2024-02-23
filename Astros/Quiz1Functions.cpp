#include "Quiz1Functions.h"
#include "QuestionsGame1.h"
#include "GlobalFunctions.h"
#include "Quiz1Functions.h"
#include "QuestionsGame1.h"
#include "GlobalFunctions.h"
#include <iostream>
#include <string>
#include <cstdlib>  
#include <ctime>  

using namespace std;

void PrintGame1Header()
{
    centerText("ASTRONOMY QUIZ\n\n");
    centerText("Press Any Button To Continue\n");
    cin.get();
    clear();
    PrintLogo();
    PrintGame1Rules();
}

void PrintGame1Rules()
{
    centerText("Tova sa pravilata na igrata: \n");
}

int fiftyFifty(int rightAnswer) {
    int otherWrong;
    do {
        otherWrong = rand() % 4;
    } while (otherWrong == rightAnswer);

    return otherWrong;
}

void printFiftyFifty(int rightAnswer) {
    int otherWrong = fiftyFifty(rightAnswer) + 1;
    rightAnswer++;
    int numbers[2];
    if (rightAnswer < otherWrong) {
        numbers[0] = rightAnswer;
        numbers[1] = otherWrong;
    }
    else {
        numbers[0] = otherWrong;
        numbers[1] = rightAnswer;
    }

    cout << "The right answer is either " << numbers[0] << " or " << numbers[1] << ".\n";
}

int makeQuiz()
{
    int score = 0;
    int jokersUsed = 0;
    srand(time(0));
    for (int i = 0; i < NUM_QUESTIONS; i++) {
        cout << "Question " << (i + 1) << ": " << questions[i] << endl;
        for (int j = 0; j < 4; j++) {
            cout << j + 1 << ". " << answers[i][j] << endl;
        }
        int answer;
        char answerChar;
        if (jokersUsed >= 3){
            cout << "Your answer (1-4): ";
        }
        else {
            cout << "You have used " << jokersUsed << " of 3 jokers - " <<
                "enter ? for joker" << endl;
            cout << "Your answer (1-4): " << endl;
        }
        cin >> answerChar;
        if (answerChar == '?' && jokersUsed < 3) {
            printFiftyFifty(rightAnswers[i]);
            jokersUsed++;
            cin >> answerChar;
        }
        answer = answerChar - '0';
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