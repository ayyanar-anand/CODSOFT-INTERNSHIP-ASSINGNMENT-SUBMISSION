#include <iostream.h>
#include<conio.h>
int main() {
    char operation;
    double num1, num2;

    // Input two numbers
    std::cout << "Enter first number: ";
    std::cin >> num1;
    std::cout << "Enter second number: ";
    std::cin >> num2;

    // Choose an operation
    std::cout << "Choose an operation (+, -, *, /): ";
    std::cin >> operation;

    // Perform the selected operation
    switch(operation) {
        case '+':
            std::cout << "Result: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Result: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Result: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 == 0) {
                std::cout << "Error! Division by zero is not allowed." << std::endl;
            } else {
                std::cout << "Result: " << num1 / num2 << std::endl;
            }
            break;
        default:
            std::cout << "Invalid operation! Please choose from +, -, *, /." << std::endl;
            break;
    }

    return 0;
}