#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, largestNumber, position;
    int totalNumber[100];
    for (int i = 0; i < 100; i++)
    {
        scanf("%d", &n);
        totalNumber[i] = n;
    }
    largestNumber = totalNumber[0];
    for (int i = 0; i < 100; i++)
    {
        if (totalNumber[i] > largestNumber)
        {
            largestNumber = totalNumber[i];
            position = i+1;
        }
    }
    printf("%d\n%d\n", largestNumber, position);
    return 0;
}