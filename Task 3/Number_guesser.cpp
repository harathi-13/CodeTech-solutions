#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(nullptr));
    
    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    
    // Welcome message
    cout << "Welcome to the Guess the Number game!" << endl;
    cout << "I've chosen a number between 1 and 100. Can you guess it?" << endl;
    
    // Initialize guess variable
    int guess = 0;
    
    // Keep looping until the user guesses the correct number
    while (guess != secretNumber) {
        // Ask the user to guess the number
        cout << "Enter your guess: ";
        cin >> guess;
        
        // Provide feedback based on the guess
        if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretNumber) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the correct number: " << secretNumber << endl;
        }
    }
    
    return 0;
}
