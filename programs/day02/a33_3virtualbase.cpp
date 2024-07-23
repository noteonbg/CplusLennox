#include <iostream>

class A {
public:
    void show() {
        std::cout << "Hello from A\n";
    }
};

class B : virtual public A {
};

class C : virtual public A {
};

class D : public B, public C 
{
};

int main() {
    D object;
    object.show(); // Calls A::show() without ambiguity
    return 0;
}
