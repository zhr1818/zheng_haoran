#include <iostream>
using namespace std;

int main()
{
   int total = 0;
   int number;
   int m;
   int i=1;


   cout << "����һ����ָ����������ֵ�ĸ�����";
   cin >> number;


   for ( i ; i <= number; i++ )
   {
     cout << "����һ����ֵ: ";
     cin >> m;
     total += m;
   }


   cout << "��" << number << "����ֵ�ĺ��ǣ� " << total << endl;
}
