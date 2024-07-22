//#define NDEBUG to disable assert.
#include <iostream>
#include <cassert>

int divide(int numerator, int denominator) {
    // Ensure denominator is not zero before division
    assert(denominator != 0 && "Denominator must not be zero");
    return numerator / denominator;
}

int main() {
    int a = 10;
    int b = 2;
    int c = 0;

    std::cout << "Result of " << a << " / " << b << " = " << divide(a, b) << std::endl;

    // This will trigger the assert and terminate the program
    std::cout << "Result of " << a << " / " << c << " = " << divide(a, c) << std::endl;

    return 0;
}
