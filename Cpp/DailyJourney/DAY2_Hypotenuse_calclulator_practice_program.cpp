#include <iostream>
#include <cmath>

int main() {
    double a, b, c;
   
    //hypotenuse formula is c = sqrt(a^2 + b^2);
    //a = pow(a, 2); 
    //b = pow(b, 2);
    //c = sqrt(a + b);

    std::cout << "Enter side A:";
    std::cin >> a;

    std::cout << "Enter side B:";
    std::cin >>b;
    
    c = sqrt(pow(a,2) + pow(b,2)); //less line of code
    std::cout << "side C:" << c << std::endl;

    return 0;
}