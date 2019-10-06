#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person(std::string firstname, std::string lastname,
    int arbitrarynumber) : firstname(firstname), lastname(lastname),
    arbitrarynumber(arbitrarynumber)
{
    cout << "constructing" <<
        firstname << " " << lastname << endl;
}

Person::Person() : arbitrarynumber(0)
{
    cout << "constructing" << GetName() << endl;
}

Person::~Person()
{
    cout << "destructing" << GetName() << endl;
}

std::string Person::GetName() const
{
    return firstname + " " + lastname;
}