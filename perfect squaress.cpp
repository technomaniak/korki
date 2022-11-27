#include <iostream>

using namespace std;

int numSquares(int input)
{
    int out = 0;
    int repeated = 0;
    int result = 0;

    while (out != input)
    {
        int divide = 0;

        while ((divide + 1 + repeated) * (divide + 1 + repeated) <= input - out)
        {
            divide++;
        }

        out += (divide + repeated) * (divide + repeated);

        if (out > input)
        {
            repeated += 1;
            result = 0;
            out = 0;
        }
        result++;
    }

    return result;
}

int main()
{
    int input;
    cin >> input;
    numSquares(input);
    return 0;
}