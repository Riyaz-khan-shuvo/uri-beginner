#include <bits/stdc++.h>
using namespace std;
int main()
{
    int s, h = 0, m = 0;
    cin >> s;

    if (s >= 3600)
    {
        h = s / 3600;
        s = s % 3600;
    }
    if (s >= 60)
    {
        m = s / 60;
        s = s % 60;
    }
    cout << h << ":" << m << ":" << s << endl;
    return 0;
}