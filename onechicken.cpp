//https://open.kattis.com/problems/onechicken
#include <iostream>

int main()
{
    int piece_a, piece_b, rest{ 0 };
    std::cin >> piece_a >> piece_b;


    if (piece_a < piece_b)
    {
        rest = piece_b - piece_a;
        if (rest == 1)
        {
            std::cout << "Dr. Chaz will have " << rest <<
                " piece of chicken left over!" << std::endl;
        }
        else
        {
            std::cout << "Dr. Chaz will have " << rest <<
                " pieces of chicken left over!" << std::endl;
        }
    }
    else
    {
        rest = piece_a - piece_b;
        if (rest == 1)
        {
            std::cout << "Dr. Chaz needs " << rest <<
                " more piece of chicken!" << std::endl;
        }
        else 
        {

        std::cout << "Dr. Chaz needs " << rest <<
            " more pieces of chicken!" << std::endl;
        }
    }
}
