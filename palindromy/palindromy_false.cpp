#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

bool countpalyndromes(string input)
{

    for (int i = (input.size() / 2) - 1; i >= 0; i--)
    {
        if (input[i] != input[input.size() - i - 1])
        {
            return false;
        }
    }

    return true;
}

string dec2any(int input, int base_system)
{
    string output = "";

    while (input > 0)
    {
        int rest = input % base_system;

        if (rest < 10)
        {
            output.insert(0, 1, '0' + rest);
        }
        else
        {
            output.insert(0, 1, 'A' - 10 + rest);
        }
        input = input / base_system;
    }
    return output;
}

int main()
{
    int number, result, maxcount = 0;
    string number2;

    ifstream in("dane.txt");
    ofstream out("wyniki4.txt");

    while (!in.eof())
    {
        int count = 0;

        in >> number;

        for (int i = 2; i <= 16; i++)
        {
            number2 = dec2any(number, i);

            if (countpalyndromes(number2) == true)
            {
                count++;
            }
        }

        if (count > maxcount)
        {
            result = number;
            maxcount = count;
        }
    }
    cout << maxcount << "\n";
    cout << result;
    out << result;
}