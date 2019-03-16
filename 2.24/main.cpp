#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int mo = 0;

    cout << "输入一个整数：";
    cin >> number;

    mo = number%2;

    if(mo==0)
    cout << "\n这个数是偶数" <<endl;

    if(mo!=0)
    cout << "\n这个数是奇数" <<endl;

    return 0;
}
