#include <iostream>
#include <cctype>
using namespace std;

int main() {
    char ch;

    cout << "Enter a character: ";
    cin >> ch;

    if (isalpha(ch) && isupper(ch))
        cout << "Uppercase letter";
    else
        cout << "Not an uppercase letter";

    return 0;
}