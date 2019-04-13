#include <iostream>
#include <cmath>

using namespace std;

double fahrenheit(double,double);

int main()
{
   double m;
   double b;

   cout<< "输入摄氏温度：";
   cin>>m;
   cout<< "华氏温度为：" <<fahrenheit(m,b)<<endl;
}

double fahrenheit(double c,double f)
{
    f=c*1.8+32;
    return f;

}

