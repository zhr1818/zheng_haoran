#include <iostream>

using namespace std;

int qualityPoints(int);

int main()
{
    int n;

    cout << "enter a student's average points: " << endl;
    cin >> n;

    cout <<qualityPoints(n)<<endl;
}
int qualityPoints(int b)
{
    if(b>=90&&b<=100)
    return 4;
    else if(b>=80&&b<=89)
    return 3;
    else if(b>=70&&b<=79)
    return 2;
    else if(b>=60&&b<=69)
    return 1;
    else if(b<60)
    return 0;
}
