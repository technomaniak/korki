#include <iostream>
#include <string>
using namespace std;

bool checkIfPrimary(int input)
{
    int divide = 2;
    while (divide * 2 < input)
    {
        if (input % divide == 0)
        {
            return false;
        }
        divide++;
    }
    return true;
}

int main()
{
    int inputRangeStart, inputRangeEnd;

    cout << "Provide an input range beginning: ";
    cin >> inputRangeStart;
    cout << "\nProvide an input range end: ";
    cin >> inputRangeEnd;

    for (int i = inputRangeStart; i <= inputRangeEnd - 2; i++)
    {
        if (checkIfPrimary(i) == true && checkIfPrimary(i + 2) == true)
        {
            cout << "\n"
                 << i << " " << i + 2;
        }
    }
}