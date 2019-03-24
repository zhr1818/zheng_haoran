#include<iostream>

#include<string>
using namespace std;

class Account
{
public:
    Account(int balance);
    void credit(int);
	void debit(int);
	int getBalance() ;
	void displayMessage() ; 
private:
    int accountBalance;  
};


