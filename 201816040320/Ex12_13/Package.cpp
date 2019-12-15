#include "Package.h"
#include <iostream>
using namespace std;

Package::Package(string a,string b,string c,string d,string e,string f,double g,double h)
:Sender(a),Recipients(b),Address(c),City(d),State(e),Postal_Code(f)
{
    if(g>0.0)
        Weight=g;
    else
        Weight=0.0;
    if(h>0.0)
        Average_Price=h;
    else
        Average_Price=0.0;
}

double Package::calculateCost()
{
    return Weight*Average_Price;
}

double Package::getWeight()
{
    return Weight;
}

void Package::print()
{
    cout << "寄件人："<<Sender<<endl;
    cout << "收件人："<<Recipients<<endl;
    cout << "地址："<<Address<<endl;
    cout << "所在城市："<<City<<endl;
    cout << "所在州："<<State<<endl;
    cout << "邮政编码："<<Postal_Code<<endl;
    cout << "重量："<<Weight<<endl;
    cout << "每盎司费用："<<Average_Price<<endl;
}
