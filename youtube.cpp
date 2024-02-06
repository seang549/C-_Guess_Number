// #include <iostream>
// int main() // main function
// {
//     std::cout << "Hello World\n";
//     // return 0; // not necessary
// }


#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <array>


using std::string; //ideal to not have to ustilize std in front of string
using std::cout;
using std::cin;
using std::endl;

void print_array(std::array<int, 251> array, int size)
{
    for(int i = 0; i < size; i++)
    {
        cout << array[i] << '\t';
    }
    cout << endl;
}


void play_game()
{
    std::array<int, 251> guesses;
    int count = 0;

    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess a number: ";
    while(true)
    {
        int guess;
        cin >> guess;
        guesses[count++] = guess;
        if(guess == random)
        {
           cout << "You win! It took you " << count << " guesses!\n";
           break; 
        }
        else if(guess < random)
        {
            cout << "It is higher\n";
        }
        else
        {
            cout << "It is lower\n";
        }
    }
    print_array(guesses, count);
}

int main()
{
    srand(time(NULL));
    int choice;

    do
    {
        cout << "0. Quit\n1. Play game\n";
        cin >> choice;
        switch(choice)
        {
            case 0:
                cout << "Goodbye\n";
                break;
            case 1:
                play_game();
                break;
        }
    }while(choice != 0);
}
