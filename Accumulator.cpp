#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "Person.h"
#include "Accum.h"

int main()
{
    Accum<int> integers(0);
    integers += 3;
    integers += 7;
    cout << integers.GetTotal() << endl;

    Accum<string> strings("");
    strings += "hello";
    strings += "world";
    cout << strings.GetTotal() << endl;

    // Person start("", "", 0);
    Accum<Person> people(0);
    Person p1("Colline", "Waitire", 12);
    Person p2("some", "name", 8);
    people += p1;
    people += p2;
    cout << people.GetTotal() << endl;

    return 0;
}