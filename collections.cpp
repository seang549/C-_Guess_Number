#include <iostream>
#include <vector>
#include <array>

void print_array(std::array<int, 20> &data, int size)
{
    for(int i = 0; i < size; i++)
    {
        std::cout << data[i] << "\t";
    }
    std::cout << std::endl;

}

int main()
{
    std::array<int, 20> data = {1, 2, 3};
    print_array(data, 3);
}