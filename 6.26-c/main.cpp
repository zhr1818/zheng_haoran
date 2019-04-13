#include <iostream>
#include <cmath>

using namespace std;

double fahrenheit(double,double);
double celsius(double,double);

int main()
{
   double c=0.0;
   double f=32.0;
   cout<< "ÉãÊÏÎÂ¶È\t" << "»ªÊÏÎÂ¶È\n";

   for(c;c<=100;c++)
   {

    cout<< c << "\t\t"<< fahrenheit(c,f) <<endl;

   }
   cout<< "»ªÊÏÎÂ¶È\t" << "ÉãÊÏÎÂ¶È\n";

   for(f;f<=212;f++)
   {
    cout<< f << "\t\t"<< celsius(c,f) <<endl;
   }
}

double fahrenheit(double c,double f)
{
    f=c*1.8+32;
    return f;

}
double celsius(double c,double f)
{
    c=(f-32)/1.8;
    return c;

}
