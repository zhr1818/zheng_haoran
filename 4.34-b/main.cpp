#include <iostream>
using namespace std;

int main()
{
   int number = 1;
   int m;
   int n = 1;
   double e = 1.0;

   cout << "输入累加求和的项数: ";
   cin >> m;


   while ( number < m )
   {
      n *= number;
      e += 1.0/ n;
      number++;
   }

   cout << "e is " << e << endl;
}
