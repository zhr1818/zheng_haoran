#include <iostream>
#include <cmath>
using namespace std;

double hypotenuse(double,double);

int main()
{
    double a;
    double b;

    cout << "��������ֱ�Ǳ�: ";
    cin >>a>>b;
    cout << "ֱ�Ǳ�Ϊ" <<a<< "��" <<b<< "��б�߱߳�Ϊ: "<<hypotenuse(a,b) <<endl;

}

double hypotenuse(double a ,double b )
{
    double c;
    c=sqrt(a*a+b*b);
    return c;
}
