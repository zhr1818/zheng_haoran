#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   long double pi = 0.0;
   long double m = 1.0;
   long accuracy = 1000;


   cout << fixed << setprecision( 8 );


   cout << "Accuracy set at: " << accuracy << "\n\n����\t\tpiֵ\n";


   for ( long i = 1; i <= accuracy; i++ )
   {
      if ( i % 2 != 0 )//����
         pi += 4.0 / m;//�������
      else
         pi -= 4.0 / m;//ż�����


      cout << i << "\t\t" << pi << '\n';

      m += 2.0;
   }

}
