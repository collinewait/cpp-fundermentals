#include "Person.h"
#include <iostream>
using std::cout;
using std::endl;

Person::Person(std::string firstname, std::string lastname,
    int arbitrarynumber) : firstname(firstname), lastname(lastname),
    arbitrarynumber(arbitrarynumber), pResource(nullptr)
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
    delete pResource;
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
    delete pResource;
    pResource = new Resource("Resource for " + GetName());
}

Person::Person(Person const & p)
{
    pResource = new Resource(p.pResource->GetName());
}

Person& Person::operator=(const Person& p)
{
    // typically first checks to make sure it is not assigning to itsself but
    // that code isn't here.
    delete pResource;
    pResource = new Resource(p.pResource->GetName());
    return *this;
}