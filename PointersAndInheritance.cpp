#include "Person.h"
#include "Tweeter.h"
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    Person Colline("colline", "wait", 256);
    Person & rColline = Colline;
    Person* pColline = &Colline;

    Tweeter CollineWait ("Colline", "Wait", 789, "@collinewait");
    Person* pCollineWait = &CollineWait;
    Person& rpCollineWait = CollineWait;
    Tweeter& rtCollineWait = CollineWait;

    cout << "rColline " << rColline.GetName() << endl;
    cout << "pColline " << pColline->GetName() << endl;
    cout << "CollineWait " << CollineWait.GetName() << endl;
    cout << "rpCollineWait " << rpCollineWait.GetName() << endl;
    cout << "rtCollineWait " << rtCollineWait.GetName() << endl;
    cout << "pCollineWait " << pCollineWait->GetName() << endl;
}