//https://open.kattis.com/problems/quadrant
#include <iostream>
#include <string>
int main()
{
    int coordX, coordY;
    
    std::cin >> coordX >> coordY;

    if (coordX >= 0 && coordY >= 0)
    {
        std::cout << 1 << std::endl;
    }
    else if (coordX <= 0 && coordY <= 0) 
    {
        std::cout << 3 << std::endl;
    }
    else if (coordX >= 0 && coordY <= 0)
    {
        std::cout << 4 << std::endl;
    }
    else {
        std::cout << 2 << std::endl;
    }

    return 0;
}
