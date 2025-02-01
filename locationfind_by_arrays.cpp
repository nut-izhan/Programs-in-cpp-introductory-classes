#include <iostream>
using namespace std;

int find ( int x[], int a) {

        int p = 0;
        for (int c = 0; c <= 9; c++){
            if (a == x[c]) {
                p = c; 
            }
        }
     if (p == 0) {
                cout << "Number not found"; 

            }
            else {
                cout << "Number found at the position: " << p + 1;
            }
        
        }

int main () {

    int find (int[], int);
    int arr[10], i ,n;

    cout << "Enter the values for the array: " << endl;
    for (i = 0; i <= 9; i++){
        cin >> arr[i];
        }
    cout << "Enter the number to find: " << endl;
    cin >> n; 

    find (arr, n); 

    
}

