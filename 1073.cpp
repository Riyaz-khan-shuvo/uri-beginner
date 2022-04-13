#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 2;
    cin >> n;
    for (i; i <= n; i += 2)
    {
        cout << i << "^"
             << "2"
             << " = " << i * i << endl;
    }
    return 0;
}