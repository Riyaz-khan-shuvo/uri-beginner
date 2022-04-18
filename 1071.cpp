#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, sum = 0, i, max, min;
    cin >> a >> b;

    if (a > b)
    {
        max = a;
        min = b;
    }
    else
    {
        max = b;
        min = a;
    }

    for (i = (min + 1); i < max; i++)
    {
        if (i % 2 != 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;

    return 0;
}