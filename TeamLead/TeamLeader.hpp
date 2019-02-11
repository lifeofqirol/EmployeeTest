#ifndef TeamLeader_hpp
#define TeamLeader_hpp
#include "Employee.hpp"
#include <string>
#include <iostream>
using namespace std;

class TeamLeader : public Employee
{
public:
    double monthlyBonus; //VARIABLES
    const int REQ_TRAIN_HOURS = 40;
    int trainingAttended;
    
    TeamLeader(string,string,string,double,int,double,int); //CONSTRUCTORS
    TeamLeader();
    ~TeamLeader(); //DESTRUCTOR
    
    double getMonthlyBonus(); //ACCESSORS
    const int getReqHours();
    int getAttendance();
    void setMonthlyBonus(double); //MUTATORS
    void setAttendance(int);
};

#endif /* TeamLeader_hpp */
