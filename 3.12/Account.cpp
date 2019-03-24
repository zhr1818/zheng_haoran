#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(int balance)
{
	if(balance>=0)
	{
    accountBalance=balance;
	}
	else
	{
    cout<<"你的初始余额无效"<<endl;
    accountBalance = 0;
	} 
}
void Account::credit(int _credit)
{
	accountBalance=accountBalance+_credit;
}
void Account::debit(int _debit)
{
	if(debit<=accountBalance)
    {
    accountBalance=accountBalance-_debit;
    }
    else
    {
    cout <<"Debit amount exceeded account balance."<<endl;
	accountBalance=accountBalance;
    }
}
int Account::getBalance()
{
	return accountBalance;
}
void Account::displayMessage()
{
	cout<<"你的账户余额为： "<<getBalance()<<endl;
}

