#include <bits/stdc++.h>
using namespace std;
int main()
{
    int monthNumber;
    cin >> monthNumber;
    string month[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    for (int i = 1; i <= 12; i++)
    {
        if (monthNumber == i)
        {
            cout << month[i - 1] << endl;
            break;
        }
    }

    return 0;
}