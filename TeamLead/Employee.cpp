#include "Employee.hpp"

Employee::Employee(string name,string id,string date, double pay, int when) //CONSTRUCTOR
{
    employeeName = name;
    employeeID = id;
    hireDate = date;
    hourlyPay = pay;
    shift = when;
}
Employee::Employee() { generateID(); hourlyPay = 14; } //DEFAULT CONSTRUCTOR + MINIMUM WAGE :(
Employee::~Employee() {} //DESTRUCTOR

string Employee::getName() { return employeeName; } //ACCESSORS
string Employee::getID() { return employeeID; }
string Employee::getHireDate() { return hireDate; }
double Employee::getHourlyWage() { return hourlyPay; }
int Employee::getShift() { return shift; }

void Employee::setName(string name) { employeeName = name; } //MUTATORS
void Employee::setID(string id) { employeeID = id; }
void Employee::setHireDate(string date) { hireDate = date; }
void Employee::setWage(double wage) { hourlyPay = wage; }
void Employee::setShift(int when) { shift = when; }

void Employee::generateID() //GENERATOR
{
    char id[11];
    int random;
    srand((unsigned int)(time(0)));
    
    for (size_t i = 0; i < 9; i++)
    {
        random = rand()%(62);
        if (random < 26)
            id[i] = 'a' + random;
        else if (random < 52)
            id[i] = 'A' + random - 26;
        else
            id[i] = '0' + random - 52;
    }
    
    employeeID = id;
}
