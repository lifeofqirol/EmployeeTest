#include "TeamLeader.hpp"
using namespace std;

TeamLeader::TeamLeader(string name,string id,string date,double pay,int when, double bonus, int attended)
{ //SPECIFIED OBJECT
    setName(name);
    setID(id);
    setHireDate(date);
    setWage(pay);
    setShift(when);
    monthlyBonus = bonus;
    trainingAttended = attended;
}
TeamLeader::TeamLeader() { generateID(); setWage(14); } //DEFAULT CONSTRUCTOR
TeamLeader::~TeamLeader() {} //DESTRUCTOR

double TeamLeader::getMonthlyBonus() { return monthlyBonus; } //GET
const int TeamLeader::getReqHours() { return REQ_TRAIN_HOURS; }
int TeamLeader::getAttendance() { return trainingAttended; }

void TeamLeader::setMonthlyBonus(double bonus) { monthlyBonus = bonus; } //SET
void TeamLeader::setAttendance(int attended) { trainingAttended = attended; }
