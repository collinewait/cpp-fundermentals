#include "Resource.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;
using std::endl;

int main()
{
    {
        Resource localResource ("local");
        string localString = localResource.GetName();
    }
    Resource* pResource = new Resource("created with new");
    string newString = pResource->GetName();
    int j = 3;
    delete pResource;
    pResource = nullptr; // better practice

    cout << "Name is: " << newString << endl;

    // string string3 = pResource->GetName(); // using a deleted resource results into errors

    return 0;
}