#include "OvernightPackage.h"
#include <iostream>
using namespace std;

OvernightPackage::OvernightPackage(string a,string b,string c,string d,string e,string f,double g,double h,double i)
:Package(a,b,c,d,e,f,g,h)
{
    if(i>0.0)
        ExtraFee=i;
    else
        ExtraFee=0.0;
}

double OvernightPackage::calculateCost()
{
    double a= Package::getWeight();
    double b= Package::calculateCost()+a*ExtraFee;
    return b;
}

void OvernightPackage::print()
{
    Package::print();
    cout <<"每盎司的额外费用："<<ExtraFee<<endl;
}
