#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ddd;
    cin >> ddd;
    switch (ddd)
    {
    case 11:
        cout << "Sao Paulo" << endl;
        break;
    case 19:
        cout << "Campinas" << endl;
        break;
    case 21:
        cout << "Rio de Janeiro" << endl;
        break;
    case 27:
        cout << "Vitoria" << endl;
        break;
    case 31:
        cout << "Belo Horizonte" << endl;
        break;
    case 32:
        cout << "Juiz de Fora" << endl;
        break;
    case 61:
        cout << "Brasilia" << endl;
        break;
    case 71:
        cout << "Salvador" << endl;
        break;
    default:
        cout << "DDD nao cadastrado" << endl;
        break;
    }

    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string ddd[] = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte"};
//     int number[] = {61, 71, 11, 21, 32, 19, 27, 31}, enterCode, i;

//     cin >> enterCode;
//     for (i = 0; i < 8; i++)
//     {
//         if (enterCode == number[i])
//         {
//             cout << ddd[i] << endl;
//         }
//         if (i == 7 && enterCode != number[i])
//         {
//             cout << "DDD nao cadastrado" << endl;
//         }
//     }

//     return 0;
// }