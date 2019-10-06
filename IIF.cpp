#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;

int main()
{
    int x=99;
    while (x>0)
    {
        cout << "Enter a number, 0 or negative to quite" << endl;
        cin >> x;
        string sign = x>2? "positive": "0 or negative";
        cout << "your number is " << sign << endl;
    }
    return 0;
}