#include <iostream>
using namespace std;


double calculate(double num1, double num2, char op) {
    switch (op) {
        case '+':
            return num1 + num2;
        case '-':
            return num1 - num2;
        case '*':
            return num1 * num2;
        case '/':
            if (num2 != 0) {
                return num1 / num2;
            } else {
                cout << "Cannot be divided by zero" << endl;
                return 0; 
            }
        default:
            cout << "Error: Invalid operator!" << endl;
            return num1, num2 , op; 
    }
}

int main() {
    double num1, num2;
    char op;

   
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator: ";
    cin >> op;

    
    double result = calculate(num1, num2, op);
    cout << "Result: " << result << endl;

    return 0;
}