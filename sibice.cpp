#include <iostream>
#include <string>
#include <math.h> 

int main()
{
    double matchBoxSize, matchW, matchH, match;
    std::cin >> matchBoxSize >> matchW >> matchH;
    std::string result = "";

    for (int i = 0; i < matchBoxSize; i++)
    {
        std::cin >> match;

        if (match <= matchW || match <= matchH || match <= hypot(matchW, matchH))
        {
            result += "DA\n";
            continue;
        }
        result += "NE\n";
    }
    std::cout << result << std::endl;

    return 0;
}
