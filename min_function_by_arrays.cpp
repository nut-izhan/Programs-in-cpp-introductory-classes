#include <iostream>
using namespace std;

int main() {
    int min, number[3];

    for (int i = 0; i < 3; i++) {
        cout << "Enter a value in element: ";
        cin >> number[i]; 
    }
     
    min = number[0];

    for (int i = 1; i < 3; i++) {
        if (min > number[i]) { 
            min = number[i];
        } 
    }

    cout << "Minimum value given is: " << min << endl; 
    return 0;
}