#include <iostream>

bool sub(int a, int b, int c)
{
    return(a - b == c || b - a == c);
}

bool add(int a, int b, int c)
{
    return(a + b == c);
}

bool div(double a, double b, double c)
{
    return(a / b == c || b / a == c);
}

bool mult(int a, int b, int c)
{
    return(a*b == c);
}

int main()
{
    int num_testcases, a, b, c;

    std::cin >> num_testcases;

    for (int i{ 0 }; i < num_testcases; i++)
    {
        std::cin >> a >> b >> c;

        if (sub(a, b, c) || add(a, b, c) || div(a, b, c) || mult(a,b,c))
        {
            std::cout <<"Possible" << std::endl;
        }
        else
        {
            std::cout << "Impossible" << std::endl;
        }
    }

    return 0;
}
