#include <iostream>
#include <stdexcept>
#include "PieceWorker.h"
using namespace std;

PieceWorker::PieceWorker(const string &first, const string &last,
   const string &ssn,double Wage,double Pieces)
   :Employee(first,last,ssn)
{
    setWage(Wage);
    setPieces(Pieces);
}

void PieceWorker::setWage(double a)
{
    if(a>0.0)
        wage = a;
    else
        throw invalid_argument("Wage must be > 0.0");
}

double PieceWorker::getWage() const
{
    return wage;
}

void PieceWorker::setPieces(double a)
{
    if(a >= 0.0)
        pieces = a;
    else
        throw invalid_argument("Pieces must be >= 0.0");
}

double PieceWorker::getPieces()const
{
    return pieces;
}

double PieceWorker::earnings()const
{
    return getWage()*getPieces();
}

void PieceWorker::print() const
{
    cout << "piece worker: ";
    Employee::print();
    cout << "\nWage: "<<getWage()<<"; Pieces: "<<getPieces();
}
