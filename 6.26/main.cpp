#include <iostream>
#include <cmath>

using namespace std;

double celsius(double,double);

int main()
{
   double m;
   double b;

   cout<< "���뻪���¶ȣ�";
   cin>>b;
   cout<< "�����¶�Ϊ��" <<celsius(m,b)<<endl;
}

double celsius(double c,double f)
{
    c=(f-32)/1.8;
    return c;

}
