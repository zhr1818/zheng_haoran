#include <iostream>
#include <cmath>
using namespace std;

bool multiple(int,int);

int main()
{
  int a;
  int b;

  cout<< "输入两个整数: ";
  cin>>a>>b;

  cout<<multiple(a,b);

}

bool multiple(int a,int b)
{
    int m;
    m=b%a;
    if(m==0)
    return true;
    return false;
}
