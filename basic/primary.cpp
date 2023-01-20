#include <iostream>
#include <string>
using namespace std;

int main()
{
    int liczba, divider = 3;
    cin >> liczba;

    if (liczba < 0)
    {
        cout << "towja srata";
        return 0;
    }

    if (liczba == 2)
    {
        cout << "liczba jest pierwsza";
        return 0;
    }

    if (liczba % 2 != 0)
    {
        cout << "liczba nie jest pierwsza";
        return 0;
    }

    while (divider <= liczba / 2)
    {
        if (liczba % divider == 0)
        {
            cout << "liczba nie jest pierwsza";
            return 0;
        }
        divider += 2;
    }
    cout << "liczba jest pierwsza";
}