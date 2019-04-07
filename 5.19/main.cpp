#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   long double pi = 0.0;
   long double m = 1.0;
   long accuracy = 1000;


   cout << fixed << setprecision( 8 );


   cout << "Accuracy set at: " << accuracy << "\n\n项数\t\tpi值\n";


   for ( long i = 1; i <= accuracy; i++ )
   {
      if ( i % 2 != 0 )//余数
         pi += 4.0 / m;//奇数项加
      else
         pi -= 4.0 / m;//偶数项减


      cout << i << "\t\t" << pi << '\n';

      m += 2.0;
   }

}
