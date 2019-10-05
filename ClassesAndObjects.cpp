#include <iostream>
#include "Person.h"
using std::cout;
using std::endl;
using std::string;

int main()
{
    Person p1("Colline", "Waitire", 12345);
    {
        Person p2;
    }
    cout << "after innermost block" << endl;
    string name = p1.getName();

    // int i = p1.arbitrarynumber; can't access private variable
    cout << "name is " << name << endl;

    return 0; 
}