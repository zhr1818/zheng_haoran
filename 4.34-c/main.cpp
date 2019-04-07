#include <iostream>
using namespace std;

int main()
{
   int number = 1;
   int m;
   int n = 1;
   int x;
   double e = 1.0;
   double i = 1.0;

   cout << "输入所求次方: ";
   cin >> x;

   cout << "输入累加求和项数: ";
   cin >> m;


   while ( number < m )
   {
      i *= x;
      n *= number;
      e += i / n;
      number++;
   }

   cout << "e的" << x << "次方 is " << e << endl;
}
