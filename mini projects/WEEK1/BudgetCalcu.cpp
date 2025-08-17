/*
 PLAN

 VARIABLES :
 
SALARY

*NEEDS
FOOD * GROCERIES
HOUSING(RENTING,BILLS,MAINTENANCE)
UTILITIES(WATER,ELECTRICITY.INTERNET)


*WANTS
FAST FOOD,SNACKS,COFFEE.FAST FOOD
SUBSCRIPTIONS(Netflix,Spotify)
CLOTHES,GADGETS.GAMES.

*SAVINGS

INVESTMENTS(STOCKS,BONDS,MUTUAL FUNDS)
EMERGENCY FUNDS
SAVINGS
*/

#include <iostream>

int main()
{
    
    //variables
    float salary;
    float groceries,renting,bills,maintenance,water,electricity,internet;
    float fast_food,snacks,coffee,subscriptions,clothes,gadgets,games;
    float investments, emergency_funds, savings;


    std::cout << "BUDGET CALCULATOR" << std::endl;

    std::cout << "Enter your monthly salary: ";
    std::cin >> salary;

    std::cout << salary << std::endl;


    std::cout << "Enter your monthly expenses for groceries: ";
    std::cin >> groceries;
    if (salary < groceries) {
        std::cout << "Your groceries expenses exceed your salary.\n";
    }
    else {
        (salary -= groceries);
        std::cout << "salary left:" << salary << std::endl;

    }

    std::cout << "Enter your monthly expenses for renting: ";
    std::cin >> renting;
    if (salary < renting) {
        std::cout << "Your renting expenses exceed your salary.\n";
    }
    else {
    (salary -= renting);
    std::cout << "salary left:" << salary << std::endl;
    }
    std::cout << "Enter your monthly expenses for bills: ";
    std::cin >> bills;
    if (salary < bills) {
        std::cout << "Your bills expenses exceed your salary.\n";
    }
    else {
        (salary -= bills);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for maintenance: ";
    std::cin >> maintenance;
    if (salary < maintenance) {
        std::cout << "Your maintenance expenses exceed your salary.\n";
    }
    else {
        (salary -= maintenance);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for water: ";
    std::cin >> water;
    if (salary < water) {
        std::cout << "Your water expenses exceed your salary.\n";
    }
    else {
        (salary -= water);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for electricity: ";
    std::cin >> electricity;
    if (salary < electricity) {
        std::cout << "Your electricity expenses exceed your salary.\n";
    }
    else {
        (salary -= electricity);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for internet: ";
    std::cin >> internet;
    if (salary < internet) {
        std::cout << "Your internet expenses exceed your salary.\n";
    }
    else {
        (salary -= internet);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for fast food: ";
    std::cin >> fast_food;
    if (salary < fast_food) {
        std::cout << "Your fast food expenses exceed your salary.\n";
    }
    else {
        (salary -= fast_food);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for snacks: ";
    std::cin >> snacks;
    if (salary < snacks) {
        std::cout << "Your snacks expenses exceed your salary.\n";
    }
    else {
        (salary -= snacks);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for coffee: ";
    std::cin >> coffee;
    if (salary < coffee) {
        std::cout << "Your coffee expenses exceed your salary.\n";
    }
    else {
        (salary -= coffee);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for subscriptions: ";
    std::cin >> subscriptions;
    if (salary < subscriptions) {
        std::cout << "Your subscriptions expenses exceed your salary.\n";
    }
    else {
        (salary -= subscriptions);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for clothes: ";
    std::cin >> clothes;
    if (salary < clothes) {
        std::cout << "Your clothes expenses exceed your salary.\n";
    }
    else {
        (salary -= clothes);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for gadgets: ";
    std::cin >> gadgets;
    if (salary < gadgets) {
        std::cout << "Your gadgets expenses exceed your salary.\n";
    }
    else {
        (salary -= gadgets);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for games: ";
    std::cin >> games;
    if (salary < games) {
        std::cout << "Your games expenses exceed your salary.\n";
    }
    else {
        (salary -= games);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for investments: ";
    std::cin >> investments;
    if (salary < investments) {
        std::cout << "Your investments expenses exceed your salary.\n";
    }
    else {
        (salary -= investments);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for emergency funds: ";
    std::cin >> emergency_funds;
    if (salary < emergency_funds) {
        std::cout << "Your emergency funds expenses exceed your salary.\n";
    }
    else {
        (salary -= emergency_funds);
        std::cout << "salary left:" << salary << std::endl;
    }

    std::cout << "Enter your monthly expenses for savings: ";
    std::cin >> savings;

    if (salary < savings) {
        std::cout << "Your savings expenses exceed your salary.\n";
    }
    else {
        (salary -= savings);
        std::cout << "salary left:" << salary << std::endl;
    }


        std::cout << "salary left: " << salary << std::endl;

        std::cout << "groceries: Php " << groceries << std::endl;
        std::cout << "renting: Php " << renting << std::endl;
        std::cout << "bills: Php " << bills << std::endl;
        std::cout << "maintenance: Php " << maintenance << std::endl;
        std::cout << "water: Php " << water << std::endl;
        std::cout << "electricity: Php " << electricity << std::endl;
        std::cout << "internet: Php " << internet << std::endl;
        std::cout << "fast food: Php " << fast_food << std::endl;
        std::cout << "snacks: Php " << snacks << std::endl;
        std::cout << "coffee: Php " << coffee << std::endl;
        std::cout << "subscriptions: Php " << subscriptions << std::endl;
        std::cout << "clothes: Php " << clothes << std::endl;
        std::cout << "gadgets: Php " << gadgets << std::endl;
        std::cout << "games: Php " << games << std::endl;
        std::cout << "investments: Php " << investments << std::endl;
        std::cout << "emergency funds: Php " << emergency_funds << std::endl;
        std::cout << "savings: Php " << savings << std::endl;
    return 0;
}
