#include <iostream>
#include <string>
int main()
{
    std::string input;
    std::cin >> input;
    
    int position{ 0 };

    for (int i = 0; i < input.length(); i++)
    {
        if (input.at(i) == 'A' && position != 2)
        {
            position = 1 - position;
        }
        if (input.at(i) == 'B' && position != 0)
        {
            position = -position + 3;
        }
        if (input.at(i) == 'C' && position != 1)
        {
            position = -position + 2;
        }
    }
    std::cout << (position + 1) << std::endl;

    return 0;
}
