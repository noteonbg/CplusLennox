#if 0

#include <iostream>

int main() {
    // 1. Initialization with assignment operator
    int a = 10;

    // 2. Uniform initialization (C++11 and later)
    int b{20};

    // 3. Default initialization
    int c; // c will have an undefined value (garbage)

    // 4. Direct initialization
    int d(30);

    // 5. Initialization in constructor initializer list (for classes)
    class MyClass {
    public:
        int x;
        MyClass() : x(40) {}
    };

    MyClass obj;

    // 6. Initialization with auto type deduction (C++11 and later)
    auto e = 50;

    // 7. Initialization with const variables
    const int f = 60;

    // 8. Initialization with constexpr variables (C++11 and later)
    constexpr int g = 70;

    // Outputting values to demonstrate initialization
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << " (garbage value)" << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "obj.x = " << obj.x << " (initialized in constructor)" << std::endl;
    std::cout << "e = " << e << std::endl;
    std::cout << "f = " << f << std::endl;
    std::cout << "g = " << g << std::endl;

    return 0;
}

#endif