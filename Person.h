#pragma once
#include <string>

class Person
{
    private:
        std::string firstname;
        std::string lastname;
        int arbitrarynumber;

        friend bool operator<(int i, Person const& p);
    public:
        Person(std::string firstname, std::string lastname, int arbitrarynumber);
        Person();
        ~Person();
        std::string GetName() const;
        int GetNumber() const {return arbitrarynumber;}
        void SetNumber(int number) {arbitrarynumber = number;}
        bool operator<(Person const& p) const;
        bool operator<(int i) const; // for things like p1 < 300
};
bool operator<(int i, Person const& p); // for things like 300 < p1