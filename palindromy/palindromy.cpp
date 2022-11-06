#include <iostream>
#include <string>
using namespace std;

bool isPalindromic(const string &input)
{
    for (int i = 0; i < input.size() / 2; i++)
    {
        int k = input.size() - i - 1;
        if (input[i] != input[k])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string input;
    cout << "Provide an input string: ";
    cin >> input;

    if (isPalindromic(input) == true)
    {
        cout << "Input is a palyndrome.";
    }
    else
    {
        cout << "Input is not a palyndrome.";
    }
}