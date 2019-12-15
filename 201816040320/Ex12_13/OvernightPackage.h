#ifndef OVERNIGHTPACKAGE_H_INCLUDED
#define OVERNIGHTPACKAGE_H_INCLUDED
#include "Package.h"
#include <iostream>
using namespace std;

class OvernightPackage :public Package
{
private:
    double ExtraFee;
public:
    OvernightPackage(string,string,string,string,string,string,double,double,double);
    double calculateCost();
    void print();
};


#endif // OVERNIGHTPACKAGE_H_INCLUDED
