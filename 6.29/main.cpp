#include <iostream>
#include <iomanip>
using namespace std;

bool isPrime( int );

int main()
{
   int m = 1;

   cout << "The prime numbers from 1 to 10000 are:" << endl;
   cout << "\t" <<2;

   for ( int loop = 3; loop < 10000; loop += 2 )
   {
      if ( isPrime( loop ) )
      {
         m++;
         cout << "\t" << loop;

         if ( m % 10 == 0 )
            cout << endl;
      }
   }
   cout << endl << "Total of " << m
      << " prime numbers between 1 and 10000." << endl;
}


bool isPrime( int n )
{

   for ( int loop2 = 2; loop2 <= n / 2; loop2++ )
   {

      if ( n % loop2 == 0 )
         return false;
   }
   return true;
}
