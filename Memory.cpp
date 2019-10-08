#include "Person.h"
#include <string>
#include <iostream>
using std::cout;
using std::endl;
using std::string;

int Dummy(Person p) {return p.GetNumber();}

int main()
{
    {
        Person Wait("Colline", "Waitire", 256);
        Wait.AddResource();
        string s1 = Wait.GetResourceName();
        Wait.AddResource();   
        Person col = Wait;
        Wait = col;
        int k = Dummy(col);

        cout << "String name: " << s1 << endl;
    }
    return 0;
}