#include <iostream>

using namespace std;

int main()
{
   int jiecheng = 1;


   cout << "n\tn!\n";


   for ( int m = 1; m <= 5; m++ )
   {
      jiecheng *= m;


      cout << m << "\t" << jiecheng << "\n" ;
   }
}
