#pragma once
#include <string>

class Person
{
    private:
        std::string firstname;
        std::string lastname;
        int arbitrarynumber;
    public:
        Person(std::string firstname, std::string lastname, int arbitrarynumber);
        Person();
        ~Person();
        std::string GetName() const;
        int GetNumber() const {return arbitrarynumber;}
        void SetNumber(int number) {arbitrarynumber = number;}
};