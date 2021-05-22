//https://open.kattis.com/problems/nastyhacks
#include <iostream>
#include <string>
int main()
{
    int num_cases = 0;
    int revenue, expected_revenue, cost_advertisement, after_advertisement{0};
    std::cin >> num_cases;
    std::string answer;

    for (int i = 0; i < num_cases; i++) {
        std::cin >> revenue >> expected_revenue >> cost_advertisement;
        after_advertisement = cost_advertisement + revenue;

            if (expected_revenue == after_advertisement)
            {
                answer += "does not matter\n";
            }
            else if (after_advertisement < expected_revenue)
            {
                answer += "advertise\n";
            }
            else 
            {
                answer += "do not advertise\n";
            }
    }

    std::cout << answer;

    return 0;
}
