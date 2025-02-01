#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter the number of terms in the Fibonacci sequence: ";
    cin >> n;

    int a = 0, b = 1;

    cout << "Fibonacci Sequence: " << endl;
    for (int i = 0; i <= n; i++) {
        cout << a << " " << endl;
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;

    return 0;
}
