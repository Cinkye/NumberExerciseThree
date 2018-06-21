#include "abs.h"
#include "real.h"
#include <iostream>
using namespace std;

RealNumber::RealNumber(float f=0)
{
 a = f;
}

AbstractNumber* RealNumber::add(AbstractNumber* other)
{
 AbstractNumber* tmp = new RealNumber;
 tmp->a = a + other->a;
 return tmp;
}

AbstractNumber* RealNumber::mul(AbstractNumber* other)
{
 AbstractNumber* tmp = new RealNumber;
 tmp->a = a * other->a;
 return tmp;
}

void RealNumber::print()
{
 cout << a << endl;
}

