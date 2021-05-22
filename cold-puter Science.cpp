//https://open.kattis.com/problems/cold
#include <iostream>

int main()
{
    int amount_of_temperatures, temp, counter{ 0 };

    std::cin >> amount_of_temperatures;

    for (int i = 0; i < amount_of_temperatures; i++)
    {
        std::cin >> temp;

        if (temp < 0)
        {
            counter++;
        }
    }
    std::cout << counter << std::endl;
    return 0;
}
