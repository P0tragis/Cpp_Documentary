#include <iostream>

int main () {
    
    //intereger whole number

    int age = ;
    int year = ;
    int month = ;
    int day = ;
    int height = ;

    //double (float)
    double price = 1.99;
    double measurement = 2.5;
    double temperature = 25.0;
    double weight = 60.5;
    
    //char (single character)

    char grade = 'A';
    char initial = 'O';
    char currency = '$';

    //boolean (true or false)

    bool student = true;
    bool power = true;
    bool isRaining = false;
    bool forsale = true;

    //strings (sequence of texst)

    std::string firstname = " ";
    std::string lastname = " ";
    std::string dayname = "Sunday";
    std::string food = " ";
    std::string characteristic = " ";
    std::string address = " ";
    std::cout << "information details:\n"
              << "first name: " << firstname << '\n'
              << "last name: " << lastname << '\n'
              << "day:" << dayname << '\n'
              << "day:" << day << '\n'
              << "month:" << month << '\n'
              << "year:" << year << '\n'
              << "age:" << age << '\n'
              << "height:" << height << '\n'
              << "weight:" << weight << '\n'
              << "food: " << food << '\n'
              << "characteristic: " << characteristic << '\n'
              << "address: " << address << '\n'
              << "grade: " << grade << '\n';
    return 0;
}

