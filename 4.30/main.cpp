#include <iostream>

using namespace std;

int main()
{
   double r= 0;
   double pai = 3.14159;
   double d = 0 ;
   double c = 0;
   double s = 0;

   cout << "输入半径: ";
   cin >> r;


   d = 2 * r;
   c = 2 * pai * r;
   s = pai * r * r;

   cout << "直径等于： " << d;

   cout << "\n周长等于： " << c;


   cout << "\n面积等于： " << s << endl;
}
