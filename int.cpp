#include "abs.h"
#include "real.h"
#include "int.h"
#include <iostream>
using namespace std;

IntegerNumber::IntegerNumber(int i=0):RealNumber(0.0)
{
 integer = i;
}

AbstractNumber* IntegerNumber::operator+(AbstractNumber& other)
{
 AbstractNumber* tmp = new IntegerNumber;
 tmp->SetNumber(GetNumber() + other.GetNumber());
 return tmp;
}

AbstractNumber* IntegerNumber::operator*(AbstractNumber& other)
{
 AbstractNumber* tmp = new IntegerNumber;
 tmp->SetNumber(GetNumber() * other.GetNumber());
 return tmp;
}

void IntegerNumber::print()
{
 cout << integer << endl;
}

void IntegerNumber::SetNumber(double i)
{
 integer = i;
}

double IntegerNumber::GetNumber()
{
 return integer;
}
