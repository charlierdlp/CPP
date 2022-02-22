#include <string>
#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String: "<< str << std::endl;
    std::cout << "String pointer: "<< &str << std::endl;
    std::cout << std::endl;
    std::cout << "String: "<< *stringPTR << std::endl;
    std::cout << "String pointer: "<< stringPTR << std::endl;
    std::cout << std::endl;
    std::cout << "String: "<< stringREF << std::endl;
    std::cout << "String pointer: "<< &stringREF << std::endl;
}