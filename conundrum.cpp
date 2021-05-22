//https://open.kattis.com/problems/conundrum
#include <iostream>
#include <string>

int main()
{
    std::string input, per = "PER";
    int count{ 0 };
    std::cin >> input;

    for (int i{ 0 }; i < input.length(); i++)
    {
        if (input[i] != per[i%3])
            count++;
    }

    std::cout << count << std::endl;

    return 0;
} 
