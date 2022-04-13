#include <bits/stdc++.h>
using namespace std;
int main()
{
    int slNumber, amountOfItem;
    double totalAmount;
    cin >> slNumber >> amountOfItem;

    switch (slNumber)
    {
    case 1:
        cout << fixed << setprecision(2) << "Total: R$ " << 4.00 * amountOfItem << endl;
        break;
    case 2:
        cout << fixed << setprecision(2) << "Total: R$ " << 4.50 * amountOfItem << endl;
        break;
    case 3:
        cout << fixed << setprecision(2) << "Total: R$ " << 5.00 * amountOfItem << endl;
        break;
    case 4:
        cout << fixed << setprecision(2) << "Total: R$ " << 2.00 * amountOfItem << endl;
        break;
    case 5:
        cout << fixed << setprecision(2) << "Total: R$ " << 1.5 * amountOfItem << endl;
        break;
    }
    return 0;
}