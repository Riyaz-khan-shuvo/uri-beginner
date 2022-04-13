#include <bits/stdc++.h>
using namespace std;
int main()
{
    int numberOfEmployee, hour;
    double amount, result;
    cin >> numberOfEmployee >> hour >> amount;
    result = hour * amount;
    cout << "NUMBER = " << numberOfEmployee << endl;
    cout << fixed << "SALARY = U$ " << setprecision(2) << result << endl;
}