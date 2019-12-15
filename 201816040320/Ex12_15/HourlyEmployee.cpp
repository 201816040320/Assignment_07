#include <iostream>
#include <stdexcept>
#include "HourlyEmployee.h"
using namespace std;

HourlyWorker::HourlyWorker(const string &first,const string &last,
   const string &ssn,double Wage, double Hours)
   :Employee(first,last,ssn)
{
    setWage(Wage);
    setHour(Hours);
}

void HourlyWorker::setWage(double a)
{
    if(a>0.0)
        wage = a;
    else
    throw invalid_argument("Wage must be > 0.0");
}

double HourlyWorker::getWage() const
{
    return wage;
}

void HourlyWorker::setHour(double a)
{
    if(a >=0.0)
        hours= a;
    else
        throw invalid_argument("a must be >= 0.0");
}

double HourlyWorker::getHour() const
{
    return hours;
}

double HourlyWorker::earnings() const
{
    if(getHour() >= 40)
        return 1.5*getHour()*getWage();
    else
        return getHour()*getWage();
}

void HourlyWorker::print() const
{
    cout << "hourly employee: ";
    Employee::print();
    cout << "Wage: "<< getWage()<<"; Hour: "<< getHour();
}
