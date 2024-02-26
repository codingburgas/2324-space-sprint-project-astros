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
	PrintLogo();
	string starterQuestions[2] = { "Are you thinking of an inner planet?", "Does your planet have a significant atmosphere that can sustain a weather system?" }, planetSpecificFacts[8][2] = { {"Is your planet the smallest in the Solar System?", "Does your planet have the most eccentric orbit of all the planets in the solar system?"}, //Mercury
	{ "Does your planet have the hottest surface of all the planets in the solar system?", "Is your planet often reffered to as the Earth's \"sister planet\" due to it's similiar size, mass, and proximity to the Sun?" }, //Venus
	 { "Are you thinking of the only known planet to support life?", "Does the Moon orbit the planet you're thinking of?" }, //Earth
	{ "Does your planet have the tallest volcano in the solar system?", "Does your planet have the largest canyon in the Solar System?" }, //Mars
	 { "Are you thinking of the largest planet in the Solar System?", "Does your planet have the Great Red Spot- a gigantic storm larger than Earth that has been raging for at least 400 years?" }, //Jupiter
	 { "Does your planet have the most extensive ring system of any planet in the Solar system, made up of ice and rock particles?", "Are you thinking of the least dense planet in the Solar System?" }, //Saturn
	 { "Are you thinking of the only planet in the Solar System that rotates on its side?", "Does your planet have the coldest planetary atmosphere in the Solar System?" }, //Uranus
	 { "Does the planet you're thinking of have the strongest winds in the Solar System?", "Are you thinking of the farthest planet from the sun?" } }, answer, planets[8] = { "Mercury", "Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune" }; //Neptune */  }

	centerText("PLANET AKINATOR\n"); //rules of the game and such
	centerText("Press Any Button To Continue");
	cin.get();
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clears buffer
	clear();
	PrintLogo();

	centerText("PSA: Planet Akinator only takes planets in the Solar System into account. Pluto is not recognized as one of them. Yes or No answers only.\n");
	centerText("Press Any Button To Begin");
	cin.get(); //waits for user input before starting
	cin.ignore(numeric_limits<streamsize>::max(), '\n'); //clears buffer
	clear();
	PrintLogo();

	int rng1; //rng is the variable used to determine which of the questions the game's gonna ask the player (via the randomNumberGenerator function). i made this variable so it doesnt ask different questions each time you mispell "Yes" or "No" in the while function below.
	rng1 = randomNumberGenerator(0, 1);
	centerText(starterQuestions[rng1]);
	cout << endl << string((getConsoleWidth() / 2) - 5, ' '); //this makes the cin start at the middle of the screen (purely for aesthetic purposes)
	getline(cin, answer);
	clear();
	PrintLogo();
	while (answer != "Yes" && answer != "No") { //checks if "Yes" or "No" is misspelled
		centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
		centerText(starterQuestions[rng1]);
		cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
		getline(cin, answer);
		clear();
		PrintLogo();
	}
	//Round 1
	if (rng1 == 0) { //checks which question the rng function chose
		if (answer == "Yes") {
			int Mercury = 0, Venus = 0, Earth = 0, Mars = 0;
			questionTwoInnerOuterPlanets(Earth, Mars, Mercury, Venus); //asks the second question. this eliminates 2 out of the 4 remaining planets (arguments)
			cout << endl;
			clear();
			PrintLogo();

			int arr[4] = { Earth,Mars,Mercury, Venus }; //connects each planet to its respective index in the questions above (for example: earth is 2, mars is 3...)
			int index[4] = { 2,3,0,1 };


			for (int i = 0; i < 4; i++) {
				if (arr[i] != 0) { //checks which planets were eliminated with question two
					rng1 = randomNumberGenerator(0, 1); //maintains the randomly-generated value across the loops
					centerText(planetSpecificFacts[index[i]][rng1]);
					cout << endl << string((getConsoleWidth() / 2) - 5, ' '); //makes cin appear in the middle of the screen
					getline(cin, answer);
					clear();
					PrintLogo();

					while (answer != "Yes" && answer != "No") {
						centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
						centerText(planetSpecificFacts[index[i]][rng1]);
						cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
						getline(cin, answer);
						clear();
						PrintLogo();
					}

					if (answer == "Yes") {
						centerText("Is the planet you're thinking of "); cout << planets[index[i]] << "?\n"; //if the user answers "Yes" in any of the facts, applying to a specific planet, the program eliminates the rest of the planets and asks the user if the planet with index i is the one they're thinking about
						cout << string((getConsoleWidth() / 2) - 5, ' ');
						getline(cin, answer);

						while (answer != "Yes" and answer != "No") {
							centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");

							cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
							getline(cin, answer);
							clear();
							PrintLogo();
						}
						if (answer == "Yes") //rest of the code asks the user if they want to play again and applies the same premice but with different questions to maximize replayability
						{
							clear();
							PrintLogo();
							centerText("Haha! I knew it! Do you dare challenge me again?\n");
							PrintLogo();
							while (answer != "Yes" and answer != "No") {
								centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");

								cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
								getline(cin, answer);
								clear();
								PrintLogo();
							}
							if (answer == "Yes") {
								playGame2();
							}

							if (answer == "No") {
								clear();
								ShowMenu();
								break;
							}
						}
						else {
							clear();
							PrintLogo();
							centerText("Ugh! Would you like to give me another chance?\n");
							getline(cin, answer);
							clear();
							PrintLogo();
							while (answer != "Yes" and answer != "No") {
								centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");

								cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
								getline(cin, answer);
								clear();
								PrintLogo();
							}
							if (answer == "Yes") {
								playGame2();
							}

							if (answer == "No") {
								clear();
								ShowMenu();
								break;
							}
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
			PrintLogo();

			int arr[4] = { Uranus,Neptune,Jupiter,Saturn };
			int index[4] = { 6,7,4,5 };


			for (int i = 0; i < 4; i++) {
				if (arr[i] != 0) {
					rng1 = randomNumberGenerator(0, 1);
					centerText(planetSpecificFacts[index[i]][rng1]);
					cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
					getline(cin, answer);
					clear();
					PrintLogo();

					while (answer != "Yes" && answer != "No") {
						centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
						centerText(planetSpecificFacts[index[i]][rng1]);
						cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
						getline(cin, answer);
						clear();
						PrintLogo();
					}

					if (answer == "Yes") {
						centerText("Is the planet you're thinking of "); cout << planets[index[i]] << "?\n";
						cout << string((getConsoleWidth() / 2) - 5, ' ');
						getline(cin, answer);

						if (answer == "Yes")
						{
							clear();
							PrintLogo();
							centerText("Haha! I knew it! Do you dare challenge me again? \n");
							cout << string((getConsoleWidth() / 2) - 5, ' ');
							getline(cin, answer);
							while (answer != "Yes" and answer != "No") {
								centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");

								cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
								getline(cin, answer);
								clear();
								PrintLogo();
							}
							clear();
							PrintLogo();
							while (answer != "Yes" and answer != "No") {
								centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");

								cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
								getline(cin, answer);
								clear();
								PrintLogo();
							}
							if (answer == "Yes") {
								playGame2();
							}

							if (answer == "No") {
								clear();
								ShowMenu();
								break;
							}


						}

						else {
							clear();
							PrintLogo();
							centerText("Ugh! Would you like to give me another chance?\n");
							getline(cin, answer);
							while (answer != "Yes" and answer != "No") {
								centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");

								cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
								getline(cin, answer);
								clear();
								PrintLogo();
							}
							clear();
							PrintLogo();
							while (answer != "Yes" and answer != "No") {
								centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");

								cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
								getline(cin, answer);
								clear();
								PrintLogo();
							}
							if (answer == "Yes") {
								playGame2();
							}

							if (answer == "No") {
								clear();
								ShowMenu();
								break;
							}
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
			PrintLogo();

			int arr[4] = { Earth,Jupiter,Venus,Mars };
			int index[4] = { 2,4,1,3 };


			for (int i = 0; i < 4; i++) {
				if (arr[i] != 0) {
					rng1 = randomNumberGenerator(0, 1);
					centerText(planetSpecificFacts[index[i]][rng1]);
					cout << endl;
					getline(cin, answer);
					clear();
					PrintLogo();

					while (answer != "Yes" && answer != "No") {
						rng1 = randomNumberGenerator(0, 1);
						centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
						centerText(planetSpecificFacts[index[i]][rng1]);
						cout << endl;
						getline(cin, answer);
						clear();
						PrintLogo();
					}

					if (answer == "Yes") {
						centerText("Is the planet you're thinking of "); cout << planets[index[i]] << "?\n";
						getline(cin, answer);
						while (answer != "Yes" and answer != "No") {
							centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");

							cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
							getline(cin, answer);
							clear();
							PrintLogo();
						}
						if (answer == "Yes")
						{
							clear();
							PrintLogo();
							centerText("Haha! I knew it! Do you dare challenge me again?\n");
							getline(cin, answer);
							clear();
							PrintLogo();
							while (answer != "Yes" and answer != "No") {
								centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");

								cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
								getline(cin, answer);
								clear();
								PrintLogo();
							}
							if (answer == "Yes") {
								playGame2();
							}

							if (answer == "No") {
								clear();
								ShowMenu();
								break;
							}
						}

						else {
							clear();
							PrintLogo();
							centerText("Ugh! Would you like to give me another chance?\n");
							getline(cin, answer);
							clear();
							PrintLogo();
							while (answer != "Yes" and answer != "No") {
								centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");

								cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
								getline(cin, answer);
								clear();
								PrintLogo();
							}
							if (answer == "Yes") {
								playGame2();
							}

							if (answer == "No") {
								clear();
								ShowMenu();
								break;
							}
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
			PrintLogo();

			int arr[4] = { Mercury,Saturn,Uranus,Neptune };
			int index[4] = { 0,5,6,7 };


			for (int i = 0; i < 4; i++) {

				if (arr[i] != 0) {
					rng1 = randomNumberGenerator(0, 1);
					centerText(planetSpecificFacts[index[i]][rng1]);
					cout << endl;
					getline(cin, answer);
					clear();
					PrintLogo();

					while (answer != "Yes" && answer != "No") {
						centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
						cout << starterQuestions[rng1] << endl;
						getline(cin, answer);
						clear();
						PrintLogo();
					}

					if (answer == "Yes") {
						centerText("Is the planet you're thinking of "); cout << planets[index[i]] << "?\n";

						getline(cin, answer);

						clear();
						PrintLogo();

						while (answer != "Yes" && answer != "No") {
							centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");
							cout << starterQuestions[rng1] << endl;
							cout << planets[index[i]] << "?\n";
							getline(cin, answer);
							clear();
							PrintLogo();
						}

						if (answer == "Yes") {
							centerText("Is the planet you're thinking of "); cout << planets[index[i]] << "?\n";
							getline(cin, answer);

							if (answer == "Yes")
							{
								clear();
								PrintLogo();
								centerText("Haha! I knew it! Do you dare challenge me again?\n");
								getline(cin, answer);
								clear();
								PrintLogo();
								while (answer != "Yes" and answer != "No") {
									centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");

									cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
									getline(cin, answer);
									clear();
									PrintLogo();
								}
								if (answer == "Yes") {
									playGame2();
								}

								if (answer == "No") {
									clear();
									ShowMenu();
									break;
								}

							}

							else {
								clear();
								PrintLogo();
								centerText("Ugh! Would you like to give me another chance?\n");
								getline(cin, answer);

								clear();
								PrintLogo();
								while (answer != "Yes" and answer != "No") {
									centerText("Invalid Answer! Please type either \"Yes\" or \"No\".\n");

									cout << endl << string((getConsoleWidth() / 2) - 5, ' ');
									getline(cin, answer);
									clear();
									PrintLogo();
								}
								if (answer == "Yes") {
									playGame2();
								}

								if (answer == "No") {
									clear();
									ShowMenu();
									break;
								}

							}

						}
					}
				}
			}
		}
	}
}




