#include <iostream>
using namespace std;

int main()
{
   double side1=0;
   double side2=0;
   double side3=0;
   bool sanjiaoxing;

   cout << "Enter side 1: ";
   cin >> side1;

   cout << "Enter side 2: ";
   cin >> side2;

   cout << "Enter side 3: ";
   cin >> side3;


   if ( side1 + side2 > side3 )
   {
      if ( side2 + side3 > side1 )
      {
         if ( side3 + side1 > side2 )
            sanjiaoxing = true;
      }
   }


   if ( sanjiaoxing= true )
      cout << "这三个值可以表示一个三角形三边." << endl;
   else
      cout << "这三个值不可以表示一个三角形三边." << endl;
}
