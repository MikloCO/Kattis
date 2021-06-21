#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    long long a, b;

    while (cin >> a >> b)
    {
        cout << max(a - b, b-a) << endl;
    }
    return 0;
}
