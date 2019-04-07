#include <iostream>
using namespace std;

int main()
{
   int total = 0;
   int number;
   int m;
   int i=1;


   cout << "输入一个数指定继续输入值的个数：";
   cin >> number;


   for ( i ; i <= number; i++ )
   {
     cout << "输入一个数值: ";
     cin >> m;
     total += m;
   }


   cout << "这" << number << "个数值的和是： " << total << endl;
}
