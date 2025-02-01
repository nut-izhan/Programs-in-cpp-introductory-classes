#include <iostream>
using namespace std;

void swap(int *x, int *y){

    int t = *x;
    *x = *y;
    *y = t;

}


int main() {

    int a, b;
    void swap(int *, int *);

    cout << "Enter the first value: ";
    cin >> a;

    cout << "Enter the second value: ";
    cin >> b;

    swap(&a, &b);

    cout << "Exchanged values would be: " << endl;
    cout << "1) Value of First term:  " << a << endl;
    cout << "2) Value of Second term:  " << b << endl;


}