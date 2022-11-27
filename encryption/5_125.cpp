#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void encode(const string &input, const string &encryptor, string &output)
{
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