//https://open.kattis.com/problems/apaxiaaans
#include <iostream>
#include <string>

int main()
{
    std::string input;
    std::cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] != input[i + 1])
            std::cout << input[i];
    }
    
    std::cout << std::endl;
    
    return 0;
}
