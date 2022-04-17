#include <bits/stdc++.h>
using namespace std;

void taxCalculator(double salary, double taxFreeAmount, double previousTax, double Percentage)
{
    double taxAmount, tax;
    taxAmount = (salary - taxFreeAmount);
    tax = previousTax + (taxAmount * Percentage);
    cout << setprecision(2) << "R$ " << tax << endl;
}

int main()
{
    double salary, tax, taxAmount;
    cin >> salary;

    cout << fixed;
    if (salary >= 0.00 && salary <= 2000.00)
    {
        cout << "Isento" << endl;
    }
    if (salary >= 2000.01 && salary <= 3000.00)
    {
        taxCalculator(salary, 2000.00, 0.00, 0.08);
    }
    if (salary >= 3000.01 && salary <= 4500.00)
    {
        taxCalculator(salary, 3000.00, 80.00, .18);
    }
    if (salary > 4500.00)
    {
        taxCalculator(salary, 4500.00, 350.00, .28);
    }

    return 0;
}