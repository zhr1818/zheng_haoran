#include <iostream>
using namespace std;

int main()
{
   int total = 0;
   int i=1;
   int pingjunshu;
   int n;

    cout << "输入一个数值（9999结束循环）"<<endl;
    cin>>n;

   while(n!=9999)
   {

     total += n;
     pingjunshu=total/i;
     i++;
     cout << "输入一个数值（9999结束循环）"<<endl;
     cin >>n;
   }


   cout << "\n这" << --i << "个数值的平均数是： " << pingjunshu << endl;
}
