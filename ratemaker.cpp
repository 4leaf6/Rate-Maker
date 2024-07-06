#include <cstdio>
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int nNumberofArgs, char* pszArgs[])
{
    int base, tax, pax, nights, commission, rate;
    float price;
   
    cout << "Enter base rate: ";
    cin >> base;
    cout << "Enter tax value: ";
    cin >> tax;
    cout << "Enter number of persons: ";
    cin >> pax;
    cout << "Enter number of nights planned: ";
    cin >> nights;
    cout << "Enter agency commision in per cent: ";
    cin >> commission;

        if (nights <= 7)
        {

            rate = (base * nights) + (pax * tax * nights);
            price = rate * (commission + 100)/100;
            cout << "Final customer price: " << price << endl;
            system("PAUSE");
            return 0;

        }
        else 

            rate = (base * nights) + (pax * tax * 7);
            price = rate * (commission + 100)/100;
            cout << "Final customer price: " << price << endl;
            system("PAUSE");
            return 0;

    
    
    return 0;
}