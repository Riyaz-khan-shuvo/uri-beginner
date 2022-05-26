#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, numberOfAnimal, totalC = 0, totalR = 0, totalS = 0, sum = 0;
    char nameOfAnimal;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> numberOfAnimal;
        cin >> nameOfAnimal;
        switch (nameOfAnimal)
        {
        case 'C':
            sum += numberOfAnimal;
            totalC += numberOfAnimal;
            break;

        case 'R':
            sum += numberOfAnimal;
            totalR += numberOfAnimal;
            break;

        case 'S':
            sum += numberOfAnimal;
            totalS += numberOfAnimal;
            break;

        default:
            break;
        }
    }

    cout << "Total: " << sum << " cobaias" << endl;
    cout << "Total de coelhos: " << totalC << endl;
    cout << "Total de ratos: " << totalR << endl;
    cout << "Total de sapos: " << totalS << endl;

    cout << fixed;

    cout << "Percentual de coelhos: " << setprecision(2) << (double)totalC / sum * 100 << " %" << endl;
    cout << "Percentual de ratos: " << setprecision(2) << (double)totalR / sum * 100 << " %" << endl;
    cout << "Percentual de sapos: " << setprecision(2) << (double)totalS / sum * 100 << " %" << endl;

    return 0;
}