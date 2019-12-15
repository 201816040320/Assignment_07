#ifndef TWODAYPACKAGE_H_INCLUDED
#define TWODAYPACKAGE_H_INCLUDED
#include "Package.h"
using namespace std;

class TwoDayPackage :public Package
{
private:
    double pjf;
public:
    TwoDayPackage(string,string,string,string,string,string,double,double,double);
    double calculateCost();
    void print();
};

#endif // TWODAYPACKAGE_H_INCLUDED
