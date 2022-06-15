//https://open.kattis.com/problems/spavanac
#include <iostream>

using namespace std;

int main()
{
    int H, M, newM = 0;
    cin >> H >> M;

    if (M >= 45)
    {
        newM = M - 45;
        cout << H << " " << newM << endl;
    }
    else
    {
        int newMinute = 45 - M;
        M = 60 - newMinute;
        
        if (H >= 1)
            H -= 1;  
        
        if (H == 0)
            H = 23;
        
        cout << H << " " << M << endl;
    }
}
