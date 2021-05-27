//https://open.kattis.com/problems/oddmanout
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int total_test_cases, case_N, guest_no, num = 1;
    cin >> total_test_cases;

    for (int i = 0; i < total_test_cases; i++)
    {
        unordered_map<int, int> guestlist;
        cin >> case_N;
        
        for (int j = 0; j < case_N; j++)
        {
            cin >> guest_no;
            guestlist[guest_no]++;
        }
        
        for (auto guest : guestlist) {
            if (guest.second == 1) {
                cout << "Case #" << num++ << ": " << guest.first << endl;
            }
        }
    }

    return 0;
}
