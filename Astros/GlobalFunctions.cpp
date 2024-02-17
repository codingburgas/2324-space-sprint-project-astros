#include "GlobalFunctions.h"
#include <iostream>
#include <stdlib.h>
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

void ClearScreen()
{
	system("cls");
	PrintLogo();
}
