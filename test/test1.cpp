#include <iostream>
#include <string>

using namespace std;

int main()
{
    int liczba;
    while (liczba != 7)
    {
        cin >> liczba;
        cout << liczba << "\n";

        if (liczba % 2 != 0)
        {
            cout << "liczba jest nieparzysta\n";
        }
    }
    cout << "u said 7 bitch ";
}
