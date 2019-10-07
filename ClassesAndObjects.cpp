#include <iostream>
#include "Person.h"
#include "Tweeter.h"
#include "Status.h"
using std::cout;
using std::endl;
using std::string;

int main()
{
    Person p1("Colline", "Waitire", 12345);
    {
        Tweeter t1("Wait", "col", 66754, "@someone");
        string name2 = t1.GetName();
    }
    Person p2("Collino", "Walker", 123);
    cout << "after innermost block" << endl;
    cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;
    p1.SetNumber(678);
    cout << "p1: " << p1.GetName() << " " << p1.GetNumber() << endl;

    cout << "p1 is ";
    if(!(p1 < p2))
        cout << "not ";
    cout << "less than p2" << endl;

    cout << "p1 is ";
    if(!(p1 < 300))
        cout << "not ";
    cout << "less than 300" << endl;

    cout << "300 is ";
    if(!(300 < p1))
        cout << "not ";
    cout << "less than p1" << endl;

    Status s = Pending;
    cout << "status is " << s << endl;
    s = Approved;
    cout << "status is " << s << endl;

    FileError fe = FileError::notfound;
    fe = FileError::ok;
    NetworkError ne = NetworkError::disconnected;
    ne = NetworkError::ok;

    return 0; 
}