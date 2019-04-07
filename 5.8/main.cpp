#include <iostream>
using namespace std;

int main()
{
   int number;
   int n;
   int smallest=0;

   cout << "输入一个数(指定继续输入值的个数)：";
   cin >> number;
   smallest=number;

   for ( int i = 2; i <= number; i++ )
   {
      cout << "输入一个数：";
      cin >> n;


      if ( n < smallest )
         smallest = n;
   }

   cout << "\nThe smallest integer is: " << smallest << endl;
}
