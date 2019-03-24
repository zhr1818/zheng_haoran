#include <iostream>
#include "Account.h"
using namespace std;

int main()
{  
  Account zhenghaoran(150);
  Account wangsicong(600);
    
  cout<<"郑浩然的初始余额为: "<<zhenghaoran.getBalance()<<endl;
  cout<<"王思聪的初始余额为: "<<wangsicong.getBalance()<<endl;
    
  zhenghaoran.credit(600);
  wangsicong.debit(400);
  
  zhenghaoran.displayMessage();
  wangsicong.displayMessage();
}
