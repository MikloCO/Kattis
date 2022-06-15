//https://open.kattis.com/problems/alexandbarb
#include <iostream>

int main()
{
    int k, m, n;
    std::cin >> k >> m >> n;
    
    if (k % (m + n) < m)
        std::cout << "Barb" << std::endl;
    else
        std::cout << "Alex" << std::endl;

    return 0;
}
