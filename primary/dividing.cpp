#include <iostream>
#include <string>
using namespace std;

int findDividing(int &input)
{
    while (input > 1)
    {
        int divide = 2;
        while (divide <= input)
        {
            if (input % divide == 0)
            {
                cout << divide << "\n"; // cout 2 input = 22
                input = input / divide; // 22/2=11
                break;                  // exit current loop
            }
            divide++;
        }
    }
    return 0;
}

int main()
{
    int input;
    cout << "Provide an input number: ";
    cin >> input;
    findDividing(input);
}