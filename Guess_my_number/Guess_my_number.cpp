// Guess my number
// The classic numer guessing game 
// This code is written by Cyb3r Phr34k

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int secretNumber;
    int tries = 0;
    int guess;
    int wins = 0;
    char answer;
    cout << "\t\t -----------------------------------------------------";
    cout << "\n\t\t |\tWelcome to my guessing game bitcheees!!      |\n";
    cout << "\t\t -----------------------------------------------------\n" << endl;

    cout << "Rules: " << endl;
    cout << "> You should guess what is the number that I chose secretly, the number is between 1 and 100. I promise I want cheat.\n\n";

    //The game loop
    do
    {
        srand(static_cast <unsigned int> (time(0))); //seed a random number based on current time
        secretNumber = (rand() % 100) + 1; //generating a number between 1 and 100
        do
        {
            
            cout << "Enter a guess: ";
            cin >> guess;
            ++tries;

            if (guess > secretNumber)
            {
                cout << "Oops! that is too high" << endl;
            }
            else if (guess < secretNumber)
            {
                cout << "haha! that is too low" << endl;
            }
            else
            {
                cout << "You got it right dumbass in " << tries << " guesses!" << endl;
                ++wins;
            }

        } while (guess != secretNumber);
        cout << "\n\nHey dumbass, do you want to play again ? (y/n): ";
        cin >> answer;
        if ((answer == 'y') || (answer == 'Y'))
        {
            tries = 0;
            continue;
        }
        else if ((answer == 'n') || (answer == 'N'))
        {
            break;
        }
        else
        {
            cout << "\nGoosh!! you can't even give a good answer.";
        }
    } while (true);

    cout << "\nYou have won " << wins << " times, sorry for my language I get excited when I play :p";
    cout << "\nPress any charachter to exit..";
    int exit;
    cin >> exit;
    return 0;

}