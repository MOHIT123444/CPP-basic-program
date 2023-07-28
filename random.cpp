#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0))); // Seed the random number generator

    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess;
    int tries = 0;

    cout << "Welcome to the Guessing Game!" << endl;

    do
    {
        cout << "Enter your guess (1-100): ";
        cin >> guess;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Please enter a number." << endl;
            continue;
        }

        tries++;

        if (guess < secretNumber)
        {
            cout << "Too low! Try again." << endl;
        }
        else if (guess > secretNumber)
        {
            cout << "Too high! Try again." << endl;
        }
        else
        {
            cout << "Congratulations! You guessed the number in " << tries << " tries." << endl;
        }

    } while (guess != secretNumber);

    cout << "Thank you for playing!" << endl;

    return 0;
}
