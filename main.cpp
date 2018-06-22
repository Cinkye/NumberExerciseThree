#include "real.h"
#include "int.h"
#include <iostream>
using namespace std;

int main()
{
 //Teating class RealNumber
 cout << "Testing class RealNumber" << endl;
 AbstractNumber* q1 = new RealNumber(3.7);
 AbstractNumber* q2 = new RealNumber(2.65);
 AbstractNumber* q3 = new RealNumber(1);
 AbstractNumber* q4 = new RealNumber(0);
 cout << "q1 = ";
 q1->print();
 cout << endl;
 cout << "q2 = " << q2->GetNumber() << endl;
 q3=(*q2+(*q1));
 cout <<endl << "q1 + q2 = ";
 q3->print();
 cout << endl << "q1 * q2 = ";
 q4=(*q1*(*q2));
 q4->print();
 cout << endl;

 //Testing class IntegerNumber
 cout << "Testing class IntegerNumber" << endl;
 AbstractNumber* q5 = new IntegerNumber(3);
 AbstractNumber* q6 = new IntegerNumber(2);
 AbstractNumber* q7 = new IntegerNumber(1);
 AbstractNumber* q8 = new IntegerNumber(0);
 cout << "q1 = ";
 q5->print();
 cout << endl;
 cout << "q2 = " << q6->GetNumber() << endl;
 q7=(*q6+(*q5));
 cout << endl << "q1 + q2 = ";
 q7->print();
 cout << endl << "q4 = ";
 q8=(*q5*(*q6));
 q8->print();
 cout << endl;
 return 0;
}
 
