#include "Person.h"
#include "Tweeter.h"
#include <iostream>
#include <memory>
using std::shared_ptr;
using std::make_shared;
using std::cout;
using std::endl;

// fix slicing by using a const reference
int Dummy(Person const& p) {return p.GetNumber();}

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

    shared_ptr<Person> spKate = make_shared<Tweeter>("Third", "name", 908, "@handle");
    cout << "spKate " << spKate->GetName() << endl;

    Colline =  CollineWait; // variables fall away.
    cout << Colline.GetName() << endl;

    int x;
    x = Dummy(Colline);
    cout << "x..." << x << endl;
    x = Dummy(CollineWait);
    cout << "x again..." << x << endl;
}