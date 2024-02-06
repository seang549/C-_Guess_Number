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
#include <fstream>


using std::string; //ideal to not have to ustilize std in front of string
using std::cout;
using std::cin;
using std::endl;

void print_vector(std::vector<int> vector)
{
    for(int i = 0; i < vector.size(); i++)
    {
        cout << vector[i] << '\t';
    }
    cout << endl;
}


void play_game()
{
    std::vector<int> guesses;
    int random = rand() % 251;
    cout << random << endl;
    cout << "Guess a number: ";
    while(true)
    {
        int guess;
        cin >> guess;
        guesses.push_back(guess);
        if(guess == random)
        {
           cout << "You win! It took you " << guesses.size() << " guesses!\n";
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

    std::ifstream input("best_score.txt");
    if(!input.is_open())
    {
        std::cout << "Unable to read file\n";
        return;
    }

    int best_score;
    input >> best_score;

    std::ofstream output("best_score.txt");
    if(!output.is_open())
    {
        std::cout << "Unable to read file\n";
        return;
    }
    if(guesses.size() < best_score)
    {
        output << guesses.size();
    }
    else
    {
        output << best_score;
    }
    print_vector(guesses);
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
