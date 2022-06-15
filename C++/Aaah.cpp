//https://open.kattis.com/problems/aaah
#include <iostream>
#include <string>

int main()
{
    std::string JonScreams, requiredScreams;
    std::cin >> JonScreams >> requiredScreams;

    std::cout << (JonScreams.length() < requiredScreams.length() ? "no" : "go") << std::endl;

    return 0;
}
