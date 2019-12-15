#include <iostream>
#include <stdexcept>
#include <vector>
#include "Employee.h"
#include "BasePlusCommissionEmployee.h"
#include "CommissionEmployee.h"
#include "HourlyEmployee.h"
#include "PieceWorker.h"
#include "SalariedEmployee.h"
using namespace std;

int main ()
{
    vector<Employee *> employee(5);
    BasePlusCommissionEmployee bemployee("涂山","酥酥","520520",520520,0.8,3000.0);
    CommissionEmployee cemployee("涂山","雅雅","4563218",4546789,0.5);
    HourlyWorker hemployee("涂山","蓉蓉","465454646",53.0,456);
    PieceWorker pemployee("东方","月初","87987789",88.0,88);
    SalariedEmployee semployee("王权","富贵","51544454",54654.0);

    employee[0] = &bemployee;
    employee[1] = &cemployee;
    employee[2] = &hemployee;
    employee[3] = &pemployee;
    employee[4] = &semployee;

    for(int i=0;i<5;++i)
    {
        employee[i]->print();
        cout <<"\nearnings: "<<employee[i]->earnings() <<"\n\n";
    }
}
