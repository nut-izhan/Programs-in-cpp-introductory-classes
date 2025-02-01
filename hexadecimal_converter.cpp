#include <iostream>
using namespace std;

int main() {
    int decimalNumber, hexa = 16, remainder, product = 1;

    cout << "Enter a non zero decimal number: ";
    cin >> decimalNumber;

    while(decimalNumber != 0){

        remainder = decimalNumber % 16;
        hexa = hexa + (remainder * product);
        decimalNumber = decimalNumber / 2;
        product *= 10;

    }
     cout << "The number in the hexadecimal form is: "<< hexa;



    return 0;
}

