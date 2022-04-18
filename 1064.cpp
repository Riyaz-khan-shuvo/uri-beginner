#include <bits/stdc++.h>
using namespace std;
int main()
{
    double n, sum = 0;

    int totalPositiveNumber, i;
    for (i = 0; i < 6; i++)
    {
        cin >> n;
        if (n > 0)
        {
            totalPositiveNumber++;
            sum += n;
        }
    }
    cout << totalPositiveNumber << " valores positivos" << endl;
    cout << fixed << setprecision(1) << sum / totalPositiveNumber << endl;

    return 0;
}