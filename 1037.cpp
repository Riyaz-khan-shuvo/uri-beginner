#include <bits/stdc++.h>
using namespace std;
int main()
{
    double number;
    cin >> number;

    if (number < 0 || number > 100)
    {
        cout << "Fora de intervalo" << endl;
    }
    else if (number <= 25)
    {
        cout << "Intervalo [0,25]" << endl;
    }
    else if (number <= 50)
    {
        cout << "Intervalo (25,50]" << endl;
    }
    else if (number <= 75)
    {
        cout << "Intervalo (50,75]" << endl;
    }
    else
    {
        cout << "Intervalo (75,100]" << endl;
    }
    return 0;
}