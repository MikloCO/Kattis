//https://open.kattis.com/problems/textureanalysis
#include <iostream>
#include <string>

bool bScanPattern(std::string input)
{
    int count = 1, current = 0;
    
    while (count < input.length() && input.at(count) != '*') //Scan & count pattern
    {
        count++;
    }

    for (int next = 1; next < input.length(); next++)
    {
        if (input.at(next) == '*')
        {
            if (next - current != count)
                return false;

            current = next;
        }
    }

    return true;
}

int main()
{
    std::string input;
    int count = 1;
    while (std::cin >> input && input != "END") 
    {
        bScanPattern(input) ? printf("%i EVEN\n", count++) : printf("%i NOT EVEN\n", count++);
    }
    return 0;
}
