#include "Date.hpp"

Date::Date(int m,int d,int y)
{
    month = m;
    day = d;
    year = y;
}
Date::Date()
{
    time_t now = time(0);
    tm *local = localtime(&now);
    
    month = 1 + local->tm_mon;
    day = local->tm_mday;
    year = 1970 + local->tm_year;
}

string Date::getDate()
{
    string date;
    
    const string MONTHS[] =
        { "January ", "February ", "March ", "April ", "May ", "June ",
        "July ", "August ", "September ", "October ", "November ", "December " };
    
    date.append(MONTHS[month+1]);
    date.append(to_string(day));
    date.append(", ");
    date.append(to_string(year));
    
    return date;
}
