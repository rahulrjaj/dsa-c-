#include <iostream>
using namespace std;

int main() {
    char ch;

    // Input character
    cout << "Enter a character: ";
    cin >> ch;

    if (ch>='a' && ch<='z') {
        // Check if the character is an uppercase alphabet
        cout << "1" << endl;
    } else if (ch>='A' && ch<='Z') {
        // Check if the character is a lowercase alphabet
        cout << "0" << endl;
    } else {
        // Neither uppercase nor lowercase alphabet
        cout << "-1" << endl;
    }

    return 0;
}





