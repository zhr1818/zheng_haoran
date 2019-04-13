#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double,double);

int main()
{
    double a;
    double b;

    cout << "输入两条直角边: ";
    cin >>a>>b;
    cout << "直角边为" <<a<< "和" <<b<< "的斜边边长为: "<<hypotenuse(a,b) <<endl;

}

double hypotenuse(double a ,double b )
{
    double c;
    c=sqrt(a*a+b*b);
    return c;
}
