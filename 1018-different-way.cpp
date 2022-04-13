#include <stdio.h>
int main()
{
    int notes[] = {100, 50, 20, 10, 5, 2, 1}, numberOfNotes = 0, totalMoney, i;
    scanf("%d", &totalMoney);
    i = 0;
    while (notes[i] >= 1)
    {
        numberOfNotes = 0;
        while (totalMoney >= notes[i])
        {
            totalMoney -= notes[i];
            numberOfNotes++;
        }
        printf("%d nota(s) de R$ %d,00\n", numberOfNotes, notes[i]);
        i++;
    }

    return 0;
}