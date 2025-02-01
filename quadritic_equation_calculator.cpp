#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c;
    double deter;
    double x1, x2;
    int sqrt_deter;

    cout << "Enter the value of first value: ";
    cin >> a;
    if (a == 0)
    {
        cout << "Coefficient 'x^2' cannot be zero." << endl;
        cout << "It is a linear equation";
        return 0;
    }

    cout << "Enter the value of b: ";
    cin >> b;

    cout << "Enter the value of c: ";
    cin >> c;

    deter = (b * b -  4 * a * c);
    sqrt_deter = sqrt (deter);

    cout << "Determinant: " << sqrt_deter  << endl;

    if ( deter  > 0)
    {
        x1 = ( -(b) + sqrt_deter) / 2 * a;
        x2 = ( -(b) - sqrt_deter) / 2 * a;
        cout << "The roots are real and different: First Root = " << x1 << ", Second Root = " << x2 << endl;
    }

    else if ( deter  == 0)
    {

        x1 =  -(b) / 2 * a;
        x2 =  -(b) / 2 * a;

        cout << "The roots are real and equal: First Root = " << x1 << ", Second Root = " << x2 << endl;
    }

    else
    {
        cout << "Roots are complex root!";
    }

    return 0;
}
