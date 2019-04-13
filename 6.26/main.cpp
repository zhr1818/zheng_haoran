#include <iostream>
#include <cmath>

using namespace std;

double celsius(double,double);

int main()
{
   double m;
   double b;

   cout<< "输入华氏温度：";
   cin>>b;
   cout<< "摄氏温度为：" <<celsius(m,b)<<endl;
}

double celsius(double c,double f)
{
    c=(f-32)/1.8;
    return c;

}
