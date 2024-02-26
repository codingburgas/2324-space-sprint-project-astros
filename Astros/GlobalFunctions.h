#pragma once
#include <iostream>
#include <string>
#include <Windows.h>

void clear();

void FullScreen();

void PrintLogo();

int getConsoleWidth();

void centerText(std::string text);

void Help(std::string GameName);

void ChangeColor(HANDLE Output, int Color);
