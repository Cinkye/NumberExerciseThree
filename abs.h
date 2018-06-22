#ifndef ABS_H
#define ABS_H

#include<iostream>
#include<cmath>
using namespace std;

class AbstractNumber
{
 public:
 virtual void print();
 virtual AbstractNumber* operator+(AbstractNumber&);
 virtual AbstractNumber* operator*(AbstractNumber&);
 virtual void SetNumber(double);
 virtual double GetNumber();
 private:
 protected:
};

#endif
