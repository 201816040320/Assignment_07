#ifndef SALARIEDEMPLOYEE_H_INCLUDED
#define SALARIEDEMPLOYEE_H_INCLUDED

#include <string>
#include "Employee.h"
using namespace std;

class SalariedEmployee : public Employee
{
private:
    double weeklySalary;
public:
    SalariedEmployee(const string &, const string &, const string &, double = 0.0 );
    virtual ~SalariedEmployee(){}

    void setWeeklySalary(double);
    double getWeeklySalary() const;

    virtual double earnings() const override;
    virtual void print() const override;
};

#endif // SALARIEDEMPLOYEE_H_INCLUDED
