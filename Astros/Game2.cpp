#include <iostream>
#include "Game2.h"
#include "GlobalFunctions.h"
#include "Menu.h"
#include <Windows.h>
#include <string>
#include <limits>
#undef max
using namespace std;

void playGame2()
{
	clear();
	string starterQuestions[2] = { "Are you thinking of an inner planet?", "Does your planet have a significant atmosphere that can sustain a weather system?" }, planetSpecificFacts[8][2] = { {"Is your planet the smallest in the Solar System?", "Does your planet have the most eccentric orbit of all the planets in the solar system?"}, //Mercury
	{ "Does your planet have the hottest surface of all the planets in the solar system?", "Is your planet often reffered to as the Earth's \"sister planet\" due to it's similiar size, mass, and proximity to the Sun?" }, //Venus
	 { "Are you thinking of the only known planet to support life?", "Does the Moon orbit the planet you're thinking of?" }, //Earth
	{ "Does your planet have the tallest volcano in the solar system?", "Does your planet have the largest canyon in the Solar System?" }, //Mars
	 { "Are you thinking of the largest planet in the Solar System?", "Does your planet have the Great Red Spot- a gigantic storm larger than Earth that has been raging for at least 400 years?" }, //Jupiter
	 { "Does your planet have the most extensive ring system of any planet in the Solar system, made up of ice and rock particles?", "Are you thinking of the least dense planet in the Solar System?" }, //Saturn
	 { "Are you thinking of the only planet in the Solar System that rotates on its side?", "Does your planet have the coldest planetary atmosphere in the Solar System?" }, //Uranus
	 { "Does the planet you're thinking of have the strongest winds in the Solar System?", "Are you thinking of the farthest planet from the sun?" } }, answer, planets[8] = {"Mercury", "Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune"}; //Neptune */  }
	
	centerText("PLANET AKINATOR\n");
	centerText("Press Any Button To Continue");
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clears buffer
	clear();

	centerText("PSA: Planet Akinator only takes planets in the Solar System into account. Pluto is not recognized as one of them. Yes or No answers only.\n");
	centerText("Press Any Button To Begin");
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clears buffer
	clear();

	int rng1,swap;
	rng1 = randomNumberGenerator(0, 1);
	centerText(starterQuestions[rng1]);
	cout<< endl;
	getline(cin, answer);
	clear();
	while (answer != "Yes" && answer != "No") {
		centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
		centerText(starterQuestions[rng1]);
		cout << endl;
		getline(cin, answer);
		clear();
	}
	//Round 1
	if (rng1 == 0) {
		if (answer == "Yes") {
			int Mercury = 0, Venus = 0, Earth = 0, Mars = 0;
			questionTwoInnerOuterPlanets(Earth, Mars, Mercury, Venus);
			cout << endl;
			clear();

			int arr[4] = { Earth,Mars,Mercury, Venus };
			int index[4] = { 2,3,0,1 };


			for (int i = 0; i < 4; i++) {
				if (arr[i] != 0) {
					centerText(planetSpecificFacts[index[i]][randomNumberGenerator(0, 1)]);
					cout << endl;
					getline(cin, answer);
					clear();

					while (answer != "Yes" && answer != "No") {
						centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
						centerText(planetSpecificFacts[index[i]][randomNumberGenerator(0, 1)]);
						cout << endl;
						getline(cin, answer);
						clear();
					}

					if (answer == "Yes") {
						centerText("Is the planet you're thinking of "); cout << planets[index[i]] << "?\n";
						getline(cin, answer);

						if (answer == "Yes")
						{
							clear();
							centerText("Haha! I knew it! Do you dare challenge me again?");
							getline(cin, answer);
							if (answer == "Yes") playGame2();
							clear();
							ShowMenu();
						}

						else {
							clear();
							centerText("Ugh! Would you like to give me another chance?");
							getline(cin, answer);
							if (answer == "Yes") playGame2();
							clear();
							ShowMenu();
						}

					}
				}
			}
		}
		else {
			int	Jupiter = 0, Saturn = 0, Uranus = 0, Neptune = 0;
			questionTwoInnerOuterPlanets(Uranus, Neptune, Jupiter, Saturn);
			cout << endl;
			clear();

			int arr[4] = { Uranus,Neptune,Jupiter,Saturn };
			int index[4] = { 6,7,4,5 };


			for (int i = 0; i < 4; i++) {
				if (arr[i] != 0) {
					centerText(planetSpecificFacts[index[i]][randomNumberGenerator(0, 1)]);
					cout << endl;
					getline(cin, answer);
					clear();

					while (answer != "Yes" && answer != "No") {
						centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
						centerText(planetSpecificFacts[index[i]][randomNumberGenerator(0, 1)]);
						cout << endl;
						getline(cin, answer);
						clear();
					}

					if (answer == "Yes") {
						centerText("Is the planet you're thinking of "); cout << planets[index[i]] << "?\n";
						getline(cin, answer);

						if (answer == "Yes")
						{
							clear();
							centerText("Haha! I knew it! Do you dare challenge me again?");
							getline(cin, answer);
							if (answer == "Yes") playGame2();
							clear();
							ShowMenu();
						}

						else {
							clear();
							centerText("Ugh! Would you like to give me another chance?");
							getline(cin, answer);
							if (answer == "Yes") playGame2();
							clear();
							ShowMenu();
						}

					}
				}
			}
		}
	}

	else {
		if (answer == "Yes") {
			int Venus = 0, Earth = 0, Mars = 0, Jupiter = 0;
			questionTwoSustainWeatherSystem(Earth, Jupiter, Venus, Mars);
			cout << endl;
			clear();

			int arr[4] = { Earth,Jupiter,Venus,Mars };
			int index[4] = { 2,4,1,3 };


			for (int i = 0; i < 4; i++) {
				if (arr[i] != 0) {
					centerText(planetSpecificFacts[index[i]][randomNumberGenerator(0, 1)]);
					cout << endl;
					getline(cin, answer);
					clear();

					while (answer != "Yes" && answer != "No") {
						centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
						centerText(planetSpecificFacts[index[i]][randomNumberGenerator(0, 1)]);
						cout << endl;	
						getline(cin, answer);
						clear();
					}

					if (answer == "Yes") {
						centerText("Is the planet you're thinking of "); cout << planets[index[i]] << "?\n";
						getline(cin, answer);
						
						if (answer == "Yes")
						{
							clear();
							centerText("Haha! I knew it! Do you dare challenge me again?");
							getline(cin, answer);
							if (answer == "Yes") playGame2();
							clear();
							ShowMenu();
						}
						
						else {
							clear();
							centerText("Ugh! Would you like to give me another chance?");
							getline(cin, answer);
							if (answer == "Yes") playGame2();
							clear();
							ShowMenu();
						}

					}
				}
			}
		}


		else {
			int Mercury = 0, Saturn = 0, Uranus = 0, Neptune = 0;
			questionTwoSustainWeatherSystem(Mercury, Saturn, Uranus, Neptune);
			cout << endl;
			clear();

			int arr[4] = { Mercury,Saturn,Uranus,Neptune };
			int index[4] = { 0,5,6,7 };


			for (int i = 0; i < 4; i++) {
				
				if (arr[i] != 0) {
					centerText( planetSpecificFacts[index[i]][randomNumberGenerator(0,1)]);
					cout << endl;
					getline(cin, answer);
					clear();
					
					while (answer != "Yes" && answer != "No") {
						centerText( "Invalid Answer! Please type either \"Yes\" or \"No\".\n");
						cout << starterQuestions[rng1] << endl;
						getline(cin, answer);
						clear();
					}
					
					if (answer == "Yes") {
						centerText("Is the planet you're thinking of "); cout << planets[index[i]] << "?\n";
						getline(cin, answer);
						
						if (answer=="Yes")
						{
							clear();
							centerText("Haha! I knew it! Do you dare challenge me again?");
							getline(cin, answer);
							if (answer == "Yes") playGame2();
							clear();
							ShowMenu();
						}
						
						else {
							clear();
							centerText("Ugh! Would you like to give me another chance?");
							getline(cin, answer);
							if (answer == "Yes") playGame2();
							clear();
							ShowMenu();						
						}

					}
				}
			}
		}
	}
}




