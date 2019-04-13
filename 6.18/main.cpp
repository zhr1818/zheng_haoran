#include <iostream>

using namespace std;

int integerPower( int, int );

int main()
{
   int exponent;
   int base;

   cout << "Enter base and exponent: ";
   cin >> base >> exponent;
   cout << base << " to the power " << exponent << " is: "
      << integerPower( base, exponent ) << endl;
}


int integerPower( int a, int b )
{
   int product = 1;

   for ( int n = 1; n <= b; n++ )
      product *= a;

   return product;
}
