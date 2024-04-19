#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

int main() {
    // Initialize random seed
    srand(static_cast<unsigned int>(time(0)));

    // Generate random number between 1 and 100
    int randomNumber = rand() % 100 + 1;

    // Variables to store user's guess and feedback
    int guess;
    bool correctGuess = false;

    std::cout << "Guess the number between 1 and 100: ";

    // Main game loop
    while (!correctGuess) {
        // Get user's guess
        std::cin >> guess;

        // Check if guess is correct
        if (guess == randomNumber) {
            std::cout << "Congratulations! You guessed the correct number.\n";
            correctGuess = true;
        } else if (guess < randomNumber) {
            std::cout << "Too low. Try again: ";
        } else {
            std::cout << "Too high. Try again: ";
        }
    }

    return 0;
}
