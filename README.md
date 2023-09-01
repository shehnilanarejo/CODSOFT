# CODSOFT

#include <iostream>
#include <cstdlib> 
#include <ctime>   
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(nullptr))); // Seed the random number generator with the current time

   
    int randomNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number Game!" << endl;

    do {
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        if (guess < randomNumber) {
            cout << "Too low! Try again." << endl;
        } else if (guess > randomNumber) {
            cout << "Too high! Try again." << endl;
        }

        attempts++;

    } while (guess != randomNumber);

    cout << "Congratulations! You guessed the correct number (" << randomNumber << ") in " << attempts << " attempts!" << endl;

    return 0;
}
