#include <iostream>
using namespace std;

int main() {
    int decimalNumber, binary = 0, remainder, product = 1;

    cout << "Enter a non zero decimal number: ";
    cin >> decimalNumber;

    while(decimalNumber != 0){

        remainder = decimalNumber % 2;
        binary = binary + (remainder * product);
        decimalNumber = decimalNumber / 2;
        product *= 10;

    }
     cout << "The number in the binary form is: "<< binary;



    return 0;
}
