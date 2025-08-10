#include <iostream>

int main () {
    
    //intereger whole number

    int age = 16;
    int year = 2009;
    int month = 03;
    int day = 22;
    int height = 173;

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

    std::string firstname = "jen";
    std::string lastname = "bayas";
    std::string dayname = "Sunday";
    std::string food = "tinola";
    std::string characteristic = "noetic";
    std::string address = "UPPER WANGAL LA TRINIDAD BENGUET";
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
