#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

inline double circleArea(double);

int main()
{
    double r;
    cout << "����Բ�İ뾶��";
    cin >>r;

    cout << "Բ������ǣ�"<< circleArea(r) <<endl;

}
inline double circleArea(double a)
{
    double s;
    double pi=3.1415926;
    return s=pi*a*a/2;
}
