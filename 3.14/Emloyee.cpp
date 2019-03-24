#include <iostream>
#include "Emloyee.h"

using namespace std;

class Employee
{
protected:
	string firstName;
	string givenName;
	int money;

public:
Employee(string firstName,string givenName,int money)
{
    this->firstName = firstName;
    this->givenName = givenName;
    if(money < 0)
    money = 0;
    this->money = money;
}
void setFirstName (string firstName)
{
    this->firstName = firstName;
}
string getFirstName()
{
    return this->firstName;
}

void setGivenName (string givenName)
{
    this->givenName = givenName;
}
string getGivenName ()
