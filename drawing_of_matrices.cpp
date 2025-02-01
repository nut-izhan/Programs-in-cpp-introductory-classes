#include <iostream>
using namespace std;


int main(){

    int u, i, n;
    u = 1;
     while (u <= 4) // for rows.
     {
         i = 1;
         n = 1;

         while (i <= 2) // for coloums.
         {
             cout << n << " ";
             n = n + u;
             i = i + 1;

         }
         cout << endl;
         u = u + 1;
     }
return 0;
}
