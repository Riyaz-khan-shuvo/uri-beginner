#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i = 0, n;
    cin >> n;

    while (i < 6)
    {
        if (n % 2 != 0)
        {
            cout << n << endl;
            i++;
        }
        n++;
    }

    return 0;
}