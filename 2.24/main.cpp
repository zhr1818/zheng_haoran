#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    int mo = 0;

    cout << "����һ��������";
    cin >> number;

    mo = number%2;

    if(mo==0)
    cout << "\n�������ż��" <<endl;

    if(mo!=0)
    cout << "\n�����������" <<endl;

    return 0;
}
