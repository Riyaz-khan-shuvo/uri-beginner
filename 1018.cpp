#include <bits/stdc++.h>
using namespace std;
int main()
{
    int notes, dueNotes;
    scanf("%d", &notes);
    printf("%d\n", notes);
    printf("%d nota(s) de R$ 100,00\n", notes / 100);
    dueNotes = notes % 100;
    printf("%d nota(s) de R$ 50,00\n", dueNotes / 50);
    dueNotes = dueNotes % 50;
    printf("%d nota(s) de R$ 20,00\n", dueNotes / 20);
    dueNotes = dueNotes % 20;
    printf("%d nota(s) de R$ 10,00\n", dueNotes / 10);
    dueNotes = dueNotes % 10;
    printf("%d nota(s) de R$ 5,00\n", dueNotes / 5);
    dueNotes = dueNotes % 5;
    printf("%d nota(s) de R$ 2,00\n", dueNotes / 2);
    dueNotes = dueNotes % 2;
    printf("%d nota(s) de R$ 1,00\n", dueNotes);
    return 0;
}