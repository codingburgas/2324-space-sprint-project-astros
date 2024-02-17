#include <iostream>
#include <windows.h>	
#include <string>
#include "Game2.h"
#include <random>
using namespace std;



int randomNumberGenerator(int from, int to) {
    random_device rd;
    mt19937 eng(rd());
    uniform_int_distribution<> distr(from, to);
    return distr(eng);
}