#pragma once
#include <string>
#include "Resource.h"

class Person
{
    private:
        std::string firstname;
        std::string lastname;
        int arbitrarynumber;
        Resource* pResource; // a common pattern for something that is optional.
        // if Person always had a resource just as firstname and lastname, it would have been not been a pointe

        friend bool operator<(int i, Person const& p);
    public:
        Person(std::string firstname, std::string lastname, int arbitrarynumber);
        Person();
        ~Person();
        Person(Person const & p); // copy constructor
        Person& operator=(const Person& p); // copy assignment
        std::string GetName() const;
        int GetNumber() const {return arbitrarynumber;}
        void SetNumber(int number) {arbitrarynumber = number;}
        void SetFirstName(std::string first) {firstname = first;}
        bool operator<(Person const& p) const;
        bool operator<(int i) const; // for things like p1 < 300
        void AddResource();
};
bool operator<(int i, Person const& p); // for things like 300 < p1