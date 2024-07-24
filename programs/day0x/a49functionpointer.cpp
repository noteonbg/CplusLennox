#include <iostream>

// Example functions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

int main() {
    // Declare function pointers
    double (*operation)(double, double);

    // Assign the function pointers
    operation = add;  // Point to the 'add' function
    std::cout << "Result of add(5.0, 3.0): " << operation(5.0, 3.0) << std::endl;

    operation = subtract;  // Point to the 'subtract' function
    std::cout << "Result of subtract(5.0, 3.0): " << operation(5.0, 3.0) << std::endl;

    return 0;
}
