#include <iostream>
#include "Person.h"
int main()
{
    Person p1("Colline", "Waitire", 12345);
    Person p2;
    std::string name = p1.getName();

    // int i = p1.arbitrarynumber; can't access private variable
    std::cout << "name is " << name << std::endl;

    return 0; 
}