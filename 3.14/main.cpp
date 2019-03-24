#include <iostream>
#include "Emloyee.h"

using namespace std;

int main()
{
	Employee a("a","b",1000);
	Employee b("b","b",2000);
	cout << a.getMoney() << endl;
	cout << b.getMoney() << endl;
	cout << a.getMoney2() << endl;
	cout << b.getMoney2() << endl;
	return 0;
}
