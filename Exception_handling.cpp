#include <iostream>
#include <cassert>
#include<stdexcept>


using namespace std;

int main()
{
int dividend, divisor, quotient;

cout << "Line 6: Enter the dividend: ";
cin >> dividend;
cout << endl;



cout << "Line 9: Enter the divisor: ";
cin >> divisor;
cout << endl;

//Using Assert 
assert(divisor != 0);
quotient = dividend / divisor;
cout << "Quotient = " << quotient
<< endl;
return 0;
}