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
    cout << "constructing" <<
        firstname << " " << lastname << endl;
}

Person::~Person()
{
    cout << "destructing" <<
        firstname << " " << lastname << endl;
}

std::string Person::getName()
{
    return firstname + " " + lastname;
}