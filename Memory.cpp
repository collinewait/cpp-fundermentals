#include "Person.h"

int main()
{
    Person Wait("Colline", "Waitire", 256);
    Wait.AddResource();
    Wait.SetFirstName("Bion");
    Wait.AddResource();
    Person p2 = Wait;
    return 0;
}