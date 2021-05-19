#include <iostream>
#include <string>
#include <vector>

using namespace std;

int countNumDuplicates(vector<string> list, int length)
{
    int count = 0;

    for (int i = 1; i < length; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (list.at(i) == list.at(j))
                break;

        if (i == j)
            count++;
    }
    return count;
}


int main()
{
    int num_testCases_L1, num_testCases_L2;
    string word;
    vector<string> v_cities;

    cin >> num_testCases_L1;

    for (int i = 0; i < num_testCases_L1; i++)
    {
        cin >> num_testCases_L2;
        v_cities.clear();

        for (int j = 0; j <= num_testCases_L2; j++)
        {
            getline(cin, word);
            v_cities.push_back(word);
        }

        cout << countNumDuplicates(v_cities, v_cities.size()) << endl;
    }

    return 0;
}
