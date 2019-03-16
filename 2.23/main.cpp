#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int smallest = 0;
    int largest = 0;

    cout << "输入5个整数：";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    if (num1>num2)
{
    smallest = num2;
    largest = num1;
}
else
{
    smallest = num1;
    largest = num2;
}
    if (largest>num3)
{
        largest = largest;
}
else
{
    largest = num3;
}
    if (smallest<num3)
{
    smallest = smallest;
}
else
{
    smallest = num3;
}
    if (largest>num4)
{
    largest = largest;
}
else
{
    largest = num4;
}
    if (smallest<num4)
{
    smallest = smallest;
}
else
{
    smallest = num4;
}
    if (largest>num5)
{
    largest = largest;
}
else
{
    largest = num5;
}
    if (smallest<num5)
{
    smallest = smallest;
}
else
{
    smallest = num5;
}
    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;

    return 0;
}
