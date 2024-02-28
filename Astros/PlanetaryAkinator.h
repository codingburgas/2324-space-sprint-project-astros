#pragma once
#include <string>
using namespace std;

int randomNumberGenerator(int from, int to);

void playPlanetaryAkinator();

void questionTwoSustainWeatherSystem(int& a, int& b, int& c, int& d);

void questionTwoInnerOuterPlanets(int& a, int& b, int& c, int& d);

void inputCheckRegular(string& input, string text);

void inputCheckQuestions(string& input, string questions[], int rng1);

void inputCheckFinalQuestions(string& input, int rng1, int index[], int i);

void inputCheckFinalGuess(string& input, string planets[], int index[], int i);

void playAgain(string text);

void finalQuestions(string& answer, int index[], int arr[]);