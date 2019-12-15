#include "TwoDayPackage.h"
#include <iostream>

using namespace std;
TwoDayPackage::TwoDayPackage(string a,string b,string c,string d,string e,string f,double g,double h,double i)
:Package(a,b,c,d,e,f,g,h)
{
    if(i>0.0)
        pjf=i;
    else
        pjf=0.0;
}
double TwoDayPackage::calculateCost()
{
    double a=Package::calculateCost();
    return a+pjf;
}

void TwoDayPackage::print()
{
    Package::print();
    cout<< "平寄费："<<pjf<<endl;
}
