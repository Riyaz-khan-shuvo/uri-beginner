#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        if (b > c)
        {
            cout
                << c << endl
                << b << endl
                << a << endl;
        }
        if (b < c)
        {
            cout
                << b << endl
                << c << endl
                << a << endl;
        }
    }
    else if (b > a && b > c)
    {
        if (a > c)
        {
            cout
                << c << endl
                << a << endl
                << b << endl;
        }
        if (a < c)
        {
            cout
                << a << endl
                << c << endl
                << b << endl;
        }
    }
    else if (c > a && c > b)
    {
        if (a > b)
        {
            cout
                << b << endl
                << a << endl
                << c << endl;
        }
        if (a < b)
        {
            cout
                << a << endl
                << b << endl
                << c << endl;
        }
    }
    cout << endl
         << a << endl
         << b << endl
         << c << endl;
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int x, y, z, p, q, r, t;
//     scanf("%d%d%d", &x, &y, &z);
//     p = x;
//     q = y;
//     r = z;
//     if (p > q)
//     {
//         t = p;
//         p = q;
//         q = t;
//     }
//     if (q > r)
//     {
//         t = q;
//         q = r;
//         r = t;
//     }
//     if (p > q)
//     {
//         t = p;
//         p = q;
//         q = t;
//     }
//     printf("\n\n%d\n%d\n%d\n\n%d\n%d\n%d\n", p, q, r, x, y, z);
//     return 0;
// }