#include <iostream>
#include <stdexcept>  // Include the standard exception classes

// Function that divides two numbers
double divide(double numerator, double denominator) {
    if (denominator == 0.0) {
        // Throw a runtime error if denominator is zero
        throw std::runtime_error("Division by zero!");
    }
    return numerator / denominator;
}

int main() {
    try {
        double result = divide(10.0, 0.0);
        std::cout << "Result: " << result << std::endl;
    } catch (const std::exception& e) {
        // Catch the exception and handle it
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
