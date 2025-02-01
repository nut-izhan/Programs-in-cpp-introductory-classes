#include <iostream>

using namespace std;

int main()
{
    double a, b, c;
    cout << "Enter Temperature in Farenheit: ";
    cin >> a;

    b = 32;
    c = 0.555555555;

    int result;

    result = (a-b)*c;

    cout << result << " Centigrade";




    return 0;
}
