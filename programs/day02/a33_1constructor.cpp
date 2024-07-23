#include <iostream>
using namespace std;

// Base class (Parent)
class Parent {
protected:
    int a;

public:

    Parent()
    {
        cout << "Parent class constructor without arguments";
    }

    Parent(int x) : a(x) {
        cout << "Parent constructor called" << endl;
    }

    void displayX() {
        cout << "Value of a: " << a << endl;
    }
};

// Derived class (Child)
class Child : public Parent {
private:
    int b;

public:

    Child()  { cout << "child class no argument constructor";}

    Child(int x, int y) : Parent(x),b(y) {
        cout << "Child constructor called" << endl;
    }

    void displayY() {
        cout << "Value of b: " << b << endl;
    }
};

int main() {
    Child c1(20, 10); // Creating a Child object
    c1.displayX();    // Display value of a
    c1.displayY();    // Display value of b
    return 0;
}



