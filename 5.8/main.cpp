#include <iostream>
using namespace std;

int main()
{
   int number;
   int n;
   int smallest=0;

   cout << "����һ����(ָ����������ֵ�ĸ���)��";
   cin >> number;
   smallest=number;

   for ( int i = 2; i <= number; i++ )
   {
      cout << "����һ������";
      cin >> n;


      if ( n < smallest )
         smallest = n;
   }

   cout << "\nThe smallest integer is: " << smallest << endl;
}
