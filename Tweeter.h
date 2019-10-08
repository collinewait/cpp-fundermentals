#pragma once
#include "Person.h"
#include <string>

class Tweeter :
    public Person
{
private:
    std::string twitterhandle;
public:
    Tweeter(std::string fast,
        std::string last,
        int arbitrary,
        std::string handle);
    ~Tweeter();
    std::string GetName() const; // overriding GetName here
    int GetNumber() const {return 0;}
};