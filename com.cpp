#include "com.h"
#include "abs.h"
#include <iostream>
using namespace std;

ComplexNumber::ComplexNumber(double a, double b)
{
 SetNumber(a);
 SetVir(b);
}

ComplexNumber::~ComplexNumber()
{

}

AbstractNumber* ComplexNumber::operator+(AbstractNumber& a)
{
 AbstractNumber* tmp = new ComplexNumber(0);
 tmp->SetNumber(GetNumber()+a.GetNumber());
 tmp->SetVir(GetVir()+a.GetVir());
 return tmp;
}

AbstractNumber* ComplexNumber::operator*(AbstractNumber& a)
{
 AbstractNumber* tmp = new ComplexNumber(0);
 tmp->SetNumber(GetNumber()*a.GetNumber()-GetVir()*a.GetVir());
 tmp->SetVir(GetNumber()*a.GetVir()+GetVir()*a.GetNumber());
 return tmp;
}

void ComplexNumber::print()
{
 cout << GetNumber() << "+" << GetVir() << "i" << endl;
}

void ComplexNumber::SetNumber(double i)
{
real = i;
}

void ComplexNumber::SetVir(double i)
{
vir = i;
}

double ComplexNumber::GetNumber()
{
return real;
}

double ComplexNumber::GetVir()
{
return vir;
}
