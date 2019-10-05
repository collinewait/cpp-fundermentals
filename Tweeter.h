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
};