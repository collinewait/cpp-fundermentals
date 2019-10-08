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

std::string Person::GetName() const
{
    return firstname + " " + lastname;
}

bool Person::operator<(Person const& p) const
{
    return arbitrarynumber < p.arbitrarynumber;
}

bool Person::operator<(int i) const
{
    return arbitrarynumber < i;
}

bool operator<(int i, Person const& p)
{
    return i < p.arbitrarynumber;
}

void Person::AddResource()
{
    pResource.reset();
    pResource=std::make_shared<Resource>("Resource for " + GetName());
}

