#include <iostream>

using namespace std;

int main()
{
    int number1 = 0;
    int number2 = 0;
    int number3 = 0;
    int sum = 0;
    int average = 0;
    int product = 0;
    int smallest = 0;
    int largest = 0;

    cout << "Input three different integers£º";
    cin >> number1 >> number2 >> number3;

    sum = number1 + number2 + number3;
    cout << "Sum is " << sum << endl;

    average = (number1 + number2 + number3)/3;
     cout << "Average is " << average << endl;

    product = number1 * number2 * number3 ;
    cout << "Product is " << product << endl;

    if (number1>number2)
{
    smallest = number2;
    largest = number1;
}
else
{
    smallest = number1;
    largest = number2;
}
    if (largest>number3)
{
        largest = largest;
}
else
{
    largest = number3;
}
    if (smallest<number3)
{
    smallest = smallest;
}
else
{
    smallest = number3;
}
    cout << "Smallest is " << smallest << endl;
    cout << "Largest is " << largest << endl;

    return 0;
}
