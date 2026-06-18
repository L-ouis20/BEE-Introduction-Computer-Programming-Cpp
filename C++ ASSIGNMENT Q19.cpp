#include <iostream>
#include <bitset>
using namespace std;

int main() {
    string binary;

    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = stoi(binary, 0, 2);

    cout << "Decimal = " << decimal << endl;
    cout << "Hexadecimal = " << hex << decimal << endl;
    cout << "Octal = " << oct << decimal << endl;

    return 0;
}