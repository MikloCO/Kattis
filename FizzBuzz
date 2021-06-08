//https://open.kattis.com/problems/fizzbuzz
#include <iostream>

using namespace std;
int main()
{
	int x, y, n;
	cin >> x >> y >> n;

	for (int i = 1; i <= n; i++)
	{
		if (i % x == 0 && i % y == 0)
		{
			printf("FizzBuzz\n");
			continue;
		}

		else if (i % x == 0)
			printf("Fizz\n");

		else if (i % y == 0)
			printf("Buzz\n");

		else if (i % x != 0 && i % y != 0)
			printf("%i\n", i);

	}
	return 0;
}
