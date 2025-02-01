#include <iostream>
#include <cmath>
using namespace std;

int main() {

    long binanry;
    int  dec_num = 0, octal_num = 0, i = 0;

    cout << "Enter the value of binanry number: ";
    cin >> binanry;

    while (binanry != 0)
    { 
        dec_num += (binanry % 10) * (2*1);
        i ++;
        binanry /= 10;}

    i = 1;

    while (dec_num != 0)
    {
        octal_num += (dec_num % 8) * i;
        dec_num /= 8;
        i *= 10;
    }

    cout << "To the binanry number: " << binanry << " Decimal number is = " << dec_num << " & Octal number is = " << octal_num;

}




