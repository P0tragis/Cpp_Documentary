#include <iostream>
#include <string>

int main() {
    /*
    std::string name;
    int age;

    std::cout << "enter your full name:" << "\n";
    std::getline(std::cin,name);

    std::cout << "enter your age:" << "\n";
    std::cin >> age;


    std::cout << "hello " << name << ", you are " << age << " years old." << std::endl;
    */

    std::string name;
    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;
     
    std::cout << "Enter your full name: ";
    std::getline(std::cin, name);

    

    std::cout << "Hello " << name << ", you are " << age << " years old." << std::endl;

    return 0;
}