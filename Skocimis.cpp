#include <iostream>
#include <algorithm>

int main()
{
	int k1, m, k2;
	std::cin >> k1 >> m >> k2;

	std::cout << std::max(m - k1, k2 - m) - 1  << std::endl;
	
    return 0;
}
