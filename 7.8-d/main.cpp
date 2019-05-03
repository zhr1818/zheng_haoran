#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    int sum=0;
    array <int,100> temperatures={1,2,3,2,3};

    cout << "n" << "\t\t" << "temperatures[]"<<endl;
    for(int n=0;n<100;n++)
    {
     sum+=temperatures[n];
     cout <<n<< setw(17)<<temperatures[n]<<endl;
    }
    cout << "sum is: " << sum;

}
