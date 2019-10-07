#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int a = 3;
    cout << "a is " << a << endl;
    int& rA = a;
    rA = 5;
    cout << "a is " << a << endl;

    Person colline("Colline", "Waitire", 256);
    Person& rcolline = colline;
    rcolline.SetNumber(440);
    cout << "rcolline " << rcolline.GetName() << " " << rcolline.GetNumber() << endl;

    int* pA = &a;
    *pA = 4;
    cout << "a is " << a << endl;
    int b = 100;
    pA = &b;
    (*pA)++;
    cout << "a " << a << ", *pA " << *pA << endl;

    Person* pcolline = &colline;
    (*pcolline).SetNumber(119);
    pcolline->SetNumber(220); // using points to operator
    cout << "Colline: " << colline.GetName() << " " << colline.GetNumber() << endl;

    return 0;
}