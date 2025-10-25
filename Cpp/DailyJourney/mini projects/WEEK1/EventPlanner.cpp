#include <iostream>
#include <string>
int main()
{
    std::cout << "Event Planner\n";

    char choice;
    std::cout << "1. Add Event\n";
    std::cout << "2. View Events\n";
    std::cout << "3. Exit\n";
    std::cout << "Enter choice";
    std::cin >> choice;
    
    if (choice == '1') {
    std::string eventName;
    std::cout << "Enter event name: ";
    std::cin >> eventName;

    std::string day;
    std::cout << "Enter event day: ";
    std::cin >> day;
    std::string month;
    std::cout << "Enter event month: ";
    std::cin >> month;
    std::string year;
    std::cout << "Enter event year: ";
    std::cin >> year;

    std::string time;
    std::cout << "Enter event time: ";
    std::cin >> time;

    std::string location;
    std::cout << "Enter event location: ";
    std::cin >> location;
    std::cout << "Date: " << day << " " << month << " " << year << "\n";
    std::cout << "Time: " << time << "\n";
    std::cout << "Location: " << location << "\n";
    }
    else if (choice == '2') {
        std::cout << "Viewing Events\n";
        // Code to display events goes here
        std::cout << "No events to display.\n";
    }
    else if (choice == '3') {
        std::cout << "Exiting Event Planner\n";
    }
    else {
        std::cout << "Invalid choice. Please try again.\n";
    }

    return 0;
} 