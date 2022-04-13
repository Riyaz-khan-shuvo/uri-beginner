#include <bits/stdc++.h>
using namespace std;
int main()
{
    int p1Code, p1Number, p2Code, p2Number;
    double p1Price, p2Price , result;

    scanf("%d %d %lf", &p1Code, &p1Number, &p1Price);
    scanf("%d %d %lf", &p2Code, &p2Number, &p2Price);

    result = (p1Number * p1Price) + (p2Number * p2Price);

    printf("VALOR A PAGAR: R$ %.2lf\n" , result);


    return 0;
}