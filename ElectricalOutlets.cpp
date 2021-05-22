#include <iostream>

using namespace std;
int main()
{
	int num_outlets, output, power_outlet;

	cin >> num_outlets;

	for (int i = 0; i < num_outlets; i++)
	{
		int num_sockets;
		cin >> num_sockets;
		for (int j = 0; j < num_sockets; j++)
		{
			cin >> power_outlet;
			if (j == 0)
			{
				output = power_outlet;
			}
			else
			{
				output += power_outlet - 1;
			}
		}
		cout << output << endl;
	}

    return 0;
}
