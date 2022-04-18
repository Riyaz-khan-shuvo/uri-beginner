#include <bits/stdc++.h>
using namespace std;
int main()
{
    double number;
    int totalPositive = 0, i;
    for (i = 0; i < 6; i++)
    {
        cin >> number;
        if (number > 0)
        {
            totalPositive++;
        }
    }
    cout << totalPositive << " valores positivos" << endl;
    return 0;
}