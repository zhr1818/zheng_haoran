#include <iostream>
#include <array>
#include <iomanip>
using namespace std;

int main()
{
    array <int,5> bestScores={1,3,6,7,9};
    cout << "n" << "\t\t" << "bestScores[]"<<endl;
    for(int n=0;n<5;n++)
    {
     cout <<n<< setw(17)<<bestScores[n]<<endl;
    }

}
