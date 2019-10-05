#include "Person.h"
Person::Person(std::string firstname, std::string lastname,
    int arbitrarynumber) : firstname(firstname), lastname(lastname),
    arbitrarynumber(arbitrarynumber)
{
}

std::string Person::getName()
{
    return firstname + " " + lastname;
}