#pragma once
#include <string>
#include "Resource.h"
#include <memory>
class Person
{
    private:
        std::string firstname;
        std::string lastname;
        int arbitrarynumber;
        // Resource* pResource; // a common pattern for something that is optional.
        // if Person always had a resource just as firstname and lastname, it would have been not been a pointer
        std::shared_ptr<Resource> pResource;

        friend bool operator<(int i, Person const& p);
    public:
        Person(std::string firstname, std::string lastname, int arbitrarynumber);
        Person();
        virtual ~Person();
        virtual std::string GetName() const;
        int GetNumber() const {return arbitrarynumber;}
        void SetNumber(int number) {arbitrarynumber = number;}
        void SetFirstName(std::string first) {firstname = first;}
        bool operator<(Person const& p) const;
        bool operator<(int i) const; // for things like p1 < 300
        void AddResource();
        std::string GetResourceName() const {return pResource ?pResource->GetName() : "";};
};
bool operator<(int i, Person const& p); // for things like 300 < p1