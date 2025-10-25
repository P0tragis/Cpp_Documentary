#include <iostream>
int main()
{
    int num1,num2;
    char op;

    std::cout << "Enter first number:";
    std::cin >> num1;
    std::cout << "Enter second number:";
    std::cin >> num2;
    std::cout << "Enter operator (+, -, *, /):";
    std::cin >> op;

    if (op == '+')
        std::cout << "Result: " << num1 + num2 << std::endl;
    else if (op == '-')
        std::cout << "Result: " << num1 - num2 << std::endl;
    else if (op == '*')
        std::cout << "Result: " << num1 * num2 << std::endl;
    else if (op == '/')
    {
        if (num2 != 0)
            std::cout << "Result: " << num1 / num2 << std::endl;
        else
            std::cout << "Error: Division by zero is not allowed." << std::endl;
    }
    else
        std::cout << "Error: Invalid operator." << std::endl;

    return 0;
}
