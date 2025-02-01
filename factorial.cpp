#include <iostream>
using namespace std;

int main(){

    int number, factorial = 1;

    cout << "Enter the value of the factorial: ";
    cin >> number;

    if (number < 0)
    {
        cout << "The factorial cannot be determined of a number less then zero.";
    }
    else if (number <= 1){
        cout << number << "!=" << factorial;
    }
    else {
        for (int i = number; i >= 2; i--){
            factorial = factorial * i;
        }
        cout << factorial;
    }

    return 0;

}