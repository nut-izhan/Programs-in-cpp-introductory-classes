#include <iostream>
using namespace std;


int main() { // Problem Solving

    int amount;
    int house_rent;
    int medical_allowance;
    int conviance;
    int dearness;

    cout <<"Enter Employee's monthly salary: Rs. ";
    cin >> amount;
    cout<< endl;

    if (amount <= 80000){ // Amount less then 80k Rs. Monthly
     house_rent = 20;
     medical_allowance = 10;
     conviance = 15;
     dearness = 5;

    house_rent = amount * house_rent / 100;
     cout << "House rent additional value(20% of Monthly Salary): Rs."<< house_rent << endl;
     cout<< endl;

    medical_allowance = (amount * medical_allowance / 100);
     cout << "Medical allowance additional value(10% of Monthly Salary): Rs."<< medical_allowance << endl;
     cout<< endl;

    conviance = (amount * conviance / 100);
    cout << "conviance additional value(15% of Monthly Salary): Rs."<< conviance << endl;
    cout<< endl;

    dearness = (amount * dearness / 100);
    cout << "Dearness additional value(05% of Monthly Salary): Rs."<< dearness << endl;
    cout<< endl;

    cout <<"Total salary of the employee: Rs." <<amount + house_rent + medical_allowance + conviance + dearness;
    cout<< endl;}


    else { // Amount exceeding 80k Rs. Monthly
     house_rent = 30;
     medical_allowance = 15;
     conviance = 20;
     dearness = 10;

    house_rent = (amount * house_rent / 100);
     cout << "House rent additional value(30% of Monthly Salary): Rs."<< house_rent << endl;
     cout<< endl;

    medical_allowance = (amount * medical_allowance / 100);
     cout << "Medical allowance additional value(15% of Monthly Salary): Rs."<< medical_allowance << endl;
     cout<< endl;
    conviance = (amount * conviance / 100);
    cout << "conviance additional value(20% of Monthly Salary): Rs."<< conviance << endl;
     cout<< endl;
    dearness = (amount * dearness / 100);
    cout << "Dearness additional value(10% of Monthly Salary): Rs."<< dearness << endl;
     cout<< endl;
    cout <<"Total salary of the employee is: Rs." <<amount + house_rent + medical_allowance + conviance + dearness;
    cout<< endl;

    }


  return 0;
}
