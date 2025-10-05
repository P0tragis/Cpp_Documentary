#include <iostream>




int main()
{



    //CONVERT
    //PESO
    const double PESO = 57.03;
    const double DOLLAR = 57.03;
    const double EURO = 66.39;
    const double YEN = 0.39;
    const double WON = 0.041;

    char currency;
    char options;

    std::cout << "Currency Converter\n";
    std::cout << "1.peso\n";
    std::cout << "2.dollar\n";
    std::cout << "3.euro\n";
    std::cout << "4.yen\n";
    std::cout << "5.won\n";

    std::cout << "choose a currency:";
    std::cin >> options;

    //peso
    if (options == '1') {
    std::cout << "choose a currency to be converted by pesos:";
    std::cout << "\n1.dollar\n2.euro\n3.yen\n4.won\n";
    std::cout << "enter the currency you want to convert to (1-4)";
    std::cin >> currency;
    double peso;
    if (currency == '1') {
        std::cout << "Enter amount of pesos be converted to dollars: ";
        std::cin >> peso;
        double converted = peso /DOLLAR;
        std::cout << peso << " pesos in dollar is " << converted << " dollars\n";
        }

        else if (currency == '2') {
            std::cout << "Enter amount of pesos to be converted om euro: ";
            std::cin >> peso;
            double converted = peso / EURO;
            std::cout << peso << " pesos of euro is " << converted << " euros\n";
        }

        else if (currency == '3') {
            std::cout << "Enter amount of pesos to be converted in yen: ";
            std::cin >> peso;
            double converted = peso / YEN;
            std::cout << peso << " pesos in yen is " << converted << " yen\n";
        }

        else if (currency == '4') {
            std::cout << "Enter amount of pesos to be converted in won: ";
            std::cin >> peso;
            double converted = peso / WON;
            std::cout << peso << " pesos in won is " << converted << " won\n";
        }

        else {
            std::cout << "Invalid currency option selected.\n";
        }
    }
    else if (options== '2') {
    std::cout << "choose a currency to be converted by dollars:";
    std::cout << "\n1.pesos\n2.euro\n3.yen\n4.won\n";
    std::cout << "enter the currency you want to convert to (1-4)";
    std::cin >> currency;
    double usd;
    //PESOS
    if (currency == '1') {
        std::cout << "Enter amount of dollars to be converted to pesos: ";
        std::cin >> usd;
        double converted = usd * PESO;
        std::cout << usd << " dollars in pesos is " << converted << " pesos\n";
        }
        //EURO
        else if (currency == '2') {
            std::cout << "Enter amount of dollars to be converted to euro: ";
            std::cin >> usd;
            double converted = (usd * DOLLAR) / EURO;
            std::cout << usd << " dollars in euros is " << converted << " euros\n";
        }
        //YEN
        else if (currency == '3') {
            std::cout << "Enter amount of dollars to be converted in yen: ";
            std::cin >> usd;
            double converted = (usd * DOLLAR) / YEN;
            std::cout << usd << " dollars in yen is " << converted << " yen\n";
        }
        //WON 
        else if (currency == '4') {
            std::cout << "Enter amount of dollars to be converted in won: ";
            std::cin >> usd;
            double converted = (usd * DOLLAR) / WON;
            std::cout << usd << " dollars in won is " << converted << " won\n";
        }
        else {
            std::cout << "Invalid currency option selected.\n";
            
        }
    }
    else if (options == '3') {
    std::cout << "choose a currency to be converted by eurp:";
    std::cout << "\n1.pesos\n2.yen\n3.dollars\n4.won\n";
    std::cout << "enter the currency you want to convert to (1-4)";
    std::cin >> currency;
    double eur;
    //PESOS
    if (currency == '1') {
        std::cout << "Enter amount of euro to be converted to pesos: ";
        std::cin >> eur;
        double converted = eur * EURO;
        std::cout << eur << " euro in pesos is " << converted << " pesos\n";
        }
        //yen
        else if (currency == '2') {
            std::cout << "Enter amount of euro to be converted to yen: ";
            std::cin >> eur;
            double converted = (eur * EURO) / YEN;
            std::cout << eur << " euro in yen is " << converted << " yen\n";
        }
        //DOLLARS
        else if (currency == '3') {
            std::cout << "Enter amount of euro to be converted to dollars: ";
            std::cin >> eur;
            double converted = (eur * EURO) / DOLLAR;
            std::cout << eur << " euros in dollars is " << converted << " dollars\n";
        }
        //WON 
        else if (currency == '4') {
            std::cout << "Enter amount of euro to be converted to won: ";
            std::cin >> eur;
            double converted = (eur * EURO) / WON;
            std::cout << eur << " euro in won is " << converted << " won\n";
        }
        else {
            std::cout << "Invalid currency option selected.\n";
            
        }
    }
    else if (options == '4') {
    std::cout << "choose a currency to be converted by yen:";
    std::cout << "\n1.pesos\n2.euros\n3.dollars\n4.won\n";
    std::cout << "enter the currency you want to convert to (1-4)";
    std::cin >> currency;
    double jpy;
    //PESOS
    if (currency == '1') {
        std::cout << "Enter amount of yen to be converted to pesos: ";
        std::cin >> jpy;
        double converted = jpy * YEN;
        std::cout << jpy << " yen in pesos is " << converted << " pesos\n";
        }
        //euros
        else if (currency == '2') {
            std::cout << "Enter amount of yen to be converted to euros: ";
            std::cin >> jpy;
            double converted = (jpy * YEN) / EURO;
            std::cout << jpy << " yen in euros is " << converted << " euros\n";
        }
        //DOLLARS
        else if (currency == '3') {
            std::cout << "Enter amount of yen to be converted to dollars: ";
            std::cin >> jpy;
            double converted = (jpy * YEN) / DOLLAR;
            std::cout << jpy << " yen in dollars is " << converted << " dollars\n";
        }
        //WON 
        else if (currency == '4') {
            std::cout << "Enter amount of yen to be converted to won: ";
            std::cin >> jpy;
            double converted = (jpy * YEN) / WON;
            std::cout << jpy << " yen in won is " << converted << " won\n";
        }
        else {
            std::cout << "Invalid currency option selected.\n";
            
        }
    }
    else if (options == '5') {
    std::cout << "choose a currency to be converted by yen:";
    std::cout << "\n1.pesos\n2.euros\n3.dollars\n4.yen\n";
    std::cout << "enter the currency you want to convert to (1-4)";
    std::cin >> currency;
    double kwon;
    //PESOS
    if (currency == '1') {
        std::cout << "Enter amount of won to be converted to pesos: ";
        std::cin >> kwon;
        double converted = kwon * WON;
        std::cout << kwon << " won in pesos is " << converted << " pesos\n";
        }
        //euros
        else if (currency == '2') {
            std::cout << "Enter amount of won to be converted to euros: ";
            std::cin >> kwon;
            double converted = (kwon * WON) / EURO;
            std::cout << kwon << " won in euros is " << converted << " euros\n";
        }
        //DOLLARS
        else if (currency == '3') {
            std::cout << "Enter amount of won to be converted to dollars: ";
            std::cin >> kwon;
            double converted = (kwon * WON) / DOLLAR;
            std::cout << kwon << " won in dollars is " << converted << " dollars\n";
        }
        //YEN
        else if (currency == '4') {
            std::cout << "Enter amount of won to be converted to yen: ";
            std::cin >> kwon;
            double converted = (kwon * WON) / YEN;
            std::cout << kwon << " won in yen is " << converted << " yen\n";
        }
        else {
            std::cout << "Invalid currency option selected.\n";
            
        }
    }

