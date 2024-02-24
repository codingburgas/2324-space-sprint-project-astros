#include <iostream>
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
	PrintLogo();
	centerText("Welcome to the Astros cosmic trivia machine!\n");
	centerText("Here, you will be greeted with facts about the celestial bodies of our solar system.\n\n");
	centerText("Are you ready to learn?\n");
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
	const int standard = 48; // The number of possible answers is set to a constant standard as it is a subject to change //
	
	int PosCon[standard]; // "PosCon" as in Possible Coincidences //
	string PosAnsw[standard] = {"The Sun", "Mercury", "Venus", "The Earth", "The Moon", "Earth/Moon", "Mars", "Phobos", "Deimos", "Mars/Moons", "Asteroid Belt", "Jupiter", "Io", "Europa", "Ganymede", "Callisto", "Jupiter/Moons", "Saturn", "Titan", "Rhea", "Iapetus", "Tethys", "Enceladus", "Dione", "Saturn/Moons", "Uranus", "Titania", "Oberon", "Umbriel", "Ariel", "Miranda", "Uranus/Moons", "Neptune", "Triton", "Proteus", "Nereid", "Neptune/Moons", "Pluto", "Nix", "Hydra", "Charon", "Styx", "Kerberos", "Pluto/Moons", "Kuiper Belt", "Exit", "None", "Help"};
	// "PosAnsw" as in Possible Answers //
	
	// This loop, with the help of the "AnswerCheck()" function marks out all coincidences between the given answer and all possible answers //
	for (int i = 0; i < standard; i++) {
		PosCon[i] = AnswerCheck(answ, PosAnsw[i]);
	}

	// If there are too many or too little coincidences however, the function cancels them out by setting their value to 0. //
	for (int i = 0; i < standard; i++) {
		if (PosCon[i] > int(PosAnsw[i].length()) or PosCon[i] < int(PosAnsw[i].length()) - int((PosAnsw[i].length()) / 2)) PosCon[i] = 0;
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
	if (SaveIndex >= 4 and SaveIndex <= 5 or SaveIndex >= 7 and SaveIndex <= 9 or SaveIndex >= 12 and SaveIndex <= 16 or SaveIndex >= 18 and SaveIndex <= 24 or SaveIndex >= 26 and SaveIndex <= 31 or SaveIndex >= 33 and SaveIndex <= 36 or SaveIndex >= 38 and SaveIndex <= 43) {
		for (int i = 0; i < standard; i++) {
			PosCon[i] = 0;
		}
	}

	if (SaveIndex >= 4 and SaveIndex <= 5) SaveIndex = 3;
	else if (SaveIndex >= 7 and SaveIndex <= 9) SaveIndex = 6;
	else if (SaveIndex >= 12 and SaveIndex <= 16) SaveIndex = 11;
	else if (SaveIndex >= 18 and SaveIndex <= 24) SaveIndex = 17;
	else if (SaveIndex >= 26 and SaveIndex <= 31) SaveIndex = 25;
	else if (SaveIndex >= 33 and SaveIndex <= 36) SaveIndex = 32;
	else if (SaveIndex >= 38 and SaveIndex <= 43) SaveIndex = 37;
	else moon = false;

	max = int(PosAnsw[SaveIndex].length());
	PosCon[SaveIndex] = max;

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
		centerText("Which celestial body would you like to hear about?\n\n");

		string answer;
		bool mooncheck = true;

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
			else if (answer == "Help") Help("Game3");
			else if (answer == "Exit") confirmation = false; // ... the programme will either stop, //
			else if (answer == "None") ShowMenu(); // redirect the user to the Main Menu //
			else centerText(answer + "? Could you give us a coherent answer? \n"); // or ask them to give a coherent answer. //
		}
	}
}

// This function basically "decides" whether or not you proceed wtih Game 3. If you choose 'No', it redirects you back to the starting menu... //
void YourDecision() {
	string decision;
	getline(cin, decision, '\n');
	if (decision == "Yes" or decision == "yes") AnswerInit(); // ... if you choose 'Yes' however, your will be redirected to the answer-distributing funcion "AnswerInit()" //
	else if (decision == "No" or decision == "no") ShowMenu();
	else if (decision == "Help") Help("Game3Decision");
	else {
		//cout << decision << "? Could you please give us a valid answer?" << endl;//
		centerText(decision + "? Could you give us a valid answer? \n");
		YourDecision();
	}
	// But if you enter an invalid answer, the programme will question it and ask you to give a valid one //
}