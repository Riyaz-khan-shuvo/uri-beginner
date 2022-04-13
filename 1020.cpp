#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age, day, month, year;
    cin >> age;

    if (age >= 365)
    {
        year = age / 365;
        age = age % 365;
    }
    if (age >= 30)
    {
        month = age / 30;
        age = age % 30;
    }
    day = age;
    cout << year << " ano(s)" << endl;
    cout << month << " mes(es)" << endl;
    cout << day << " dia(s)" << endl;
    return 0;
}