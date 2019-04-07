#include <iostream>
using namespace std;

int main()
{
   int side1=0;
   int side2=0;
   int side3=0;
   bool zhijiaosanjiaoxing;
   int a=side1*side1;
   int b=side2*side2;
   int c=side3*side3;

   cout << "Enter side 1: ";
   cin >> side1;

   cout << "Enter side 2: ";
   cin >> side2;

   cout << "Enter side 3: ";
   cin >> side3;


   if (  c=(a+b) )
   zhijiaosanjiaoxing= true;
   else if ( b=(a+c) )
    zhijiaosanjiaoxing= true;
   else if ( a=(b+c) )
    zhijiaosanjiaoxing= true;


   if ( zhijiaosanjiaoxing= true )
      cout << "这三个值可以表示一个直角三角形三边." << endl;
   else
      cout << "这三个值不可以表示一个直角三角形三边." << endl;
}
