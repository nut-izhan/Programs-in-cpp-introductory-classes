#include <iostream>
using namespace std;

int main() {
    int height;
    cout << "Enter the height of the arrow: ";
    cin >> height;

    
    for (int i = 0; i < height; i++) { // arrow head
        for (int j = 0; j < height - i - 1; j++) cout << " ";
        for (int k = 0; k < (2 * i + 1); k++) cout << "*";
        cout << endl;
    }

    
    for (int i = 0; i < height; i++) { // arrow tail
        for (int j = 0; j < height - 1; j++) cout << " ";
        cout << "*" << endl;
    }

    return 0;
}