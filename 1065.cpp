#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, totalEvenNumber;

    for (i = 0; i < 5; i++)
    {
        cin >> n;
        if (n % 2 == 0)
        {
            totalEvenNumber++;
        }
    }
    cout << totalEvenNumber << " valores pares" << endl;
    return 0;
}