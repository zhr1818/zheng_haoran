#include <iostream>
using namespace std;

int main()
{
   int ji = 1;


   for ( int i = 1; i <= 15; i += 2 )
      ji *= i;

   cout << "从1到15中奇数的乘积为: "
      << ji << endl;
}
