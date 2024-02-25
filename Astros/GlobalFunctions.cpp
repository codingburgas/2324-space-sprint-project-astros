#include "GlobalFunctions.h"
#include "Quiz1Functions.h"
#include <iostream>
#include <stdlib.h>
#include <string>
#include <windows.h>	
using namespace std;
void PrintLogo() {
    centerText("                                                                                                                        \n");
    centerText(" .----------------.  .----------------.  .----------------.  .----------------.  .----------------.  .----------------. \n");
    centerText(" | .--------------. || .--------------. || .--------------. || .--------------. || .--------------. || .--------------. |\n");
    centerText("| |      __      | || |    _______   | || |  _________   | || |  _______     | || |     ____     | || |    _______   | |\n");
    centerText("| |     /  \\     | || |   /  ___  |  | || | |  _   _  |  | || | |_   __ \\    | || |   .'    `.   | || |   /  ___  |  | |\n");
    centerText("| |    / /\\ \\    | || |  |  (__ \\_|  | || | |_/ | | \\_|  | || |   | |__) |   | || |  /  .--.  \\  | || |  |  (__ \\_|  | |\n");
    centerText("| |   / ____ \\   | || |   '.___`-.   | || |     | |      | || |   |  __ /    | || |  | |    | |  | || |   '.___`-.   | |\n");
    centerText("| | _/ /    \\ \\_ | || |  |`\\____) |  | || |    _| |_     | || |  _| |  \\ \\_  | || |  \\  `--'  /  | || |  |`\\____) |  | |\n");
    centerText("| ||____|  |____|| || |  |_______.'  | || |   |_____|    | || | |____| |___| | || |   `.____.'   | || |  |_______.'  | |\n");
    centerText("| |              | || |              | || |              | || |              | || |              | || |              | |\n");
    centerText("| '--------------' || '--------------' || '--------------' || '--------------' || '--------------' || '--------------' |\n");
    centerText(" '----------------'  '----------------'  '----------------'  '----------------'  '----------------'  '----------------' \n");
    cout << endl;
}

void FullScreen() {
    keybd_event(VK_MENU, 0x36, 0, 0);
    keybd_event(VK_RETURN, 0x1c, 0, 0);
    keybd_event(VK_RETURN, 0x1c, KEYEVENTF_KEYUP, 0);
    keybd_event(VK_MENU, 0x38, KEYEVENTF_KEYUP, 0);
    cout << "Note: If you need help with the programme, type \"Help\". \n";
    system("pause");
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

void centerText(string text) {
    int consoleWidth = getConsoleWidth();
    int paddingLeft = (consoleWidth - text.length()) / 2;
    if (paddingLeft < 0) paddingLeft = 0;

    cout << string(paddingLeft, ' ') << text;
}

void Help(string GameName) {
    if (GameName == "Menu") {
        centerText("In the Menu, there are a total of thirteen possible answers, which include:\n");
        centerText("Exit, Quit, Leave, No or 0 - to stop the programme;\n");
        centerText("Astronomy Quiz or 1 - redirects you to the Astronomy Quiz;\n");
        centerText("Planet Akinator or 2 - redirects you to Planet Akinator;\n");
        centerText("Cosmic Trivia or 3 - redirects you to the Cosmic Trivia;\n");
        centerText("Guess The Word or 4 - redirects you to Guess The Word;\n\n");
        centerText("Understand?\n\n");
        cin.get();
    }
    else if (GameName == "Game1") {
        PrintGame1Rules();
        centerText("\nPossible Keywords include:\n");
        centerText("1, 2, 3, 4\n");
        centerText("\nUnderstand?\n\n");
        cin.get();
    }
    else if (GameName == "Game2") {
        centerText("Zlatine, zashto ne napisa pravilata?\n\n");
    }
    else if (GameName == "Game3Decision") {
        centerText("Here, you decide whether or not you want to actually use this part of the programme.\n");
        centerText("Responding with Yes (Lowercase and Capital Y), will redirect you to the Celestial Body selector\n");
        centerText("Responding with No (Lowercase and Capital N), will redirect you to the Main menu\n");
        centerText("Alternatively, you could respond with Exit to stop the programme entiretly\n");
        centerText("Understand?\n\n");
        cin.get();
    }
    else if (GameName == "Game3") {
        centerText("Here, you select what Celsetial Body you'd like to hear facts about.\n");
        centerText("Possible answers include:\n\n");
        centerText("The Sun;\n");
        centerText("Mercury;\n");
        centerText("Venus;\n");
        centerText("Earth and The Moon;\n");
        centerText("Mars and it moons, Phobos and Deimos;\n");
        centerText("The Asteroid Belt;\n");
        centerText("Jupiter and its major moons, Io, Europa, Ganymede and Callisto;\n");
        centerText("Saturn and its major moons, Titan, Rhea, Iapetus, Tethys, Enceladus and Dione;\n");
        centerText("Uranus and its major moons, Titania, Oberon, Umbriel, Ariel and Miranda;\n");
        centerText("Neptune and its major moons, Triton, Proteus and Nereid;\n");
        centerText("Pluto and its only moons, Nix, Hydra, Charon, Styx and Kerberos;\n");
        centerText("Alternatively, if you can't think of a moon, follow the model: <PlanetName>/Moons;\n");
        centerText("The Kuiper Belt;\n\n");
        centerText("Each Planet has about 50 facts corresponding to it;\n");
        centerText("Earth's moon has 15 facts corresponding to it;\n");
        centerText("The moons of Mars, Phobos and Deimos have 25 facts corresponding to them in total;\n");
        centerText("The rest of the majre moons have a varying number of facts corresponding to them;\n\n");
        centerText("Every time a Celestial Body is called upon, 5 facts about it are printed;\n");
        centerText("Exception to this rule are the moons of the more remote planets of the Solar system;\n\n");
        centerText("Alternatively, you could respond with None to be redirected back to the Menu;\n");
        centerText("Or simply type Exit to stop the programme;\n\n");
        centerText("If your answer doesn't fit in any of the beforementioned criteria, the programme will treat it as incoherent;\n\n");
        centerText("Understood?\n\n");
        cin.get();
    }
    else if (GameName == "Game4") {
        centerText("Here, the programme prints out a word whose letters are reordered in a way that makes it lose its meaning\n");
        centerText("Your task is to write the word the way it's originally meant to be written\n");
        centerText("Understand?\n\n");
        cin.get();
    }
}