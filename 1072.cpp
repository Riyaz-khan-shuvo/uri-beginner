#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, in = 0, out = 0;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> b;
        if (b >= 10 && b <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;

    return 0;
}