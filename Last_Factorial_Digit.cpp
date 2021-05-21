#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    int num_test_cases;
    cin >> num_test_cases;
        
    for (int c = 0; c < num_test_cases; c++)
    {
        int n;
        unsigned long factorial = 1;

        cin >> n;

        if (n >= 0)
        {
            for (int i = 1; i <= n; ++i) 
            {
                factorial *= i;
            }
        cout << factorial % 10 << endl;
        }
    } 
    return 0;
}
