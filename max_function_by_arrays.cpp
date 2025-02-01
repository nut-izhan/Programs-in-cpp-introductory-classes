#include <iostream>
using namespace std;

int main () {

    int max, number[3];

    for (int i=0; i<=2; i++){

        cout << "Enter a value in element: ";
        cin >> number[i]; 
    }
     
    max = number [0];

    for (int i=1; i<=2; i++){
        if (max < number[i]) {
            max = number [i];
        } 
    }

    cout << "Maximum value given is: " << max << endl;

}