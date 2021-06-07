//https://open.kattis.com/problems/provincesandgold
#include <iostream>
using namespace std;

void CheckNPrintForVictoryCards(int sum)
{
    if (sum >= 8)
        printf("Province");

    else if (sum < 8 && sum >= 5)
        printf("Duchy");

    else if (sum  >= 2)
        printf("Estate");
}

void CheckNPrintForTreasureCards(int sum)
{
    if (sum >= 6)
        printf("Gold");

    else if (sum >= 3 && sum < 6)
        printf("Silver");

    else
        printf("Copper");
}

int main()
{
    int gold, silver, copper;
    cin >> gold >> silver >> copper;

    int total_sum_buying = (gold * 3) + (silver * 2) + copper;

    CheckNPrintForVictoryCards(total_sum_buying);

    total_sum_buying >= 2 ? printf(" or ") : 0;

    CheckNPrintForTreasureCards(total_sum_buying);

    cout << endl; //Kattis must end on a new line.

    return 0;
}
