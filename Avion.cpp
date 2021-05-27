#include <iostream>
#include <string>

using namespace std;
int main()
{
	int i = 0;
	string blimp_registration_code, fbi{ "FBI" }, cia{ "CIA" };
	
	while (5 > i++)
	{
		cin >> blimp_registration_code;
		
		if (blimp_registration_code.find(fbi) != string::npos)
		{
			printf("%i ", i);
		}
		if (blimp_registration_code.find(cia) != string::npos)
		{
			printf("HE GOT AWAY!");
			break;
		}
	}
	cout << endl;

    return 0;
}
