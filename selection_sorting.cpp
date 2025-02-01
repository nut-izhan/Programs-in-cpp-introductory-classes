#include <iostream>
using namespace std;

int main() {
    int i, u, w; 
    int a[4] = {49, 38, 66, 16}; 

    cout << "Original array: ";
    for (i = 0; i < 4; i++) { 
        cout << a[i] << " "; 
    }
    cout << endl;

    for (u = 0; u < 4; u++) { 
        int min = u; 
        for (i = u + 1; i < 4; i++) { 
            if (a[i] < a[min]) { 
                min = i;
            }
        }
        if (min != u) { 
            w = a[u]; 
            a[u] = a[min]; 
            a[min] = w;
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