#include <iostream>
#include <string>
#include "Menu.h"
#include "Generalfacts.h"
#include "GlobalFunctions.h"

using namespace std;

void PrintIntro() {
	ClearScreen();
	cout << "Welcome to the Astros cosmic trivia machine!" << endl;
	cout << "Here, you will be greeted with facts about the celestial bodies of our solar system." << endl;
	cout << endl;
	cout << "Are you ready to learn?";
}

void CheckAnswer() {
	ClearScreen();
	cout << "Cooll.";
}

void YourAnswer() {
	string answer;
	getline(cin, answer);
	if (answer == "no") {
		ShowMenu();
	}
	else if (answer == "yes") {
		CheckAnswer();
	}
	else {
		cout << answer << "? Could you please give us a valid answer?" << endl;
		YourAnswer();
	}
}