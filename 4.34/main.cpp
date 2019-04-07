#include <iostream>
using namespace std;

int main()
{
   int number;
   int n = 1;


   cout << "输入一个正数: ";
   cin >> number;
   cout << number << "! is ";

   while ( number > 0 )
   {
      n *= number;
      number--;
   }

   cout << n<< endl;
}
