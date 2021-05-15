#include <iostream>
#include <string>
int main()
{
    std::string word;
    std::cin >> word;

    for (int i = 0; i < word.length()-1; i++)
    {
            if (word.at(i) == 's' && word.at(i+1) == 's') {
                std::cout << "hiss" << std::endl;
                return 0;
            }
    }
    std::cout << "no hiss" << std::endl;

    return 0;
}
