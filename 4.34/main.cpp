#include <iostream>
using namespace std;

int main()
{
   int number;
   int n = 1;


   cout << "����һ������: ";
   cin >> number;
   cout << number << "! is ";

   while ( number > 0 )
   {
      n *= number;
      number--;
   }

   cout << n<< endl;
}
