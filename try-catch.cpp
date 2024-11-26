#include<iostream>
#include <string>
using namespace std;

int main () {
    int dividend, divisor, quotient;
    string error = "oo";
try
{
cout << "Line 8: Enter the dividend: ";
cin >> dividend;
cout << endl;


cout << "Line 11: Enter the divisor: ";
cin >> divisor;
cout << endl;

if (divisor == 0)
throw error;


quotient = dividend / divisor;
cout << "Quotient = " << quotient
<< endl;
}
catch (string ) 
{
cout << "Division by " << error<< endl;
}
   
    return 0;
}