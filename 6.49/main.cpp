#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

inline double circleArea(double);

int main()
{
    double r;
    cout << "输入圆的半径：";
    cin >>r;

    cout << "圆的面积是："<< circleArea(r) <<endl;

}
inline double circleArea(double a)
{
    double s;
    double pi=3.1415926;
    return s=pi*a*a/2;
}
