#include <iostream>
#include <string>

int main(void)
{
    std::string string;
    std::string *stringPTR;
    std::string &stringREF = string;

    string = "HI THIS IS BRAIN";
    stringPTR = &string;
    std::cout << "Memory address of the string variable: " << &string << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;
    std::cout << "Value of the string variable: " << string << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;
}