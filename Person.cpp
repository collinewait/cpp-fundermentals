#include "Person.h"
#include <iostream>
Person::Person(std::string firstname, std::string lastname,
    int arbitrarynumber) : firstname(firstname), lastname(lastname),
    arbitrarynumber(arbitrarynumber)
{
    std::cout << "constructing" <<
        firstname << " " << lastname << std::endl;
}

Person::Person() : arbitrarynumber(0)
{
    std::cout << "constructing" <<
        firstname << " " << lastname << std::endl;
}

Person::~Person()
{
    std::cout << "destructing" <<
        firstname << " " << lastname << std::endl;
}

std::string Person::getName()
{
    return firstname + " " + lastname;
}