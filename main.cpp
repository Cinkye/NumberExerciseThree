#include "real.h"
#include <iostream>
using namespace std;

int main()
{
 AbstractNumber* q1 = new RealNumber(3);
 AbstractNumber* q2 = new RealNumber(2);
 AbstractNumber q3;
 q3=*(q1->add(q2));
 q3.print();
 q3=*(q2->mul(q1));
 q3.print();
 return 0;
}
 
