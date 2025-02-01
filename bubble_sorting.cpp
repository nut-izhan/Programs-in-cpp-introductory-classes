#include <iostream>
using namespace std;

int main() { 
    int i, u, w;
    int a[4] = {18, 29, 71, 7}; 

    cout << "Original array: ";
    for (i = 0; i < 4; i++) {
        cout << a[i] << " "; 
    }
    cout << endl;

    for (u = 3; u > 0; u--) { 
        for (i = 0; i < u; i++) {
            if (a[i] > a[i + 1]) {
                
                w = a[i];
                a[i] = a[i + 1];
                a[i + 1] = w;
            }
        }
        
       cout << "Sorting steps: ";
        for (int j = 0; j < 4; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }

    cout << "Sorted array: ";
    for (i = 0; i < 4; i++) {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0; 
}