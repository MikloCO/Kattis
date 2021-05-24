//https://open.kattis.com/problems/ptice
#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    int numCharacters { 0 };
    std::string inputSequence;
    std::string
        Adrian =
        "ABCABCABCABC",
        Bruno =
        "BABCBABCBABC",
        Goran =
        "CCAABBCCAABB";
         
    int pointsForAdrian { 0 }, pointsForBruno { 0 }, pointsForGoran { 0 };

    std::cin >> numCharacters;
    std::cin >> inputSequence;

    for (int i = 0; i <= numCharacters; i++)
    {
        if (inputSequence[i] == Adrian[i % 12])
        {
            pointsForAdrian++;
        }
        if (inputSequence[i] == Bruno[i % 12])
        {
            pointsForBruno++;
        }
        if (inputSequence[i] == Goran[i % 12])
        {
            pointsForGoran++;
        }
    }
    
    int const highestPoints{ std::max(pointsForAdrian, std::max(pointsForBruno, pointsForGoran)) };
    std::cout << highestPoints << std::endl;
    
    if (pointsForAdrian == highestPoints)
    {
        std::cout << "Adrian" << std::endl;
    }

    if (pointsForBruno == highestPoints)
    {
        std::cout << "Bruno" << std::endl;
    }
    if (pointsForGoran == highestPoints)
    {
        std::cout << "Goran" << std::endl;
    }
    
    return 0;
}
