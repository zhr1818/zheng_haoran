#include <iostream>
#include <cmath>

using namespace std;

double fahrenheit(double,double);

int main()
{
   double m;
   double b;

   cout<< "���������¶ȣ�";
   cin>>m;
   cout<< "�����¶�Ϊ��" <<fahrenheit(m,b)<<endl;
}

double fahrenheit(double c,double f)
{
    f=c*1.8+32;
    return f;

}

