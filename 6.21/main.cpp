#include <iostream>
#include <cmath>
using namespace std;

bool iseven(int);

int main()
{
  int number;
  int b;

  cout<< "����һ�������޶����������������ĸ���: ";
  cin>>number;

  for(int i=1; i<=number; i++)
  {cout<< "����yi������: ";
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
