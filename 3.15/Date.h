#include <iostream>

#include <string>

using namespace std;

class Date

{
public:
    explicit Date(int year,int month,int day);
    void setDateYear(int);
    int getDateYear()const;
    void setDateMonth(int);
    int getDateMonth();
    void setDateDay(int);
    int getDateDay();
    void displayMessage() const;

};
