#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, totalPositive = 0, totalNegative = 0, even = 0, odd = 0;
    for (i = 0; i < 5; i++)
    {
        cin >> n;
        if (n > 0)
        {
            totalPositive++;
        }
        if (n < 0)
        {
            totalNegative++;
        }
        if (n % 2 == 0)
        {
            even++;
        }
        if (n % 2 != 0)
        {
            odd++;
        }
    }
    cout << even << " valor(es) par(es)" << endl;
    cout << odd << " valor(es) impar(es)" << endl;
    cout << totalPositive << " valor(es) positivo(s)" << endl;
    cout << totalNegative << " valor(es) negativo(s)" << endl;
    return 0;
}