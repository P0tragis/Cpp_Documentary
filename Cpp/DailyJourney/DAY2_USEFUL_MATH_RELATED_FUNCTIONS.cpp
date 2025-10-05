#include <iostream>
#include <cmath> 
using namespace std;
namespace max {
    double a = 10.0;
    double b = 5.0;
    double c = std::max(a, b); // MAXIMUM VALUE

}
namespace min {
    double a = 10.0;
    double b = 5.0;
    double c = std::min(a, b); // MINIMUM VALUE
}
namespace power {
    double a = 3.0;
    double b = 6.0;
    double c = std::pow(a, b); //POWER
}
namespace square_root {
    double a = 16.0;
    double b = 25.0;
    double c = std::sqrt(b); //SQUARE ROOT
}
namespace absolute_value {
    double a = -50;
    double b = -20; 
    double c = std::abs(b); // Absolute value "- = +"
}
namespace rounded_value{
    double a = 25.61;
    double b = 25.49;
    double c = std::round(a); // Rounds to nearest integer

}
namespace ceil_value {
    double a = 25.61;
    double b = 25.49;
    double c = std::ceil(b); // ALWAYS ROUNDS UP
}
namespace floor_value {
    double a = 25.99;
    double b = 25.49;
    double c = std::floor(a); // ALWAYS ROUNDS DOWN
}
int main() {
    std::cout << "maximum:" << max::c << std::endl;
    std::cout << "minimum:" << min::c << std::endl;
    std::cout << "power:" << power::c << std::endl;
    std::cout << "square root:" << square_root::c << std::endl;
    std::cout << "absolute value:" << absolute_value::c << std::endl;
    std::cout << "rounded:" << rounded_value::c << std::endl;
    std::cout << "ceiling value:" << ceil_value::c << std::endl;

    return 0;
}
//CMATH FUNCTIONS = "https://www.cplusplus.com/reference/cmath/"