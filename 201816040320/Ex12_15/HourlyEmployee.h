#ifndef HOURLYEMPLOYEE_H_INCLUDED
#define HOURLYEMPLOYEE_H_INCLUDED

#include <string>
#include "Employee.h"
using namespace std;

class HourlyWorker : public Employee
{
private:
    double wage;
    double hours;
public:
    HourlyWorker(const string &,const string &,const string &,
                 double =0.0,double =0.0);
    virtual ~HourlyWorker() {}

    void setWage(double);
    double getWage() const;

    void setHour(double);
    double getHour() const;

    virtual double earnings() const override;
    virtual void print() const override;
};


#endif // HOURLYEMPLOYEE_H_INCLUDED
