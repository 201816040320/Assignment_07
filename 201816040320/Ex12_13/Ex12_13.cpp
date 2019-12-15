#include <iostream>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <vector>
using namespace std;

int main()
{
    vector<Package *> basepackage(3);
    Package package("雲兮","彦","天刃七号","天宫","天使之城","asd521521",520,99);
    TwoDayPackage tpackage("雲兮","彦","天刃七号","天宫","天使之城","asd521521",520,99,521);
    OvernightPackage opackage("雲兮","彦","天刃七号","天宫","天使之城","asd521521",520,99,1);

    basepackage[0] = &package;
    basepackage[1] = &tpackage;
    basepackage[2] = &opackage;

    for(int i=0;i<3;++i)
    {
        basepackage[i]->print();
        cout <<"总费用："<<basepackage[i]->calculateCost()<<"\n\n";
    }
}
