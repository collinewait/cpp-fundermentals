#include <string>
class Person
{
    private:
        std::string firstname;
        std::string lastname;
        int arbitrarynumber;
    public:
        Person(std::string firstname, std::string lastname, int arbitrarynumber);
        Person()=default;
        std::string getName();
};