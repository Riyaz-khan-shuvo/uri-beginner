#include <bits/stdc++.h>
using namespace std;
int main()
{
    char name1[15], name2[15], name3[15];
    cin >> name1;
    cin >> name2;
    cin >> name3;

    if (name1[0] == 'v' && name2[0] == 'a' && name3[0] == 'c')
    {
        cout << "aguia" << endl;
    }
    if (name1[0] == 'v' && name2[0] == 'a' && name3[0] == 'o')
    {
        cout << "pomba" << endl;
    }
    if (name1[0] == 'v' && name2[0] == 'm' && name3[0] == 'o')
    {
        cout << "homem" << endl;
    }
    if (name1[0] == 'v' && name2[0] == 'm' && name3[0] == 'h')
    {
        cout << "vaca" << endl;
    }
    if (name1[0] == 'i' && name2[0] == 'i' && name3[2] == 'm')
    {
        cout << "pulga" << endl;
    }
    if (name1[0] == 'i' && name2[0] == 'i' && name3[2] == 'r')
    {
        cout << "lagarta" << endl;
    }
    if (name1[0] == 'i' && name2[0] == 'a' && name3[0] == 'h')
    {
        cout << "sanguessuga" << endl;
    }
    if (name1[0] == 'i' && name2[0] == 'a' && name3[0] == 'o')
    {
        cout << "minhoca" << endl;
    }
    return 0;
}