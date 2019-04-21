#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string daoxu(string);

int main()
{
    string n;

    cout << "enter a number: " << endl;
    cin >> n;

    cout <<daoxu(n)<<endl;
}
string daoxu(string b)
{
    reverse(b.begin(),b.end());
    return b;

}
