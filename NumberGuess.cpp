#include <iostream>
using namespace std;

int main()
{
    int numberToGuess{58}, number{0}, MaxChance{5};
    bool validate{true};
    cout << "\t\tNumber Guessing Game" << endl;
    do
    {
        cout << "Enter the number between (1 to 100) :";
        cin >> number;
        if (number < 1 || number > 100)
        {
            cout << "Entered number is not valid...!" << endl;
            continue;
        }
        else
        {
            if (number == numberToGuess)
            {
                cout << "You have won the game...! " << number << " was the number to guess.";
                validate = false;
            }
            else
            {
                cout << ((number > numberToGuess) ? "The guessed number is greater than actual {Try again by reducing it...!}" : "The guessed number is Lesser than actual {Try again by increasing it...!}") << endl;
                MaxChance--;
                cout << "Chance left :" << MaxChance << endl;
                if (MaxChance <= 0)
                {
                    cout << "You are out of Chance...! " << numberToGuess << " was the number..! Better luck next time" << endl;
                    validate = false;
                }
            }
        }

    } while (validate);
    return 0;
}