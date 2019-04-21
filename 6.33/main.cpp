#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int flip();

int main()
{
   int head = 0;
   int tail= 0;

   srand( time( 0 ) );


   for ( int n = 1; n <= 100; n++ )
   {
      if ( flip() == 0 )
      {
         ++tail;
         cout << "±³Ãæ  ";
      }
      else
      {
         ++head;
         cout << "ÕıÃæ  ";
      }

      if ( n % 10 == 0 )
         cout << endl;
   }


   cout << "\nThe total number of Heads was " << head
      << "\nThe total number of Tails was " << tail << endl;
}


int flip()
{
   return rand() % 2;
}
