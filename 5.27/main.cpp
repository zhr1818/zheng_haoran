#include <iostream>
using namespace std;

int main()
{
   for ( int count = 1; count <= 10; count++ )
   {
      if ( count != 5 )
         cout << count << " ";
   }

   cout << "\nUsed if condition to skip printing 5" << endl;
}
