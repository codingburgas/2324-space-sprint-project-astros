#include <iostream>
#include <Windows.h>
#include <conio.h>
#include <string>
#include "Menu.h"
#include "FactSheet.h"
#include "Generalfacts.h"
#include "GlobalFunctions.h"

using namespace std;

void PrintIntro() {
	centerText("COSMIC TRIVIA\n\n");
	centerText("Press Any Button To Continue\n");
	// I used Zlatin's function of centerText() to add a better look to my "Game"'s Intro function //
	cin.get();
	clear();
}

// This function right here is responsible for marking out similarities (also called coincidences) between the given answer (Line 90) and all possible answers (line 43) //
int AnswerCheck(string compareto, string thiss) {
	int convalue = 0;  // "convalue" or Coincidence Value //
	
	for (int a = 0; a < int(compareto.length()); a++) {
		for (int b = 0; b < int(thiss.length()); b++) {
			if (compareto[a] == thiss[b]) { // Coincidences are basically just matching letters //
				convalue++;
				a++;
			}
		}
	}
	return convalue;
}

// This function "corrects" the answer given to it by giving it a value that the "AnswerInit()" function can read (Lines 92 and 94-106) // 
void AnswerCorrect(string &answ, bool &moon) { // <-- The given answer (Lines 112-115) //
	const int standard = 47; // The number of possible answers is set to a constant standard as it is a subject to change //
	
	int PosCon[standard]; // "PosCon" as in Possible Coincidences //
	string PosAnsw[standard] = {"The Sun", "Mercury", "Venus", "The Earth", "The Moon", "Mars", "Phobos", "Deimos", "Mars Moons", "Asteroid Belt", "Jupiter", "Io", "Europa", "Ganymede", "Callisto", "Jupiter Moons", "Saturn", "Titan", "Rhea", "Iapetus", "Tethys", "Enceladus", "Dione", "Saturn Moons", "Uranus", "Titania", "Oberon", "Umbriel", "Ariel", "Miranda", "Uranus Moons", "Neptune", "Triton", "Proteus", "Nereid", "Neptune Moons", "Pluto", "Nix", "Hydra", "Charon", "Styx", "Kerberos", "Pluto Moons", "Kuiper Belt", "Exit", "None", "Help"};
	// "PosAnsw" as in Possible Answers //
	
	// This loop, with the help of the "AnswerCheck()" function marks out all coincidences between the given answer and all possible answers //
	for (int i = 0; i < standard; i++) {
		PosCon[i] = AnswerCheck(answ, PosAnsw[i]);
	}

	// If there are too many or too little coincidences however, the function cancels them out by setting their value to 0. //
	for (int i = 0; i < standard; i++) {
		if (PosCon[i] > int(PosAnsw[i].length()) or PosCon[i] < (int(PosAnsw[i].length()) - (int(PosAnsw[i].length()) / 2)) ) PosCon[i] = 0;
	}

	string SaveResult; // This variable is used to save the value of the possible answer with the most similarities to the given answer //
	int SaveIndex = 0; // This variable is used to save the index of the possible answer with the most similarities to the given answer //
	int max = 0; // This variable is used to track the highest count of coincidences throughout the PosCon[] array //

	// This loop checks for the highest coincidence count and its index as it is a part of the PosCon[] array //
	for (int i = 0; i < standard; i++) { 
		if (PosCon[i] > max) {
			max = PosCon[i];
			SaveIndex = i;
		}
	}
	
	// This loop eliminates the function of the loop on Lines 88 - 98 beacause if the given answer is moon related, it might cause some coincidences that may end up eliminating the functionality of the function //
	if (SaveIndex == 4 or SaveIndex >= 6 and SaveIndex <= 8 or SaveIndex >= 11 and SaveIndex <= 15 or SaveIndex >= 17 and SaveIndex <= 23 or SaveIndex >= 25 and SaveIndex <= 30 or SaveIndex >= 32 and SaveIndex <= 35 or SaveIndex >= 37 and SaveIndex <= 42) {
		for (int i = 0; i < standard; i++) {
			PosCon[i] = 0;
		}
	}

	if (SaveIndex == 4) SaveIndex = 3;
	else if (SaveIndex >= 6 and SaveIndex <= 8) SaveIndex = 5;
	else if (SaveIndex >= 11 and SaveIndex <= 15) SaveIndex = 10;
	else if (SaveIndex >= 17 and SaveIndex <= 23) SaveIndex = 16;
	else if (SaveIndex >= 25 and SaveIndex <= 30) SaveIndex = 24;
	else if (SaveIndex >= 32 and SaveIndex <= 35) SaveIndex = 31;
	else if (SaveIndex >= 37 and SaveIndex <= 42) SaveIndex = 36;
	else moon = false;

	if (moon) {
		max = int(PosAnsw[SaveIndex].length());
		PosCon[SaveIndex] = max;
	}

	// This loop comes in handy in case there is another possible answer with just as many coincidences as the highest number of coincidences //
	for (int i = 0; i < standard; i++) {
		if (PosCon[i] == max and i != SaveIndex) {
			// The SaveResult function doing its job // 
			SaveResult = answ;
			moon = false;
			break;
		}
		else {
			SaveResult = PosAnsw[SaveIndex];
		}
	}
	answ = SaveResult;
}

