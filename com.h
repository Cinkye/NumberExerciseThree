#ifndef COM_H
#define COM_H
#include "abs.h"
#include <iostream>
#include <cmath>
using namespace std;

class ComplexNumber : public AbstractNumber
{
 public:
 ComplexNumber(double=0,double=0);
 ~ComplexNumber();
 virtual void print();
 virtual AbstractNumber* operator+(AbstractNumber&);
 virtual AbstractNumber* operator*(AbstractNumber&);
 virtual void SetNumber(double=0);
 void SetVir(double=0);
 virtual double GetNumber();
 double GetVir();
 private:
 double real;
 double vir;
 protected:
};

#endif
