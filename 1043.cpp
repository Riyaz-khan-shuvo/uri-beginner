#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, result;

    cin >> a >> b >> c;
    cout << fixed;
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        result = a + b + c;
        cout << setprecision(1) << "Perimetro = " << result << endl;
    }
    else
    {
        result = 0.5 * (a + b) * c;
        cout << setprecision(1) << "Area = " << result << endl;
    }

    return 0;
}