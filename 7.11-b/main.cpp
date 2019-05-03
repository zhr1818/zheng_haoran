#include <iostream>
#include <array>

using namespace std;

int main()
{
    array <int,15> bonus={1,3,6,7,1};
    for(int n=0;n<15;n++)
    {
        bonus[n]=bonus[n]+1;
    }
}
