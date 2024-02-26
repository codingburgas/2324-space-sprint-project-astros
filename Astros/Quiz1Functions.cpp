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
#include <conio.h>
#include <Windows.h>

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
    centerText("Choose the answer you think is correct for each question. You are entitled to 3 jokers - 50:50. If you need them, enter ? \n");
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

    centerText("The right answer is either " + to_string(numbers[0]) + " or " + to_string(numbers[1]) + ".\n");
}
int makeQuiz()
{
    int score = 0;
    int jokersUsed = 0;

    bool jokerMode = false;
    int otherWrong = -1;
    srand(time(0));

    int i = 0;
    int max = 1;
    int SelectedOption = 0;
    HANDLE Output = GetStdHandle(STD_OUTPUT_HANDLE);

    while (i < max && max < 11) {
        bool timeToAnswer = true;
        centerText("Question " + to_string(i + 1) + ": " + questions[i] + "\n\n");
        while (timeToAnswer) {
            for (int j = 0; j < 5; j++) {
                if (j == 4) {
                    if (SelectedOption == j) {
                        SetConsoleTextAttribute(Output, 3);
                        if (jokersUsed < 3) {
                            centerText("Use joker " + to_string(jokersUsed) + "\n");
                        }
                        else {
                            centerText("No mode jokers!\n");
                        }
                        SetConsoleTextAttribute(Output, 7);
                    }
                    else {
                        if (jokersUsed < 3) {
                            centerText("Use joker " + to_string(jokersUsed) + "\n");
                        }
                        else {
                            centerText("No mode jokers!\n");
                        }
                    }
                    centerText("Your answer (1-4): \n");
                }
                else {
                    if (SelectedOption == j) {
                        SetConsoleTextAttribute(Output, 3);
                        if (jokerMode && j != otherWrong && j != rightAnswers[i]) {
                            centerText("Wrong answer!!!\n\n");
                        }
                        else {
                            centerText(to_string(j + 1) + ". " + answers[i][j] + "\n\n");
                        }
                        
                        SetConsoleTextAttribute(Output, 7);
                    }
                    else {
                        if (jokerMode && j != otherWrong && j != rightAnswers[i]) {
                            centerText("Wrong answer!!!\n\n");
                        }
                        else {
                            centerText(to_string(j + 1) + ". " + answers[i][j] + "\n\n");
                        }
                    }
                }
            }
            char key = _getch();
            if (key == 72) {
                if (SelectedOption - 1 < 0) SelectedOption = 4;
                else SelectedOption -= 1;
                clear();
                PrintLogo();
                centerText("Question " + to_string(i + 1) + ": " + questions[i] + "\n\n");
            }
            else if (key == 80) {
                if (SelectedOption + 1 > 5) SelectedOption = 0;
                else SelectedOption += 1;
                clear();
                PrintLogo();
                centerText("Question " + to_string(i + 1) + ": " + questions[i] + "\n\n");
            }
            else if (key == 13) {
                if (SelectedOption == 4 && jokersUsed < 3) {
                    jokersUsed++;
                    jokerMode = true;
                    otherWrong = fiftyFifty(rightAnswers[i]);
                    clear();
                    PrintLogo();
                    centerText("Question " + to_string(i + 1) + ": " + questions[i] + "\n\n");

                }
                else if (SelectedOption == 4) {
                    clear();
                    PrintLogo();
                    centerText("Question " + to_string(i + 1) + ": " + questions[i] + "\n\n");
                }
                else if (SelectedOption == rightAnswers[i]) {
                    centerText("Correct! \n");
                    jokerMode = false;
                    score++;
                }
                else {
                    jokerMode = false;
                    centerText("Wrong. The correct answer is " + to_string(rightAnswers[i] + 1) + ".\n");
                }
                if (SelectedOption != 4) {
                    i++;
                    max++;
                    system("pause");
                    PrintGame1Header();
                    timeToAnswer = false;
                }
            }
        }
    }
    return score;
}