#include <iostream>

using namespace std;

int main()
{
   int counter = 1;
   int number=0;
   int largest=0;

   while ( counter <= 10 )
   {
      cout << "Enter the number : ";
      cin >> number;
      counter=counter+1;

     if ( number > largest )
         largest = number;
   }

   cout << "Largest is " << largest << endl;
}
