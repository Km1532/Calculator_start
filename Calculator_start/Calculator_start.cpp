#include <iostream>

int main() {
    // Калькулятор
    float num1, num2;
    std::cout << "Enter number 1: ";
    std::cin >> num1;

    std::cout << "Enter number 2: ";
    std::cin >> num2;

    char math{};
    std::cout << "Enter math symbol (+, -, *, /): ";
    std::cin >> math;

    //if (math == '+')
    //    std::cout << "Result: " << num1 + num2 << std::endl;
    //else if (math == '-')
    //    std::cout << "Result: " << num1 - num2 << std::endl;
    //else if (math == '*')
    //    std::cout << "Result: " << num1 * num2 << std::endl;
    //else if (math == '/') {
    //    if (num2 == 0.0f)
    //        std::cout << "Error: Division by zero" << std::endl;
    //    else
    //        std::cout << "Result: " << num1 / num2 << std::endl;
    //}
    //else {
    //    std::cout << "Invalid math symbol!" << std::endl;
    //}

    switch (math) {
    case '+': std::cout << "Result:" << num1 + num2 << std::endl; break;
    case '-': std::cout << "Result:" << num1 - num2 << std::endl; break;
    case '*': std::cout << "Result:" << num1 * num2 << std::endl; break;
    case '/':
        if (num2 == 0.0f) std::cout << "Error" << std::endl;
        else   std::cout << "Result: " << num1 / num2 << std::endl;
        break;
    default: std::cout << "Error math sym " << std::endl;
    }



    return 0;
}
