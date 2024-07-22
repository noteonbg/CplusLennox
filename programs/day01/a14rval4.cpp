#include <iostream>
#include <utility>

// Display function overloads
void Display(int& i) {
    std::cout << i << " int& called" << std::endl;
}

void Display(int&& i) {
    std::cout << i << " int&& called" << std::endl;
}

// Wrapper function using perfect forwarding
template <class T>
void DisplayWrapper(T&& t) {
    Display(std::forward<T>(t));
}

int main() {
    int x = 5;

    // Example 1: Passing an rvalue (prvalue)
    DisplayWrapper(5); // Output: int&& called

    // Example 2: Passing an lvalue
    DisplayWrapper(x); // Output: int& called

    return 0;
}
