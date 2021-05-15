#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main()
{
    int input = 0, mile_a = 0, mile_b = 0;

    while (input != -1) {
    int result = 0, prevMile = 0;

      cin >> input;
    
      for (int i = 0; i < input; i++)
      {
          cin >> mile_a;
          cin >> mile_b;
          result = result + ((mile_a) * (mile_b - prevMile));
          prevMile = mile_b;
      }
      if(input != -1)
          cout << result << " miles" << endl;
    }
    return 0;
}
