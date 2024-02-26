#include <iostream>
#include "Game5.h"
#include "GlobalFunctions.h"
#include "Menu.h"

using namespace std;

void game5()
{
    bool check(char* pass, char* secret){
        if (strcmp(pass, secret) == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    int main()
    {
        while (true)
        {
            char arr1[20], arr2[20];
            cin >> arr1 >> arr2;
            if (check(arr1, arr2) == true) {
                cout << "Access granted";
                break;
            }
            else
            {
                cout << "Sorry" << endl;
                break;

            }
        }
    }
}