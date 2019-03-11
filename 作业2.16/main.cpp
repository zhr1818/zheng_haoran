#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    int sum = 0;
    int sub = 0;
    int mul = 0;
    int div = 0;

    cout << "输入第一个数：";
    cin >> number1;

    cout << "输入第二个数；";
    cin >> number2;

    sum = number1 + number2;
    sub = number1 - number2;
    mul = number1 * number2;
    div = number1 / number2;

    cout << "sum= " << sum <<endl;
    cout << "sub= " << sub <<endl;
    cout << "mul= " << mul << endl;
    cout << "div= " << div << endl;

    return 0;
}
