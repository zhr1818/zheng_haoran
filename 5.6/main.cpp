#include <iostream>
using namespace std;

int main()
{
   int total = 0;
   int i=1;
   int pingjunshu;
   int n;

    cout << "����һ����ֵ��9999����ѭ����"<<endl;
    cin>>n;

   while(n!=9999)
   {

     total += n;
     pingjunshu=total/i;
     i++;
     cout << "����һ����ֵ��9999����ѭ����"<<endl;
     cin >>n;
   }


   cout << "\n��" << --i << "����ֵ��ƽ�����ǣ� " << pingjunshu << endl;
}
