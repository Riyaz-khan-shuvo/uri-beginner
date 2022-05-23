#include <iostream>

using namespace std;

int main()
{

    int n;
    int x, y, aux;
    int sum;

    while (true)
    {

        cin >> x;
        cin >> y;
        if (x <= 0 || y <= 0)
        {
            break;
        }
        if (x > y)
        {
            aux = x;
            x = y;
            y = aux;
        }
        sum = 0;
        for (int i = x; i <= y; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
    }
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int highRange , lowRange , sum = 0 , changeValue;

//     while (true)
//     {
//     cin>>highRange>>lowRange;

//     if (lowRange <=0 || highRange <=0)
//     {
//         break;
//     }
//     if (lowRange>highRange)
//     {
//         changeValue = lowRange;
//         lowRange = highRange;
//         highRange = changeValue;
//     }

//     for (int i = lowRange; i <= highRange; i++)
//     {
//         cout<<i<<" ";
//         sum += i;
//     }
//     cout<<"Sum="<<sum<<endl;
// }

//     return 0;
// }