#include <iostream>
#include <string>
using namespace std;

int any2dec(const string &input, const int &base_system)
{
    int output = 0;

    for (int i = 0; i < input.size(); i++)
    {
        if (input[i] <= '9')
        {
            output = output * base_system + input[i] - '0';
        }
        else
        {
            output = output * base_system + input[i] - 'A' + 10;
        }
    }
    return output;
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
    int input_base, output_base, i, output;
    string result = "";
    string input_number;

    // number is 10111
    cout << "Input a number: ";
    cin >> input_number;
    // in this case 2
    cout << "Input the numbers base: ";
    cin >> input_base;
    // in this case 10
    cout << "Input requested base: ";
    cin >> output_base;

    output = any2dec(input_number, input_base);
    cout << dec2any(output, output_base) << "\n";
}