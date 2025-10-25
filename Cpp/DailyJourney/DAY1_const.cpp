#include <iostream>

int main() {
    const double PI = 3.14159; // PI CANNOT BE CHANGED BECAUSE ITS CONSTANT
    const int LIGHT_SPEED = 299792458;
    const int WIDTH = 1920;
    const int HEIGHT = 1080;

    std::cout << "Constants:\n"
              << "PI: " << PI << '\n'
              << "Light Speed: " << LIGHT_SPEED << " m/s\n"
              << "Width: " << WIDTH << " pixels\n"
              << "Height: " << HEIGHT << " pixels\n";
    return 0;
}