// Keep in mind that you don't have to write your own max function
// there is already a perfect good max function in the standard library.
// we writing one here to demo templates.

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;

#include "Person.h"

template <class T>
T max(T const& t1, T const& t2)
{
    return t1 < t2 ? t2 : t1;
}

int main()
{
    cout << "max of 33 and 44 is " << max(33, 44) << endl;
    string s1 = "hello";
    string s2 = "world";
    // cout << "max of " << s1 << " and " << s2 <<
    //     " is " << max(s1, s2) << endl;
    Person p1("Colline", "waitire", 123);
    Person p2("Wait", "mat", 378);
    cout << "max of " << p1.GetName() << " and " << p2.GetName() <<
        " is "<< max(p1, p2).GetName() << endl;
}