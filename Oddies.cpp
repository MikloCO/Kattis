#include <iostream>

using namespace std;
int main()
{
    int num_testCases, odd_or_even;
    cin >> num_testCases;

    for (int i = 0; i < num_testCases; i++)
    {
        cin >> odd_or_even;
        cout << odd_or_even << (odd_or_even % 2 == 0 ? " is even" : " is odd") << endl;
    }
    return 0;
}
