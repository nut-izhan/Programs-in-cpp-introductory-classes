#include <iostream>
using namespace std;

int main() {

    int n;
    double sum = 0;

    cout << "Enter the value of number of terms: ";
    cin >> n;

    for (int i = 1; i < n; i++) {
        sum = 1 / (i*i);
    cout << sum << endl;
    }


    cout << "The sum of the sequence: " << sum << endl;

    return 0;
}
