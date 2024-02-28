#include "QuestionsAstronomyQuiz.h"
#include "AstronomyQuizFunctions.h"
#include "GlobalFunctions.h"
#include <iostream>
#include <string>
#include <cstdlib>  
#include <ctime>  
#include <conio.h> //it includes inbuilt functions like getch() and clrscr()
#include <Windows.h>

using namespace std;

void PrintGame1Header()
{
    centerText("ASTRONOMY QUIZ\n\n");
    centerText("Press Any Button To Continue\n");
    cin.get();
    clear();
    PrintLogo();
}

void PrintGame1Rules() //Rules
{
    centerText("Choose the answer you think is correct for each question. You are entitled to 3 Hints - 50:50. If you need them, enter ? \n");
}


int fiftyFifty(int rightAnswer) { 
    int otherWrong;
    do {
        otherWrong = rand() % 4; //rand() generate a series of random numbers
    } while (otherWrong == rightAnswer);

    return otherWrong;
}

//Use joker
void printFiftyFifty(int rightAnswer) {
    int otherWrong = fiftyFifty(rightAnswer) + 1;
    rightAnswer++;
    int numbers[2]; //the right one and one wrong answer
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
    
    /*It is preferred to use the result of a call to time(0) as the seed. 
    The time() function returns the number of seconds since 00:00 hours, Jan 1, 
    1970 UTC (i.e. the current unix timestamp). As a result, the value of seed changes with time.*/
    srand(time(0)); 

    int i = 0;
    int max = 1;
    int SelectedOption = 0;

    while (i < max && max < 11) {
        bool timeToAnswer = true;
        centerText("Question " + to_string(i + 1) + ": " + questions[i] + "\n\n"); //The question
        while (timeToAnswer) {
            clear();
            PrintLogo();
            centerText("Question " + to_string(i + 1) + ": " + questions[i] + "\n\n");
            for (int j = 0; j < 5; j++) {
                if (j == 4) {
                    if (SelectedOption == j) {
                        if (jokersUsed < 3) {
                            ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 3);
                            centerText("Use a Hint " + to_string(jokersUsed) + "/3" "\n");
                            ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        }
                        else {
                            ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 13);
                            centerText("No more Hints!\n");
                            ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        }
                    }
                    else {
                        if (jokersUsed < 3) {
                            centerText("Use a Hint " + to_string(jokersUsed) + "/3" + "\n");
                        }
                        else {
                            ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 13);
                            centerText("No more Hints!\n");
                            ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        }
                    }
                    centerText("Your answer (1-4): \n");
                }
                else {
                    if (SelectedOption == j) {
                        if (jokerMode && j != otherWrong && j != rightAnswers[i]) {
                            ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                            centerText("Wrong answer!!!\n\n");
                            ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        }
                        else {
                            ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 3);
                            centerText(to_string(j + 1) + ". " + answers[i][j] + "\n\n");
                            ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        }
                    }
                    else {
                        if (jokerMode && j != otherWrong && j != rightAnswers[i]) {
                            ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 4);
                            centerText("Wrong answer!!!\n\n");
                            ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 7);
                        }
                        else {
                            centerText(to_string(j + 1) + ". " + answers[i][j] + "\n\n");
                        }
                    }
                }
            }
            char key = _getch(); //_getch reads a single character from the keyboard.
            if (key == 72) { // up
                if (SelectedOption - 1 < 0) SelectedOption = 4;
                else SelectedOption -= 1;
            }
            else if (key == 80) { //down
                if (SelectedOption + 1 > 5) SelectedOption = 0;
                else SelectedOption += 1;
            }
            else if (key == 88 or key == 120) {
                return 0;
            }
            else if (key == 13) { //enter
                if (SelectedOption == 4 && jokersUsed < 3) {
                    jokersUsed++;
                    jokerMode = true;
                    otherWrong = fiftyFifty(rightAnswers[i]);

                }
                else if (SelectedOption == 4) {
                }
                else if (SelectedOption == rightAnswers[i]) { 
                    centerText("Correct! \n\n\n");
                    jokerMode = false;
                    score++;
                }
                else {
                    jokerMode = false;
                    centerText("Wrong. The correct answer is " + to_string(rightAnswers[i] + 1) + ".\n\n\n");
                }
                if (SelectedOption != 4) {
                    i++;
                    max++;
                    PrintGame1Header();
                    timeToAnswer = false;
                }
            }
        }
    }
    return score;
}