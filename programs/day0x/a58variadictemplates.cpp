#include <iostream>

// Base case: Empty function
void print() {
    std::cout << "I am an empty function and I am called at last.\n";
}

// Variadic function template that takes variable number of arguments
template <typename T, typename... Types>
void print(T var1, Types... var2) {
    std::cout << var1 << std::endl;
    print(var2...); // Recursive call
}

int main() {
    print(1, 2, 3.14, "Pass me any number of arguments", "I will print\n");
    return 0;
}
