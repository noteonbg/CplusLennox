#include <iostream>
using namespace std;

class Base {
public:
    virtual void func() {
        cout << "I am in base" << endl;
    }
};

class Derived : public Base {
public:
    // Mistake: Different signature (int a) instead of matching base class signature
    //void func(int a) override 
    void func() override
    {
        cout << "I am in derived class" << endl;
    }
};

int main() {
    Base b;
    Derived d;
    cout << "Compiled successfully" << endl;
    return 0;
}


/*

following purposes:
Intention Clarification: It clearly indicates to the reader of the code that “this is a virtual method, and it is intended to override a virtual method from the base class.”
Compiler Check: The compiler checks whether the function in the derived class truly overrides a virtual function from the base class. If not, it generates a compile-time error.




*/