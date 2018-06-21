#include "abs.h"
#include <iostream>
using namespace std;

AbstractNumber* AbstractNumber::add(AbstractNumber* a)
{
 return a;
}

AbstractNumber* AbstractNumber::mul(AbstractNumber* a)
{
 return a;
}

void AbstractNumber::print()
{
 cout << a <<endl;
}
