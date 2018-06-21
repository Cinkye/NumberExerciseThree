#ifndef ABS_H
#define ABS_H

#include<iostream>
#include<cmath>
using namespace std;

class AbstractNumber
{
 public:
 virtual void print();
 virtual AbstractNumber* add(AbstractNumber*);
 virtual AbstractNumber* mul(AbstractNumber*);
 float a;
 private:
 protected:
};

#endif
