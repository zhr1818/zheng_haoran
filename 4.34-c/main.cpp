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

   cout << "��������η�: ";
   cin >> x;

   cout << "�����ۼ��������: ";
   cin >> m;


   while ( number < m )
   {
      i *= x;
      n *= number;
      e += i / n;
      number++;
   }

   cout << "e��" << x << "�η� is " << e << endl;
}
