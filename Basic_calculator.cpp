#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double num1, num2;
    char O;

    cout << "First Value Input=";
    cin >> num1;

    cout << "Enter an Operator:";
    cin >> O;

    cout << "Second Value Input=";
    cin >> num2;
    double result;

    if (O == '+'){result = num1 + num2;}
    else if (O == '-'){result = num1 - num2;}
    else if (O == '*'){result = num1 * num2;}
    else if (O == '/'){result = num1 / num2;}
    
    else {cout << "Invalid Operator";}

    cout << result;
    return 0;
}