#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(nullptr));

    int target = rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Number Guessing Game!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if(cin.fail()) {
            cin.clear(); // clear error flags
            cin.ignore(10000, '\n'); // discard invalid input
            cout << "Please enter a valid number.\n";
            continue;
        }

        attempts++;

        if (guess > target) {
            cout << "Too high! Try again.\n";
        } else if (guess < target) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congrats! You guessed it in " << attempts << " attempts.\n";
        }

    } while (guess != target);

    return 0;
}
