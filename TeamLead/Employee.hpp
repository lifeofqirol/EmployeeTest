#ifndef Employee_hpp
#define Employee_hpp
#include <string>
#include <iostream>
using namespace std;

class Employee
{ //PRIVATE:
    string employeeName; //VARIABLES
    string employeeID;
    string hireDate;
    double hourlyPay;
public:
    int shift;
    
    Employee(string,string,string,double,int); //CONSTRUCTORS
    Employee();
    ~Employee(); //DESTRUCTOR
    
    string getName(); //ACCESSORS
    string getID();
    string getHireDate();
    double getHourlyWage();
    int getShift();
    void setName(string); //MUTATORS
    void setHireDate(string);
    void setID(string);
    void setWage(double);
    void setShift(int);
    void generateID(); //UNIQUE ID
};

#endif /* Employee_hpp */
