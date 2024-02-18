#include <iostream>
#include <string>
#include "Menu.h"
#include "FactSheet.h"
#include "Generalfacts.h"
#include "GlobalFunctions.h"

using namespace std;

void PrintIntro() {
	centerText("COSMIC TRIVIA\n");
	centerText("Press Any Button To Continue");
	cin.get();
	clear();
	PrintLogo();
	cout << "Welcome to the Astros cosmic trivia machine!" << endl;
	cout << "Here, you will be greeted with facts about the celestial bodies of our solar system." << endl;
	cout << endl;
	cout << "Are you ready to learn?" << endl;
}

int AnswerCheck(string compareto, string thiss) {
	int convalue = 0;
	
	for (int a = 0; a < int(compareto.length()); a++) {
		for (int b = 0; b < int(thiss.length()); b++) {
			if (compareto[a] == thiss[b]) {
				convalue++;
				a++;
			}
		}
	}
	return convalue;
}

string AnswerCorrect(string answ) {
	const int standard = 12;
	
	int PosCon[standard];
	string PosAnsw[standard] = {"Sun", "Mercury", "Venus", "Earth", "Mars", "Jupiter", "Saturn", "Uranus", "Neptune", "Pluto", "Exit", "None"};

	for (int i = 0; i < standard; i++) {
		PosCon[i] = AnswerCheck(answ, PosAnsw[i]);
	}

	for (int i = 0; i < standard; i++) {
		if (PosCon[i] > int(PosAnsw[i].length()) or PosCon[i] < int(PosAnsw[i].length()) - int((PosAnsw[i].length()) / 2)) PosCon[i] = 0;
	}

	string SaveResult;
	int SaveIndex = 0;
	int max = 0;

	for (int i = 1; i < standard; i++) {
		if (PosCon[i] > max) {
			max = PosCon[i];
			SaveIndex = i;
		}
	}

	SaveResult = PosAnsw[SaveIndex];

	for (int i = 0; i < standard; i++) {
		if (PosCon[i] == max and i != SaveIndex) {
			SaveResult = answ;
			break;
		}
	}

	return SaveResult;
}

void AnswerInit() {
	clear();
	PrintLogo();
	bool confirmation = true;
	while (confirmation) {
		cout << "Which celestial body would you like to hear about?" << endl;
		string answer;
		getline(cin, answer);
		
		answer = AnswerCorrect(answer);
		
		if (answer == "Sun") SolFact();
		else if (answer == "Mercury") MercFact();
		else if (answer == "Venus") VenFact();
		else if (answer == "Earth") EarthFact();
		else if (answer == "Mars") MarsFact();
		else if (answer == "Asteroid Belt") AsteroidFact();
		else if (answer == "Jupiter") JupiFact();
		else if (answer == "Saturn") SatFact();
		else if (answer == "Uranus") UranFact();
		else if (answer == "Neptune") NepFact();
		else if (answer == "Pluto") PluFact();
		else if (answer == "Exit") confirmation = false;
		else if (answer == "None") ShowMenu();
		else cout << answer << "? Could you please give us a coherent answer?" << endl;
	}
}

void YourDecision() {
	string decision;
	getline(cin, decision);
	if (decision == "Yes" or decision == "yes") AnswerInit();
	else if (decision == "No" or decision == "no") ShowMenu();
	else {
		cout << decision << "? Could you please give us a valid answer?" << endl; 
		YourDecision();
	}
}