#include "abs.h"
#include "real.h"
#include <iostream>
using namespace std;

RealNumber::RealNumber(double f=0)
{
 a = f;
}

AbstractNumber* RealNumber::operator+(AbstractNumber& other)
{
 AbstractNumber* tmp = new RealNumber;
 tmp->SetNumber(GetNumber() + other.GetNumber());
 return tmp;
}

AbstractNumber* RealNumber::operator*(AbstractNumber& other)
{
 AbstractNumber* tmp = new RealNumber;
 tmp->SetNumber(GetNumber() * other.GetNumber());
 return tmp;
}

void RealNumber::print()
{
 cout << GetNumber() << endl;
}

void RealNumber::SetNumber(double i)
{
 a = i;
}

double RealNumber::GetNumber()
{
 return a;
}
