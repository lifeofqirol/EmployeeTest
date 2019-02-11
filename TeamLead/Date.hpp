#ifndef Date_hpp
#define Date_hpp
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

class Date
{
public:
    int month;
    int day;
    int year;
    
    Date(int,int,int);
    Date();
    
    string getDate();
};

#endif /* Date_hpp */
