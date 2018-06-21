#ifndef REAL_H
#define REAL_H
#include "abs.h"
using namespace std;

class RealNumber :public AbstractNumber
{
 public:
  RealNumber(float);
  virtual AbstractNumber* add(AbstractNumber*);
  virtual AbstractNumber* mul(AbstractNumber*);
  virtual void print();
};

#endif
