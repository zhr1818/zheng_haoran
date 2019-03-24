#include <iostream>

#include "Date.h"

using namespace std;


Date::Date(int year, int month, int day)
{

}
void Date::setDateYear(int year)
{
    dateYear = year;
}
int Date::getDateYear() const
{
    return dateYear;
}
void Date::setDateMonth(int month)
{
    if(month>=1&month<=12)
    {
        dateMonth = month;
    }
    else
    {
        month==1;
    }

}
int Date::getDateMonth() const
{
    return dateMonth;
}
void Date::setDateDay(int day)
{
    dateDay = day;
}
int Date::getDateDay() const
{
    return dateDay;
}
void GradeBook::displayMessage() const
{
    cout << getDateYear() << "/" << getDateMonth() << "/" << getDateDay() << endl;
}



