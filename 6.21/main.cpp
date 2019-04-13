#include <iostream>
#include <cmath>
using namespace std;

bool iseven(int);

int main()
{
  int number;
  int b;

  cout<< "输入一个数来限定接下来输入整数的个数: ";
  cin>>number;

  for(int i=1; i<=number; i++)
  {cout<< "输入yi个整数: ";
  cin>>b;

  cout<<iseven(b)<<endl;
  }

}

bool iseven(int b)
{
    int m;
    m=b%2;
    if(m==0)
    return true;
    return false;
}
