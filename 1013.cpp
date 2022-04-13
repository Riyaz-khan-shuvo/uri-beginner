#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, temp;
    cin >> a >> b >> c;
    temp = a;
    if (a < b || a < c)
    {
        if (b < c)
        {
            temp = c;
        }
        else
        {
            temp = b;
        }
    }
    printf("%d eh o maior\n", temp);
    return 0;
}