#include <bits/stdc++.h>
using namespace std;
int main()
{
    double a, b, c, result;
    scanf("%lf %lf %lf", &a, &b, &c);
    a *= 2;
    b *= 3;
    c *= 5;
    result = (a + b + c) / (2 + 3 + 5);
    printf("MEDIA = %.1lf\n", result);
    return 0;
}