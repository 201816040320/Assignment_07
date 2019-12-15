#ifndef BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
#define BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED

#include <string>
#include "CommissionEmployee.h"
using namespace std;

class BasePlusCommissionEmployee : public CommissionEmployee
{
private:
    double baseSalary;
public:
    BasePlusCommissionEmployee(const string &,const string &,
       const string &, double =0.0,double =0.0,double =0.0);
    virtual ~BasePlusCommissionEmployee() {}

    void setBaseSalary(double);
    double getBaseSalary() const;

    virtual double earnings() const override;
    virtual void print() const override;
};

#endif // BASEPLUSCOMMISSIONEMPLOYEE_H_INCLUDED
