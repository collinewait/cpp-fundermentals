#include <iostream>
// #include "Person.h"
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
        string name2 = t1.getName();
    }
    cout << "after innermost block" << endl;
    string name = p1.getName();

    // int i = p1.arbitrarynumber; can't access private variable
    cout << "name is " << name << endl;

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