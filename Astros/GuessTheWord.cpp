#include "GuessTheWord.h"
#include "Menu.h"
#include "WordsGuessTheWord.h"
#include "GlobalFunctions.h"
#include <iostream>
#include <Windows.h>
#include <conio.h> //it includes inbuilt functions like getch() and clrscr()
#include <string>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

// Function to generate a random index between 0 and n-1
int getRandomIndex(int n) {
    return rand() % n;
}

// Function to shuffle the letters within each word
void shuffleLetters(string& word) {
    int length = word.length();
    for (int i = 0; i < length; i++) {
        int r = getRandomIndex(length);
        // Swap characters at indices i and r
        swap(word[i], word[r]);
    }
}

// Function to shuffle the array of string
void shuffleWordsArray(const char* array[], int size, string output[]) {
    for (int i = 0; i < size; i++) {
        output[i] = array[i]; // Copy words to the output array
    }
}

string toLowerCase(const string& input) {
    string output = input;
    for (size_t i = 0; i < output.length(); i++) {
        if (output[i] >= 'A' && output[i] <= 'Z') {
            // Convert to lowercase by adding the difference between 'a' and 'A'
            output[i] = output[i] + 32;
        }
    }
    return output;
}

void PrintGuessTheWordRules()
{
    centerText("Here, the programme prints out a word whose letters are reordered in a way that makes it lose its meaning.Your task is to write the word the way it's originally meant to be written.\n\n");
}

void PrintGuessTheWordHeader()
{
    centerText("GUESS THE WORD\n\n");
    centerText("Press Any Button To Continue\n");
    cin.get();
    clear();
    PrintLogo();
    PrintGuessTheWordRules();
}

void playGuessTheWord()
{
    clear();
    PrintLogo();
    PrintGuessTheWordHeader();

    // Seed the random number generator
    srand(time(0));

    // Define an array of string to hold the shuffled words
    string shuffledWords[SPACE_WORDS_COUNT];

    // Shuffle the array of words
    shuffleWordsArray(SPACE_WORDS, SPACE_WORDS_COUNT, shuffledWords);

    // Shuffle the letters within each word
    for (int i = 0; i < SPACE_WORDS_COUNT; i++) {
        shuffleLetters(shuffledWords[i]);
    }

    // Initialize score
        int score = 0;

    // Interact with the player
    for (int i = 0; i < SPACE_WORDS_COUNT; i++) {
        // cout << "Guess the word: " << shuffledWords[i] << endl; //
        centerText("Guess the word: " + shuffledWords[i] + '\n');
        string guess;
        
        cout << string((getConsoleWidth() / 2) - 5, ' '); //Center the output
        getline(cin, guess); 
        guess = toLowerCase(guess);

        // Check if the guess is correct (case-insensitively)
        if (guess == "help") {
            Help("GuessTheWord");
            centerText("Guess the word: " + shuffledWords[i] + '\n');
            cout << string((getConsoleWidth() / 2) - 5, ' '); //Center the output
            getline(cin, guess);
        }
        if (guess == "leave") {
            ShowMenu();
            exit(0);
        }


        if (guess == toLowerCase(SPACE_WORDS[i])) {
            //cout << "Correct!" << endl;//
            clear();
            PrintLogo();
            centerText("Correct!\n");
            score++;
        }
        
        else {
            //cout << "Wrong!<< endl;
            clear();
            PrintLogo();
            centerText("Wrong!\n");
        }
        
    }
    // Output the player's score
    //cout << "Your score: " << score << "/" << SPACE_WORDS_COUNT << endl;//
    centerText("Your score: " + to_string(score) + "/" + to_string(SPACE_WORDS_COUNT) + "\n");
    
    char keyentered;
    keyentered = _getch();
    if (keyentered == 13) ShowMenu();
    else ShowMenu();
}