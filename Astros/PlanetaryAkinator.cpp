#include <iostream>
#include "PlanetaryAkinator.h"
#include "GlobalFunctions.h"
#include "Menu.h"
#include <Windows.h>
#include <string>
#include <limits>
#include <cstdlib>
#undef max
using namespace std;
void playPlanetaryAkinator()
{
		string answer;
			clear();
			PrintLogo();
			string starterQuestions[2] = { "Are you thinking of an inner planet?", "Does your planet have a significant atmosphere that can sustain a weather system?" }, planets[8] = { "Mercury", "Venus","Earth","Mars","Jupiter","Saturn","Uranus","Neptune" }; //Neptune */  }

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
			inputCheckQuestions(answer, starterQuestions, rng1);




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


					finalQuestions(answer, index, arr);
				}

				else {
					int	Jupiter = 0, Saturn = 0, Uranus = 0, Neptune = 0;
					questionTwoInnerOuterPlanets(Uranus, Neptune, Jupiter, Saturn);
					cout << endl;
					clear();
					PrintLogo();

					int arr[4] = { Uranus,Neptune,Jupiter,Saturn };
					int index[4] = { 6,7,4,5 };


					finalQuestions(answer, index, arr);
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


					finalQuestions(answer, index, arr);
				}


				else {
					int Mercury = 0, Saturn = 0, Uranus = 0, Neptune = 0;
					questionTwoSustainWeatherSystem(Mercury, Saturn, Uranus, Neptune);
					cout << endl;
					clear();
					PrintLogo();

					int arr[4] = { Mercury,Saturn,Uranus,Neptune };
					int index[4] = { 0,5,6,7 };


					finalQuestions(answer, index, arr);
				}
			}
}