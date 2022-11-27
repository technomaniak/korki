#include <iostream>
#include <fstream>
#include <string>

// 123

using namespace std;

void encode(const string &input, const string &encryptor, string &output)
{
    int ignore = 0;
    // iterating through input
    for (int i = 0; i < input.size(); i++)
    {
        int move = (int)encryptor[(i - ignore) % encryptor.size()] - '0';

        // checking if number is within range of encryption
        if (input[i] >= 'A' && input[i] <= 'Z')
        {
            if (input[i] + move > 'Z')
            {
                int temp = 'Z' - (input[i]);
                temp = move - temp - 1;
                while (true)
                {
                    if ('A' + temp > 'Z')
                    {
                        temp = temp - 26;
                    }
                    else
                    {
                        output[i] = 'A' + temp;
                        break;
                    }
                }
            }
            else
            {
                output[i] = input[i] + move;
            }
        }
        else
        {
            ignore++;
        }
    }
}

int main()
{
    string input;
    string move = "0";

    ifstream wejscie("dane.txt");
    ofstream wyjscie("wyjscie.out");

    while (!wejscie.eof())
    {
        getline(wejscie, input);

        cout << "Klucz: ";
        cin >> move;

        string output = input;

        encode(input, move, output);
        wyjscie << output;
    }
}