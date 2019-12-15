#ifndef PACKAGE_H_INCLUDED
#define PACKAGE_H_INCLUDED
#include <iostream>
using namespace std;

class Package
{
private:
    string Sender;
    string Recipients;
    string Address;
    string City;
    string State;
    string Postal_Code;
    double Weight;
    double Average_Price;
public:
    Package(string,string,string,string,string,string,double,double );
    virtual double calculateCost();
    double getWeight();
    virtual void print();

};


#endif // PACKAGE_H_INCLUDED
