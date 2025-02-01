#include <iostream>
using namespace std; 

int main(){
     
    int number;
    cout << "Enter number of terms of fibonacci sequence: ";
    cin >> number;

    int a = 0, b = 1;
    for(int i = 0; i <= number; i++){
        int next = a + b;
        a = b; 
        b = next;
    }
    cout << endl;

    cout << "Reverse Fibonacci Sequence: "; 
    for ( int i = number - 1; i >= 0; i--){
        cout << b << " ";
        int previous = a;
        a = b - a;
        b = previous;
    } 

    cout << endl;
    return 0;

    
}