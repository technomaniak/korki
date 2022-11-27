#include <string>
#include <vector>
#include <iostream>

using namespace std;

int romanToInt(string input)
{

    int output = 0;

    for (int i = 0; i < input.size(); i++)
    {

        if (input[i] == 'M')
        {
            output += 1000;
        }

        if (input[i] == 'D')
        {
            output += 500;
        }

        if (input[i] == 'C')
        {
            if (input[i + 1] != 'M' && input[i + 1] != 'D')
            {
                output += 100;
            }
            else
            {
                if (input[i + 1] != 'D')
                {
                    output += 900;
                }
                else
                {
                    output += 400;
                }
                i++;
            }
        }

        if (input[i] == 'L')
        {
            output += 50;
        }

        if (input[i] == 'X')
        {
            if (input[i + 1] != 'C' && input[i + 1] != 'L')
            {
                output += 10;
            }
            else
            {
                if (input[i + 1] != 'L')
                {
                    output += 90;
                }
                else
                {
                    output += 40;
                }
                i++;
            }
        }

        if (input[i] == 'V')
        {
            output += 5;
        }

        if (input[i] == 'I')
        {
            if (input[i + 1] != 'V' && input[i + 1] != 'X')
            {
                output += 1;
            }
            else
            {
                if (input[i + 1] == 'X')
                {
                    output += 9;
                }
                else
                {
                    output += 4;
                }
                i++;
            }
        }
    }
    return output;
}

int main()
{
    string input;
    cin >> input;
    romanToInt(input);
    return 0;
}
