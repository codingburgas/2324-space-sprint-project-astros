#include "Game4.h"
#include "WordsGame4.h"
#include "GlobalFunctions.h"
#include <iostream>
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

void PrintGame4Rules()
{
    cout << "Towa sa pravilata na igrata..." << endl;
}

void PrintGame4Header()
{
    centerText("ASTRONOMY QUIZ\n");
    centerText("Press Any Button To Continue");
    cin.get();
    clear();
    PrintLogo();
    PrintGame4Rules();
}

void playGame4()
{
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
        cout << "Guess the word: " << shuffledWords[i] << endl;
        string guess;
        cin >> guess;
        guess = toLowerCase(guess);

        // Check if the guess is correct (case-insensitively)
        if (guess == toLowerCase(SPACE_WORDS[i])) {
            cout << "Correct!" << endl;
            score++;
        }
        else {
            cout << "Wrong! The correct word was " << SPACE_WORDS[i] << endl;
        }
    }

    // Output the player's score
    cout << "Your score: " << score << "/" << SPACE_WORDS_COUNT << endl;
}
