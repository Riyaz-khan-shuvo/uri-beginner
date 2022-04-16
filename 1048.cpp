#include <bits/stdc++.h>
using namespace std;

void salaryCal(double salary, int percentage)
{
    double newSalary = salary + (salary * percentage) / 100;
    cout << setprecision(2) << "Novo salario: " << newSalary << endl;
    cout << setprecision(2) << "Reajuste ganho: " << newSalary - salary << endl;
    cout << "Em percentual: "
         << percentage << " %" << endl;
}

int main()
{
    double salary, newSalary, increment;
    int percentage;

    cin >> salary;
    cout << fixed;
    if (salary > 0 && salary <= 400.00)
    {
        salaryCal(salary, 15);
    }
    else if (salary <= 800.00)
    {
        salaryCal(salary, 12);
    }
    else if (salary <= 1200.00)
    {
        salaryCal(salary, 10);
    }
    else if (salary <= 2000.00)
    {
        salaryCal(salary, 7);
    }
    else if (salary > 2000.00)
    {
        salaryCal(salary, 4);
    }
    return 0;
}