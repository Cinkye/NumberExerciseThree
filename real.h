#ifndef REAL_H
#define REAL_H
#include "abs.h"
using namespace std;

class RealNumber :public AbstractNumber
{
 public:
  RealNumber(double);
  virtual AbstractNumber* operator+(AbstractNumber&);
  virtual AbstractNumber* operator*(AbstractNumber&);
  virtual void print();
  virtual void SetNumber(double);
  virtual double GetNumber();
 private:
  double a;
};
#endif
