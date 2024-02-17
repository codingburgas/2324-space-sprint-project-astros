#include "GlobalFunctions.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <windows.h>	
using namespace std;
void PrintLogo() {
    cout << "      __        ________  ___________  _______     ______    ________  \n";
    cout << "     /\"\"\\      /\"       )(\"     _   \")/\"      \\   /    \" \\  /\"       ) \n";
    cout << "    /    \\    (:   \\___/  )__/  \\\\__/|:        | // ____  \\(:   \\___/  \n";
    cout << "   /' /\\  \\    \\___  \\       \\\\_ /   |_____/   )/  /    ) :)\\___  \\    \n";
    cout << "  //  __'  \\    __/  \\\\      |.  |    //      /(: (____/ //  __/  \\\\   \n";
    cout << " /   /  \\\\  \\  /\" \\   :)     \\:  |   |:  __   \\ \\        /  /\" \\   :)  \n";
    cout << "(___/    \\___)(_______/       \\__|   |__|  \\___) \\\"_____/  (_______/   \n";
    cout << endl;
}

void clear() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int getConsoleWidth() {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    int width;

    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    width = csbi.srWindow.Right - csbi.srWindow.Left + 1;

    return width;
}

void centerText(std::string text) {
    int consoleWidth = getConsoleWidth();
    int paddingLeft = (consoleWidth - text.length()) / 2;
    if (paddingLeft < 0) paddingLeft = 0;

    cout<< string(paddingLeft, ' ') << text << endl;
}
