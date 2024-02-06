#include <iostream>
#include <string>
#include <vector>
#include <array>




int main()
{
    std::array<int, 15> array;
    for(int i = 0; i < 15; i++)
    {
        array[i] = i + 1;
    }

    for(int i = 0; i < array.size() ; i++)
    {
        if(array[i] % 15 == 0)
        {
            std::cout << "Fizzbuzz" << std::endl;
        }
        else if(array[i] % 3 == 0)
        {
            std::cout << "Fizz" << std::endl;
        }
        else if(array[i] % 5 == 0)
        {
            std::cout << "Buzz" << std::endl;
        }
        else
        {
            std::cout << array[i] << std::endl;
        }
        
    }
}