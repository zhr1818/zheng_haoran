#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    cout << "输入2个数进行比较：";
    cin >> number1 >> number2;

    if ( number1 > number2 )
        cout << number1 << " is large" << endl;

    if ( number1 < number2 )
        cout << number2 << " is large" << endl;

    if ( number1 == number2 )
        cout << "These numbers are equal " << endl;

    return 0;
}
