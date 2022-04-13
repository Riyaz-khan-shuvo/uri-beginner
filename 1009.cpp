#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
int main()
{
    char name[25];
    double salary, totalSell, result;
    gets(name);
    scanf("%lf", &salary);
    scanf("%lf", &totalSell);
    result = salary + ((totalSell * 15) / 100);
    printf("TOTAL = R$ %.2lf\n", result);
    return 0;
}