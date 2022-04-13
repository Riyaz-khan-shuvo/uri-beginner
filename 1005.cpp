#include <bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    double a, b, result;
    scanf("%lf %lf", &a, &b);
    a *= 3.5;
    b *= 7.5;
    result = (a + b) / (3.5 + 7.5);
    printf("MEDIA = %.5lf\n", result);
    return 0;
}