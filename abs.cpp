#include "abs.h"
#include <iostream>
using namespace std;

AbstractNumber* AbstractNumber::operator+(AbstractNumber& a)
{
 return &a;
}

AbstractNumber* AbstractNumber::operator*(AbstractNumber& a)
{
 return &a;
}

void AbstractNumber::print()
{
 
}

void AbstractNumber::SetNumber(double i)
{
}

double AbstractNumber::GetNumber()
{
return 0.0;
}
