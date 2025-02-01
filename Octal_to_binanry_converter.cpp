#include <iostream>
using namespace std;
int main() {
    int octalNumber, decimal = 0, base = 1;

    cout << "Enter an octal number: ";
    cin >> octalNumber;
    while (octalNumber > 0) {
        decimal += (octalNumber % 10) * base;
        octalNumber = octalNumber / 10;
        base *= 8;
    }
    cout << "The binary equivalent is: ";
    if (decimal == 0) {
        cout << 0;
    } else {
        for (int i = 4; i >= 0; i--) {
            cout << ((decimal >> i) & 1);
        }
    }

}
