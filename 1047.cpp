// by using c

#include <stdio.h>
int main()
{
    int a, b, c, d, diff;
    scanf("%d %d %d %d", &a, &b, &c, &d);

    diff = ((c * 60) + d) - ((a * 60) + b);
    if (diff <= 0)
    {
        diff = diff + (24 * 60);
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", diff / 60, diff % 60);
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int a, b, c, d;
//     int dif;
//     scanf("%d %d %d %d", &a, &c, &b, &d);
//     dif = ((b * 60) + d) - ((a * 60) + c);
//     if (dif <= 0)
//         dif += 24 * 60;
//     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif / 60, dif % 60);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int sH, sM, eH, eM, timeHour, timeMinute;
//     cin >> sH >> sM >> eH >> eM;

//     if (sH < eH)
//     {
//         timeHour = eH - sH;
//         if (sM < eM)
//         {
//             timeMinute = eM - sM;
//         }
//         else
//         {
//             timeHour = eH - sH - 1;
//             timeMinute = 60 - (sM - eM);
//         }
//         cout << "O JOGO DUROU " << timeHour << " HORA(S) E " << timeMinute << " MINUTO(S)" << endl;
//     }
//     else if (sH > eH)
//     {
//         timeHour = 24 - (sH - eH);
//         if (sM < eM)
//         {
//             timeMinute = eM - sM;
//         }
//         else
//         {
//             timeHour = 24 - (sH - eH + 1);
//             timeMinute = 60 - (sM - eM);
//         }
//         cout << "O JOGO DUROU " << timeHour << " HORA(S) E " << timeMinute << " MINUTO(S)" << endl;
//     }
//     else if (sH == eH)
//     {
//         timeHour = 0;
//         if (sM < eM)
//         {
//             timeMinute = eM - sM;
//         }
//         else
//         {
//             timeMinute = 60 - (sM - eM);
//         }
//         cout << "O JOGO DUROU " << timeHour << " HORA(S) E " << timeMinute << " MINUTO(S)" << endl;
//     }

//     return 0;
// }