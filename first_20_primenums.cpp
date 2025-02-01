#include <iostream>
using namespace std;

int main() {
    int count = 0;
    int num;


    for (num = 2; count <= 20; num++) {

        int isPrime = 1;

        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
            }
        }


        if (isPrime && num > 1) {
            cout << num << " ";
            count++;
        }
    }

    cout << endl;
    return 0;
}
