#include <stdio.h>
int main()
{
    double totalMoney, notes[] = {100.0, 50.0, 20.0, 10.0, 5.0, 2.0, 1.0, 0.5, 0.25, 0.10, 0.05, 0.01};

    int t = 0, numberOfNotes;

    scanf("%lf", &totalMoney);

    printf("NOTAS:\n");
    
    totalMoney += 1e-9; 

    // 0.00000001 = 1e-9 1e-9 is an engineering notation to write a number in a more simplistic way and a standard way.

    if (totalMoney >= 0 && totalMoney <= 1000000.00)
    {
        t = 0;
        while (notes[t] >= 0.01)
        {

            numberOfNotes = 0;

            while (totalMoney >= notes[t])

            {

                totalMoney = totalMoney - notes[t];

                numberOfNotes++;
            }

            if (notes[t] == 1.0)

                printf("MOEDAS:\n");
            if (notes[t] >= 2.0)

                printf("%d nota(s) de R$ %.2f\n", numberOfNotes, notes[t]);
            else

                printf("%d moeda(s) de R$ %.2f\n", numberOfNotes, notes[t]);
            t++;
        }
    }

    return 0;
}