// This function entirely relies on functions "AnswerCorrect()" and "AnswerCheck()" //
void AnswerInit() {
	clear();
	PrintLogo();

	bool confirmation = true;
	while (confirmation) {
		cout << endl;
		centerText("Which celestial body would you like to hear about?\n\n");

		string answer;
		bool mooncheck = true;

		cout << endl;
		cout << string((getConsoleWidth() / 2) - 5, ' ');
		getline(cin, answer, '\n');
		cout << endl;

		AnswerCorrect(answer, mooncheck); // Depending on the values of "answer" and "mooncheck" (After they have been processed by AnswerCorrect()), the function prints out a set of facts from FactSheet.cpp //

		if (mooncheck) MoonsFact(answer); // If it has been confirmed by Answercorrect() that the given answer is a moon and not a planet, the MoonsFact() function is activated //
		else { // If not, ... //
			if (answer == "The Sun") SolFact(); // ... either one of the planetary functions will be activated or ... //
			else if (answer == "Mercury") MercFact();
			else if (answer == "Venus") VenFact();
			else if (answer == "The Earth") EarthFact();
			else if (answer == "Mars") MarsFact();
			else if (answer == "Asteroid Belt") AsteroidBeltFact();
			else if (answer == "Jupiter") JupiFact();
			else if (answer == "Saturn") SatFact();
			else if (answer == "Uranus") UranFact();
			else if (answer == "Neptune") NepFact();
			else if (answer == "Pluto") PluFact();
			else if (answer == "Kuiper Belt") KuiperBeltFact();
			else if (answer == "Help") Help("CosmicTrivia");
			else if (answer == "Exit") confirmation = false; // ... the programme will either stop, //
			else if (answer == "None") ShowMenu(); // redirect the user to the Main Menu //
			else centerText(answer + "? Could you give us a coherent answer? \n"); // or ask them to give a coherent answer. //
		}
	}
}

// This function basically "decides" whether or not you proceed to use the fact printer. If you choose 'No', it redirects you back to the starting menu... //
void YourDecision() {
	int YourDecision = 1;
	while (true) {
		clear();
		PrintLogo();
		centerText("Welcome to the Astros cosmic trivia machine!\n");
		centerText("Here, you will be greeted with facts about the celestial bodies of the Solar system.\n\n");
		centerText("Are you ready to learn?\n\n");
		if (YourDecision == 1) {
			cout << string(((getConsoleWidth() - 21) / 2), ' ');
			ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 3);
			cout << char(205) << " Yes " << char(205);
			ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout << "          No  \n\n";
			centerText("Exit");
			cout << "\n\n";
		}
		else if (YourDecision == 2) {
			cout << string(((getConsoleWidth() - 21) / 2), ' ');
			cout << "  Yes          ";
			ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 3);
			cout << char(205) << " No " << char(205) << "\n\n";
			ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			centerText("Exit");
			cout << "\n\n";
		}
		else if (YourDecision == 3) {
			centerText("Yes            No");
			cout << "\n\n";
			cout << string(((getConsoleWidth() - 8) / 2), ' ');
			ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 3);
			cout << char(205) << " Exit " << char(205);
			ChangeColor(GetStdHandle(STD_OUTPUT_HANDLE), 7);
			cout << "\n\n";
		}

		char key = _getch();
		if (key == 72 or key == 80) {
			if (YourDecision == 3) YourDecision = 1;
			else if (YourDecision == 1 or YourDecision == 2) YourDecision = 3;
		}
		if (key == 75) {
			if (YourDecision == 2 or YourDecision == 3) YourDecision = 1;
			else if (YourDecision == 1) YourDecision = 2;
		}
		if (key == 77) {
			if (YourDecision == 1 or YourDecision == 3) YourDecision = 2;
			else if (YourDecision == 2) YourDecision = 1;
		}
		if (key == 13) {
			if (YourDecision == 1) {
				AnswerInit();
				break;
			}
			if (YourDecision == 2) {
				ShowMenu();
				break;
			}
			if (YourDecision == 3) {
				break;
			}
		}
	}
}