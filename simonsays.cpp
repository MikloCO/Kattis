#include <iostream>
#include <string>

using namespace std;
int main()
{
	int test_cases{ 0 };
	std::string words;

	cin >> test_cases;

	for (int i = 0; i <= test_cases; i++)
	{
		getline(cin, words);
		if (words.substr(0,10).compare("Simon says") == 0)
		{
			cout << words.substr(11, words.length()) << endl;
		}
	}

    return 0;
}

