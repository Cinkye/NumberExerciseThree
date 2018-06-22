#ifndef INT_H
#define INT_H
#include "real.h"
using namespace std;
class IntegerNumber : public RealNumber
{
 public:
  IntegerNumber(int);
  virtual AbstractNumber* operator+(AbstractNumber&);
  virtual AbstractNumber* operator*(AbstractNumber&);
  virtual void print();
  virtual void SetNumber(double);
  virtual double GetNumber();
 private:
  int integer;
};

 #endif
